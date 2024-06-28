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
			puts("目前的信息为：");
		printf("%s 的家乡是%s 性别是%s\n", wen[count].name, wen[count].home, wen[count].xing);
		count++;
	}
	filecount = count;
	if (count == maxr)
	{
		fputs("存储信息已经满了", stderr);
		exit(2);
	}
	puts("请输入一些新的人名信息\n");
	while (count < maxr && s_gets(wen[count].name, ming) != NULL && wen[count].name[0] != '\0')
	{
		puts("现在输入他的家乡：");
		s_gets(wen[count].home, ming);
		puts("现在输入他的性别：");
		s_gets(wen[count].xing,ming);
		puts("现在输入他的年龄:");
		scanf("%d", &wen[count++].age);
		while (getchar() != '\n')
			continue;
		if (count < maxr)
			puts("输入下一个人名：");
	}

	if (count > 0)
	{
		puts("这里是你所增添后的的文件信息：\n");
		for (index = 0;index < count;index++)
			printf("%s的家乡是%s 性别%s 年龄%d\n", wen[index].name, wen[index].home, wen[index].xing, wen[index].age);
		fwrite(&wen[filecount], size, count - filecount, pp);
	}
	else
		puts("没有人的信息\n");
	puts("结束\n");
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