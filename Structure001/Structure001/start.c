//#include <stdio.h>
//
//#define shuming 40
//#define zuozhe 40
//#define maxbooks 100
//char * s_gets(char* st, int n);
//struct book
//{
//	char zz[zuozhe];
//	char sm[shuming];
//	float qian;
//};
//int main()
//{
//	int count = 0;
//	struct book jihe[maxbooks];
//	printf("������������\n");
//	while (count < maxbooks && s_gets(jihe[count].sm, shuming) != NULL && jihe[count].sm[0] != '\0')
//	{
//
//		printf("�������������֣�\n");
//		s_gets(jihe[count].zz, zuozhe);
//		printf("���������ļ۸�\n");
//		scanf("%f", &jihe[count].qian);
//		while (getchar() != '\n')
//			continue;
//		count++;
//		if (count < maxbooks)
//			printf("��������һ�����������\n");
//
//	}
//
//	if (count > 0)
//		for (int i = 0;i < count;i++)
//		{
//			printf("%s��������%s �۸�Ϊ%.2f\n", jihe[i].sm, jihe[i].zz, jihe[i].qian);
//		}
//	else
//		printf("��û������һ����\n");
//	return 0;
//}
//char* s_gets(char* st, int n)
//{
//	char* ret;
//	ret = fgets(st, n, stdin);
//	if (ret)
//	{
//		while (*st != '\n'&&*st!='\0')
//			st++;
//		if (*st == '\n')
//			*st ='\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret;
//}


#include <string.h>
char * s_gets(char* st, int n);
#include <stdio.h>
#define nlen 30
struct namect
{
	char fn[nlen];
	char ln[nlen];
	int leter;
};

void gin(struct namect*);
void min(struct namect*);
void sin(struct namect*);
int main()
{
	struct namect person;
	gin(&person);
	min(&person);
	sin(&person);
	return 0;
}


void gin(struct namect* st)
{
	printf("�����������\n");
	s_gets(st->fn,nlen);
		printf("�����������\n");
		s_gets(st->ln, nlen);
}
void min(struct namect*st)
{
	st->leter = strlen(st->fn) + strlen(st->ln);
}
void sin(struct namect* st)
{
	printf("�������%s����%s��%d����Ϣ", st->fn, st->ln, st->leter);
}
char* s_gets(char* st, int n)
{
	char* ret;
	ret = fgets(st, n, stdin);
	if (ret)
	{
		while (*st != '\n'&&*st!='\0')
			st++;
		if (*st == '\n')
			*st ='\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret;
}
