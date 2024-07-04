#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
////巨人航空公司，需要另一驾飞机，每天飞4班（航班102,311,444,和519）。把程序扩展为可以处理4个航班，用一个顶层菜单提供航班选择和退出。选择一个特定航班，就会出现编程练习8类似的菜单
////但是该菜单要添加一个新选项：确认座位分配。而且，菜单中的退出是返回顶层菜单。每次显示都要指明当前正在处理的航班号。另外座位分配显示要指明确认状态
//
//char* s_gets(char* st, int n);
//void menu();
//int topmeun();
//#define len 30
//struct feiji
//{
//	char sit[5];
//	int panbie;
//	char fname[len];
//	char lname[len];
//};
//struct feiji xinxiku[4][12] =
//{
//	{
//	{"W01",0,"",""},
//	{"K02",0,"",""},
//	{"A03",0,"",""},
//	{"B04",0,"",""},
//	{"C05",0,"",""},
//	{"D06",0,"",""},
//	{"D07",0,"",""},
//	{"A08",0,"",""},
//	{"K09",0,"",""},
//	{"B10",0,"",""},
//	{"F11",0,"",""},
//	{"D12",0,"",""},
//	},
//	{
//	{"W01",0,"",""},
//	{"K02",0,"",""},
//	{"A03",0,"",""},
//	{"B04",0,"",""},
//	{"C05",0,"",""},
//	{"D06",0,"",""},
//	{"D07",0,"",""},
//	{"A08",0,"",""},
//	{"K09",0,"",""},
//	{"B10",0,"",""},
//	{"F11",0,"",""},
//	{"D12",0,"",""},
//	},
//	{
//	{"W01",0,"",""},
//	{"K02",0,"",""},
//	{"A03",0,"",""},
//	{"B04",0,"",""},
//	{"C05",0,"",""},
//	{"D06",0,"",""},
//	{"D07",0,"",""},
//	{"A08",0,"",""},
//	{"K09",0,"",""},
//	{"B10",0,"",""},
//	{"F11",0,"",""},
//	{"D12",0,"",""},
//	},
//	{
//	{"W01",0,"",""},
//	{"K02",0,"",""},
//	{"A03",0,"",""},
//	{"B04",0,"",""},
//	{"C05",0,"",""},
//	{"D06",0,"",""},
//	{"D07",0,"",""},
//	{"A08",0,"",""},
//	{"K09",0,"",""},
//	{"B10",0,"",""},
//	{"F11",0,"",""},
//	{"D12",0,"",""},
//	}
//};
//void a(struct feiji arr[]);
//void b(struct feiji arr[]);
//void c(struct feiji arr[]);
//void d(struct feiji* arr);
//void e(struct feiji* arr);
//void g(struct feiji* arr);
//int main()
//{
//	int hehe;
//	hehe=topmeun();
//	int arr1;
//	while (hehe != -1)
//	{
//		if (hehe == 0)
//			arr1 = 102;
//		if (hehe == 1)
//			arr1 = 311;
//		if (hehe == 2)
//			arr1 = 444;
//		if (hehe == 3)
//			arr1 = 519;
//		printf("现在处理的航班为%d\n", arr1);
//		menu();
//		char ch = 0;
//		while ((ch = getchar()) != '\n' && ch != 'f')
//		{
//			while (getchar() != '\n')
//				continue;
//			switch (ch)
//			{
//			case 'a':
//				a(xinxiku[hehe]);
//				break;
//			case 'b':
//				b(xinxiku[hehe]);
//				break;
//			case 'c':
//				c(xinxiku[hehe]);
//				break;
//			case 'd':
//				d(xinxiku[hehe]);
//				break;
//			case 'e':
//				e(xinxiku[hehe]);
//				break;
//			case 'g':
//				g(xinxiku[hehe]);
//				break;
//			case 'f':
//				break;
//			}
//			menu();
//
//		}
//		hehe=topmeun();
//	}
//		printf("结束\n");
//		return 0;
//	
//}
//
//void menu()
//{
//	printf("To choose a function, enter its letter label:\n");
//	printf("a.Show alphabetical list of seats\n");
//	printf("b. Show list  of empty seats\n");
//	printf("c.Show number of empty seats\n");
//	printf("d.Assign a customer to a seat assignment\n");
//	printf("e.Delete a seat assignement\n");
//	printf("f.Quit\n");
//	printf("g.显示已售出的坐票\n");
//}
//void a(struct feiji arr[])
//{
//	printf("按字母排列顺序的座位表为：\n");
//	for (int i = 0;i < 11;i++)
//	{
//		for (int w = 0;w < 11 - i;w++)
//		{
//			if (arr[w].sit[0] > arr[w + 1].sit[0])
//			{
//				struct feiji arr1 = arr[w];
//				arr[w] = arr[w + 1];
//				arr[w + 1] = arr1;
//			}
//		}
//	}
//	for (int k = 0;k < 12;k++)
//	{
//		printf("%s ", arr[k].sit);
//		if ((k + 1) % 4 == 0)
//			printf("\n");
//	}
//}
//void g(struct feiji arr[])
//{
//	printf("以下为已售座位\n");
//	int count = 0;
//	for (int i = 0;i < 12;i++)
//	{
//		if (arr[i].panbie == 1)
//		{
//			printf("%s ", arr[i].sit);
//			count++;
//		}
//		if ((count) % 4 == 0 && count != 0)
//			printf("\n");
//	}
//	if (count <= 0)
//		printf("无售出票\n");
//	if (count < 12 && count>0)
//		printf("\n");
//
//}
//void b(struct feiji arr[])
//{
//	printf("以下为空座位\n");
//	int count = 0;
//	for (int i = 0;i < 12;i++)
//	{
//		if (arr[i].panbie == 0)
//		{
//			printf("%s ", arr[i].sit);
//			count++;
//		}
//		if ((count) % 4 == 0 && count != 0)
//			printf("\n");
//	}
//	if (count < 12)
//		printf("\n");
//}
//void c(struct feiji arr[])
//{
//	int count = 0;
//	for (int i = 0;i < 12;i++)
//	{
//		if (arr[i].panbie == 0)
//			count++;
//	}
//	printf("还有%d个空座位\n", count);
//}
//void d(struct feiji* arr)
//{
//	printf("请输入你要预订的列车编号\n");
//	char bian[len];
//	int panbie = 0;
//	while (s_gets(bian, len) != NULL && bian[0] != '\0')
//	{
//		for (int k = 0;k < 12;k++)
//		{
//			if (strcmp((arr + k)->sit, bian) == 0)
//			{
//				printf("请输入预订者的名\n");
//				s_gets((arr + k)->fname, len);
//				printf("请输入预订者的姓氏\n");
//				s_gets((arr + k)->lname, len);
//				(arr + k)->panbie = 1;
//				printf("预订成功！\n");
//				panbie = 1;
//			}
//		}
//		if (panbie == 0)
//			printf("输入错误！\n");
//		printf("请输入你要预订的车票（空输入退出）\n");
//	}
//}
//void e(struct feiji* arr)
//{
//	printf("请输入你要退空票的列车号\n");
//	char bian[len];
//	int panbie = 0;
//	while (s_gets(bian, len) != NULL && bian[0] != '\0')
//	{
//		for (int k = 0;k < 12;k++)
//		{
//			if (strcmp((arr + k)->sit, bian) == 0)
//			{
//				(arr + k)->panbie = 0;
//				printf("删除成功！\n");
//				panbie = 1;
//			}
//		}
//		if (panbie == 0)
//			printf("输入错误！\n");
//		printf("请输入你要退空的车票（空输入退出）\n");
//	}
//}
//char* s_gets(char* st, int n)
//{
//	char* ret;
//	ret = fgets(st, n, stdin);
//	if (ret)
//	{
//		while (*st != '\n' && *st != '\0')
//			st++;
//		if (*st == '\n')
//			*st = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret;
//}
//int topmeun()
//{
//	printf("以下为今日航班：102   311   444   519\n");
//	printf("请输入你想查询的航班：(空输入退出)\n");
//	char arr1[5];
//	s_gets(arr1, 5);
//		if (strcmp(arr1, "102") == 0)
//		{
//			return 0;
//		}
//		if (strcmp(arr1, "311") == 0)
//		{
//			return 1;
//		}
//
//		if (strcmp(arr1, "444") == 0)
//		{
//			return 2;
//		}
//		if (strcmp(arr1, "519") == 0)
//		{
//			return 3;
//		}
//		return -1;
//}

//10.编写一个程序，通过一个函数指针数组，实现菜单。例如，选择菜单中的a，将激活有该数组第一个元素指向的函数
//void (*pf) (double x,double y);
//void menu();
//void jia(double x, double y);
//void jian(double x, double y);
//void chen(double x, double y);
//void chu(double x, double y);
//int main()
//{
//	char ch;
//	int x, y;
//	menu();
//	while (scanf("%c", &ch),ch>='a',ch<='d')
//	{
//		while (getchar() != '\n')
//			continue;
//		printf("请输入操作数与被操作数\n");
//		scanf("%d %d", &x, &y);
//		while (getchar() != '\n')
//			continue;
//		switch (ch)
//		{
//		case 'a':
//			pf = &jia;
//				break;
//		case 'b':
//			pf = &jian;
//				break;
//		case 'c':
//			pf = &chen;
//				break;
//		case 'd':
//			pf = &chu;
//				break;
//		}
//		pf(x, y);
//		printf("请进行下一项操作\n");
//		menu();
//	}
// return 0;
//}
//void (*pf) (double x,double y);
//void menu()
//{
//	puts("a.进行加法运算                  b.进行减法运算");
//	puts("c.进行乘法运算                  d.进行除法运算");
//
//}
//void jia(double x, double y)
//{
//	printf("%.1lf+%.1lf=%.1lf\n", x, y, x + y);
//}
//void jian(double x, double y)
//{
//
//	printf("%.1lf-%.1lf=%.1lf\n", x, y, x -y);
//}
//void chen(double x, double y)
//{
//
//	printf("%.1lf*%.1lf=%.1lf\n", x, y, x * y);
//}
//void chu(double x, double y)
//{
//
//	printf("%.1lf/%.1lf=%.1lf\n", x, y, x /y);
//}



//struct jia
//{
//	int i;
//	char arr;
//};
//struct jia jihe[3] =
//{
//	{1},
//	{2},
//	{3},
//};
//void haha(struct jia arr[]);
//int main()
//{
//	/*haha(jihe);
//	for (int i = 0;i < 3;i++)
//		printf("%d ", jihe[i]);*/
//}
//void haha(struct jia arr[])
//{
//	for (int i = 0;i < 3;i++)
//	{
//		arr[i].i += 1;
//	}
//}

//11.编写一个名为transform（）的函数，接受4个参数：内含double类型数据的源数组名，内含double类型数据的目标数组名，一个表示
//数组元素个数的int类型参数，函数名（或等价的函数指针）。transform（）函数应把指定函数应用于源数组中的每个元素，并把返还值
//存储在目标数组中。例如：transform（source，target，100，sin）；
//该声明会把target[0]设置为sin（source[0]）,等等，共有100个元素。在一个程序中调用transform（）4次，以测试该函数。分别使用math.h
//函数库中的两个函数以及自定义的两个函数作为参数


#include <math.h>
double pinfang(double x);
void transform(double arr1[], double arr2[], int i, double (*pf)(double x));
int main()
{
	double yuanshuzu[100];
	double mubiao[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = sizeof(mubiao)/sizeof(mubiao[0]);
	int i = 4;
	transform(yuanshuzu, mubiao, i, pinfang);
	for (int x = 0;x < i;x++)
		printf("%.1lf ", yuanshuzu[x]);
	return 0;
}

void transform(double arr1[], double arr2[], int i, double(*pf)(double x))
{
	for (int x = 0;x < i;x++)
	{
		arr1[x] = pf(arr2[x]);
	}
}
double pinfang(double x)
{
	double y = 0;
	y = x * x;
	return y;
}