#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
////���˺��չ�˾����Ҫ��һ�ݷɻ���ÿ���4�ࣨ����102,311,444,��519�����ѳ�����չΪ���Դ���4�����࣬��һ������˵��ṩ����ѡ����˳���ѡ��һ���ض����࣬�ͻ���ֱ����ϰ8���ƵĲ˵�
////���Ǹò˵�Ҫ���һ����ѡ�ȷ����λ���䡣���ң��˵��е��˳��Ƿ��ض���˵���ÿ����ʾ��Ҫָ����ǰ���ڴ���ĺ���š�������λ������ʾҪָ��ȷ��״̬
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
//		printf("���ڴ���ĺ���Ϊ%d\n", arr1);
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
//		printf("����\n");
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
//	printf("g.��ʾ���۳�����Ʊ\n");
//}
//void a(struct feiji arr[])
//{
//	printf("����ĸ����˳�����λ��Ϊ��\n");
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
//	printf("����Ϊ������λ\n");
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
//		printf("���۳�Ʊ\n");
//	if (count < 12 && count>0)
//		printf("\n");
//
//}
//void b(struct feiji arr[])
//{
//	printf("����Ϊ����λ\n");
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
//	printf("����%d������λ\n", count);
//}
//void d(struct feiji* arr)
//{
//	printf("��������ҪԤ�����г����\n");
//	char bian[len];
//	int panbie = 0;
//	while (s_gets(bian, len) != NULL && bian[0] != '\0')
//	{
//		for (int k = 0;k < 12;k++)
//		{
//			if (strcmp((arr + k)->sit, bian) == 0)
//			{
//				printf("������Ԥ���ߵ���\n");
//				s_gets((arr + k)->fname, len);
//				printf("������Ԥ���ߵ�����\n");
//				s_gets((arr + k)->lname, len);
//				(arr + k)->panbie = 1;
//				printf("Ԥ���ɹ���\n");
//				panbie = 1;
//			}
//		}
//		if (panbie == 0)
//			printf("�������\n");
//		printf("��������ҪԤ���ĳ�Ʊ���������˳���\n");
//	}
//}
//void e(struct feiji* arr)
//{
//	printf("��������Ҫ�˿�Ʊ���г���\n");
//	char bian[len];
//	int panbie = 0;
//	while (s_gets(bian, len) != NULL && bian[0] != '\0')
//	{
//		for (int k = 0;k < 12;k++)
//		{
//			if (strcmp((arr + k)->sit, bian) == 0)
//			{
//				(arr + k)->panbie = 0;
//				printf("ɾ���ɹ���\n");
//				panbie = 1;
//			}
//		}
//		if (panbie == 0)
//			printf("�������\n");
//		printf("��������Ҫ�˿յĳ�Ʊ���������˳���\n");
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
//	printf("����Ϊ���պ��ࣺ102   311   444   519\n");
//	printf("�����������ѯ�ĺ��ࣺ(�������˳�)\n");
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

//10.��дһ������ͨ��һ������ָ�����飬ʵ�ֲ˵������磬ѡ��˵��е�a���������и������һ��Ԫ��ָ��ĺ���
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
//		printf("������������뱻������\n");
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
//		printf("�������һ�����\n");
//		menu();
//	}
// return 0;
//}
//void (*pf) (double x,double y);
//void menu()
//{
//	puts("a.���мӷ�����                  b.���м�������");
//	puts("c.���г˷�����                  d.���г�������");
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

//11.��дһ����Ϊtransform�����ĺ���������4���������ں�double�������ݵ�Դ���������ں�double�������ݵ�Ŀ����������һ����ʾ
//����Ԫ�ظ�����int���Ͳ���������������ȼ۵ĺ���ָ�룩��transform��������Ӧ��ָ������Ӧ����Դ�����е�ÿ��Ԫ�أ����ѷ���ֵ
//�洢��Ŀ�������С����磺transform��source��target��100��sin����
//���������target[0]����Ϊsin��source[0]��,�ȵȣ�����100��Ԫ�ء���һ�������е���transform����4�Σ��Բ��Ըú������ֱ�ʹ��math.h
//�������е����������Լ��Զ��������������Ϊ����


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