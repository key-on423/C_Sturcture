#include <stdio.h>
#include <ctype.h>
//���������ͼ���ӡһ����Ϣ��������������ĸ˳���ӡһ����Ϣ�����������ļ۸������ӡһ����Ϣ
#define shuming 40
#define zuozhe 40
#define maxbooks 100
char * s_gets(char* st, int n);
void dayinw(struct book* st,int count);//������������ĸ˳��
void dayinp(struct book* st, int count);//������ļ۸�˳��
struct book
{
	char zz[zuozhe];
	char sm[shuming];
	float qian;
};
int main()
{
	int count = 0;
	struct book jihe[maxbooks];
	printf("������������(����ĸ��д/����Сдϵͳ�Զ�ת��)\n");
	while (count < maxbooks && s_gets(jihe[count].sm, shuming) != NULL && jihe[count].sm[0] != '\0')
	{

		printf("�������������֣�\n");
		s_gets(jihe[count].zz, zuozhe);
		printf("���������ļ۸�\n");
		scanf("%f", &jihe[count].qian);
		while (getchar() != '\n')
			continue;
		count++;
		if (count < maxbooks)
			printf("��������һ�����������\n");

	}

	if (count > 0)
	{
		for (int z = 0;z < count;z++)
			jihe[z].sm[0] = toupper(jihe[z].sm[0]);
		printf("�������Ϊ:\n");
		for (int i = 0;i < count;i++)
		{
			printf("%s��������%s �۸�Ϊ%.2f\n", jihe[i].sm, jihe[i].zz, jihe[i].qian);
		}
		dayinw(jihe, count);
		dayinp(jihe, count);
		/*printf("ϵͳȷ����ԭ���������ϢΪ\n");
		for (int i = 0;i < count;i++)
		{
			printf("%s��������%s �۸�Ϊ%.2f!!!\n", jihe[i].sm, jihe[i].zz, jihe[i].qian);
		}*/
	}
	else
		printf("��û������һ����\n");

	return 0;
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
void dayinw(struct book* st, int count)
{
	struct book arr[maxbooks];

	for (int x = 0;x < count;x++)
		arr[x] = st[x];
	
	for (int i = 0;i < count-1;i++)
	{
		for (int w = 0;w < count-1 - i;w++)
		{
			if (arr[w].sm[0] > arr[w + 1].sm[0])
			{

				struct book k = arr[w];
				arr[w] = arr[w + 1];
				arr[w + 1] = k;
			}
		}
	}
	
	printf("������ĸ��������Ϊ\n");
	for (int i = 0;i < count;i++)
	{
		printf("%s��������%s �۸�Ϊ%.2f\n", arr[i].sm, arr[i].zz, arr[i].qian);
	}
}
void dayinp(struct book* st, int count)
{
	struct book arr[maxbooks];
	for (int x = 0;x < count;x++)
		arr[x] = st[x];//����һ����ʱ���� ����ԭ������Ϣ
	for (int i = 0;i < count-1;i++)//count���м����� Ҫ��count-1��
	{

		for (int w = 0;w < count -1- i;w++)//�ȵ�i���ٱ�i��
		{
			if (arr[i].qian > arr[i + 1].qian)
			{

				struct book k = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = k;
			}
		}
	}
	printf("���ռ۸���������Ϊ\n");
	for (int i = 0;i < count;i++)
	{
		printf("%s��������%s �۸�Ϊ%.2f\n", arr[i].sm, arr[i].zz, arr[i].qian);
	}
}
