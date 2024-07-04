
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//7.巨人航空公司的机群由12个座位的飞机组成。它每天飞行一个航班。根据下面的要求，编写一个座位预订程序

//a.该程序使用一个内含12个结构的数组。每个结构中包括：一个成员表示座位编号，一个成员表示座位是否被预订
//一个成员表示预订人的名，一个成员表示预订人的姓
//b.设置一个菜单
//c.该程序能承购执行上面给出的菜单。选择d和e要提示用户进行额外输入，每个选项都能让用户中止输入
//d.执行特定程序后，该程序再次显示菜单，除非用户选择f

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
	{"W01",1,"三","张"},
	{"K02",1,"四","李"},
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
	printf("结束\n");
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
	printf("g.显示已售出的坐票\n");
}
void a(struct feiji arr[])
{
	printf("按字母排列顺序的座位表为：\n");
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
	printf("以下为已售座位\n");
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
		printf("无售出票\n");
	if (count < 12 && count>0)
		printf("\n");

}
void b(struct feiji arr[])
{
	printf("以下为空座位\n");
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
	printf("还有%d个空座位\n", count);
}
void d(struct feiji* arr)
{
	printf("请输入你要预订的列车编号\n");
	char bian[len];
	int panbie = 0;
	while (s_gets(bian, len) != NULL && bian[0] != '\0')
	{
		for (int k = 0;k < 12;k++)
		{
			if (strcmp((arr + k)->sit, bian) == 0)
			{
				printf("请输入预订者的名\n");
				s_gets((arr + k)->fname, len);
				printf("请输入预订者的姓氏\n");
				s_gets((arr + k)->lname, len);
				(arr + k)->panbie = 1;
				printf("预订成功！\n");
				panbie = 1;
			}
		}
		if (panbie == 0)
			printf("输入错误！\n");
		printf("请输入你要预订的车票（空输入退出）\n");
	}
}
void e(struct feiji* arr)
{
	printf("请输入你要退空票的列车号\n");
	char bian[len];
	int panbie = 0;
	while (s_gets(bian, len) != NULL && bian[0] != '\0')
	{
		for (int k = 0;k < 12;k++)
		{
			if (strcmp((arr + k)->sit, bian) == 0)
			{
				(arr + k)->panbie = 0;
				printf("删除成功！\n");
				panbie = 1;
			}
		}
		if (panbie == 0)
			printf("输入错误！\n");
		printf("请输入你要退空的车票（空输入退出）\n");
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