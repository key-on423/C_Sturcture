#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ming 20
#define maxr 10
char* s_gets(char* st, int n);
struct people
{
	char name[ming];
	char home[ming];
	char xing[ming];
	int age;
};

int main()
{
	struct people wen[maxr];
	int count = 0;
	int index, filecount;
	FILE* pp;
	int size = sizeof(struct people);
	if ((pp = fopen("qinshi.txt", "a+b")) == NULL)
	{
		fprintf(stderr, "Can open the qinshi.txt file\n");
		exit(1);
	}

	rewind(pp);
	while (count < maxr && fread(&wen[count], size, 1, pp) == 1)
	{
		if (count == 0)
			puts("Ŀǰ����ϢΪ��");
		printf("%s �ļ�����%s �Ա���%s\n", wen[count].name, wen[count].home, wen[count].xing);
		count++;
	}
	filecount = count;
	if (count == maxr)
	{
		fputs("�洢��Ϣ�Ѿ�����", stderr);
		exit(2);
	}
	puts("������һЩ�µ�������Ϣ\n");
	while (count < maxr && s_gets(wen[count].name, ming) != NULL && wen[count].name[0] != '\0')
	{
		puts("�����������ļ��磺");
		s_gets(wen[count].home, ming);
		puts("�������������Ա�");
		s_gets(wen[count].xing,ming);
		puts("����������������:");
		scanf("%d", &wen[count++].age);
		while (getchar() != '\n')
			continue;
		if (count < maxr)
			puts("������һ��������");
	}

	if (count > 0)
	{
		puts("���������������ĵ��ļ���Ϣ��\n");
		for (index = 0;index < count;index++)
			printf("%s�ļ�����%s �Ա�%s ����%d\n", wen[index].name, wen[index].home, wen[index].xing, wen[index].age);
		fwrite(&wen[filecount], size, count - filecount, pp);
	}
	else
		puts("û���˵���Ϣ\n");
	puts("����\n");
	fclose(pp);
	return 0;
}
char* s_gets(char* st, int n)
{
	char* find;
	char* ret;
	ret = fgets(st, n, stdin);
	if (ret)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;

	}
	return ret;
}