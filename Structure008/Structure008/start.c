
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//7.���˺��չ�˾�Ļ�Ⱥ��12����λ�ķɻ���ɡ���ÿ�����һ�����ࡣ���������Ҫ�󣬱�дһ����λԤ������

//a.�ó���ʹ��һ���ں�12���ṹ�����顣ÿ���ṹ�а�����һ����Ա��ʾ��λ��ţ�һ����Ա��ʾ��λ�Ƿ�Ԥ��
//һ����Ա��ʾԤ���˵�����һ����Ա��ʾԤ���˵���
//b.����һ���˵�
//c.�ó����ܳй�ִ����������Ĳ˵���ѡ��d��eҪ��ʾ�û����ж������룬ÿ��ѡ������û���ֹ����
//d.ִ���ض�����󣬸ó����ٴ���ʾ�˵��������û�ѡ��f

char* s_gets(char* st, int n);
void menu();
#define len 30
struct feiji
{
	char sit[5];
	int panbie;
	char fname[len];
	char lname[len];
};
struct feiji xinxiku[12] =
{
	{"W01",1,"��","��"},
	{"K02",1,"��","��"},
	{"A03",0,"",""},
	{"B04",0,"",""},
	{"C05",0,"",""},
	{"D06",0,"",""},
	{"D07",0,"",""},
	{"A08",0,"",""},
	{"K09",0,"",""},
	{"B10",0,"",""},
	{"F11",0,"",""},
	{"D12",0,"",""}
};
void a(struct feiji arr[]);
void b(struct feiji arr[]);
void c(struct feiji arr[]);
void d(struct feiji* arr);
void e(struct feiji* arr);
void g(struct feiji* arr);
int main()
{
	menu();
	char ch = 0;
	while ((ch = getchar()) != '\n' && ch != 'f')
	{
		while (getchar() != '\n')
			continue;
		switch (ch)
		{
		case 'a':
			a(xinxiku);
			break;
		case 'b':
			b(xinxiku);
			break;
		case 'c':
			c(xinxiku);
			break;
		case 'd':
			d(xinxiku);
			break;
		case 'e':
			e(xinxiku);
			break;
		case 'g':
			g(xinxiku);
			break;
		case 'f':
			break;
		}
		menu();

	}
	printf("����\n");
	return 0;
}

void menu()
{
	printf("To choose a function, enter its letter label:\n");
	printf("a.Show alphabetical list of seats\n");
	printf("b. Show list  of empty seats\n");
	printf("c.Show number of empty seats\n");
	printf("d.Assign a customer to a seat assignment\n");
	printf("e.Delete a seat assignement\n");
	printf("f.Quit\n");
	printf("g.��ʾ���۳�����Ʊ\n");
}
void a(struct feiji arr[])
{
	printf("����ĸ����˳�����λ��Ϊ��\n");
	for (int i = 0;i < 11;i++)
	{
		for (int w = 0;w < 11 - i;w++)
		{
			if (arr[w].sit[0] > arr[w + 1].sit[0])
			{
				struct feiji arr1 = arr[w];
				arr[w] = arr[w + 1];
				arr[w + 1] = arr1;
			}
		}
	}
	for (int k = 0;k < 12;k++)
	{
		printf("%s ", arr[k].sit);
		if ((k + 1) % 4 == 0)
			printf("\n");
	}
}
void g(struct feiji arr[])
{
	printf("����Ϊ������λ\n");
	int count = 0;
	for (int i = 0;i < 12;i++)
	{
		if (arr[i].panbie == 1)
		{
			printf("%s ", arr[i].sit);
			count++;
		}
		if ((count) % 4 == 0 && count != 0)
			printf("\n");
	}
	if (count <= 0)
		printf("���۳�Ʊ\n");
	if (count < 12 && count>0)
		printf("\n");

}
void b(struct feiji arr[])
{
	printf("����Ϊ����λ\n");
	int count = 0;
	for (int i = 0;i < 12;i++)
	{
		if (arr[i].panbie == 0)
		{
			printf("%s ", arr[i].sit);
			count++;
		}
		if ((count) % 4 == 0 && count != 0)
			printf("\n");
	}
	if (count < 12)
		printf("\n");
}
void c(struct feiji arr[])
{
	int count = 0;
	for (int i = 0;i < 12;i++)
	{
		if (arr[i].panbie == 0)
			count++;
	}
	printf("����%d������λ\n", count);
}
void d(struct feiji* arr)
{
	printf("��������ҪԤ�����г����\n");
	char bian[len];
	int panbie = 0;
	while (s_gets(bian, len) != NULL && bian[0] != '\0')
	{
		for (int k = 0;k < 12;k++)
		{
			if (strcmp((arr + k)->sit, bian) == 0)
			{
				printf("������Ԥ���ߵ���\n");
				s_gets((arr + k)->fname, len);
				printf("������Ԥ���ߵ�����\n");
				s_gets((arr + k)->lname, len);
				(arr + k)->panbie = 1;
				printf("Ԥ���ɹ���\n");
				panbie = 1;
			}
		}
		if (panbie == 0)
			printf("�������\n");
		printf("��������ҪԤ���ĳ�Ʊ���������˳���\n");
	}
}
void e(struct feiji* arr)
{
	printf("��������Ҫ�˿�Ʊ���г���\n");
	char bian[len];
	int panbie = 0;
	while (s_gets(bian, len) != NULL && bian[0] != '\0')
	{
		for (int k = 0;k < 12;k++)
		{
			if (strcmp((arr + k)->sit, bian) == 0)
			{
				(arr + k)->panbie = 0;
				printf("ɾ���ɹ���\n");
				panbie = 1;
			}
		}
		if (panbie == 0)
			printf("�������\n");
		printf("��������Ҫ�˿յĳ�Ʊ���������˳���\n");
	}
}
char* s_gets(char* st, int n)
{
	char* ret;
	ret = fgets(st, n, stdin);
	if (ret)
	{
		while (*st != '\n' && *st != '\0')
			st++;
		if (*st == '\n')
			*st = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret;
}