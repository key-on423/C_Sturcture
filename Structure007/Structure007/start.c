#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//4.�༭һ�����򣬴���һ����������Ա�Ľṹģ�棺
//a.��һ����Ա����ᱣ�պţ��ڶ����Ա��һ����������Ա�Ľṹ����һ����Ա���������ڶ�����Ա�����м�������������Ա�����ա�
//��������ʼ��һ���ں�5�������ͽṹ�����顣
//������м�����ֻ��ӡ���ĵ�һ����ĸ�������һ����(.);���û���м��������ô�ӡ�㡣��дһ��������д�ӡ���ѽṹ���鴫�ݸ�
//���������
//b.�޸�a���֣����ݽṹ��ֵ�����ǽṹ�ĵ�ַ
//#define max 60
//#include <string.h>
//struct baoxian
//{
//	double number;
//	struct name
//	{
//		char fname[max];
//		char mname[max];
//		char lname[max];
//	};
//}arr[5] =
//{
//	{3020399823,"Dribble","Helen","Flossie"}
//};
//void print(struct baoxian* pf,int n);
//void print2(struct baoxian pf[], int n);
//int main()
//{
//	int n = sizeof(arr) / sizeof(struct baoxian);
//	print(arr,n);
//	print2(arr, n);
//}
//void print(struct baoxian* pf,int n)
//{
//	printf("�����ǽṹ�ڰ�������Ϣ��\n");
//	for (int i = 0;i < n;i++)
//	{
//		if (pf[i].number < 1)
//			break;
//		printf("%s, ", (pf+i)->fname);
//		printf("%s ", (pf + i)->lname);
//		if (strlen((pf + i)->mname) > 0)
//			printf("%c. ", (pf + i)->mname[0]);
//		printf("-- %.0lf\n", (pf + i)->number);
//	}
//
//}
//void print2(struct baoxian pf[], int n)
//{
//	for (int i = 0;i < n;i++)
//	{
//		if (pf[i].number < 1)
//			break;
//		printf("%s, ", pf[i].fname);
//		printf("%s ", pf[i].lname);
//		if (strlen(pf[i].mname) > 0)
//			printf("%c. ", pf[i].mname[0]);
//		printf("-- %.0lf\n", pf[i].number);
//	}
//}


//5.��дһ���������������Ҫ��
//a.�ⲿ����һ����������Ա�Ľṹģ��name��һ���ַ����洢����һ���ַ����洢��
//b.�ⲿ����һ����3����Ա�Ľṹģ��student��һ��name���͵Ľṹ��һ��grade����洢3�������ͷ�����һ�������洢3������ƽ����
//c.��main��������������һ���ں�CSIZE��=4����student���ͽṹ�����飬����ʼ����Щ�ṹ�����ֲ��֡��ú���ִ��g��e��f������������
//d.�Խ����ķ�ʽ���ÿ��ѧ���ĳɼ�����ʾ�û�����ѧ���������ͷ������ѷ����洢��grade������Ӧ�Ľṹ�С�������main����������
//������������ѭ�������
//e.����ÿ���ṹ��ƽ���֣����Ѽ�����ֵ������Ӧ��Ա
//f.��ӡÿ���ṹ����Ϣ
//g.��ӡ�����˵�ƽ���֣������нṹ�������Ա��ƽ��ֵ

//#define CSIZE 4
//#define len 66
//struct name
//{
//	char fname[len];
//	char lname[len];
//};
//struct student
//{
//	struct name cun;
//	double grade[3];
//	double pinjun;
//};
//char* s_gets(char* st, int n);
//void print(struct student pt[], int n);
//int main()
//{
//	struct student xinxiku[CSIZE] =
//	{
//		""
//	};
//	printf("�������һλѧ������()\n");
//	int i = 0;
//	double sum = 0;
//	while (s_gets(xinxiku[i].cun.fname,len) != NULL && xinxiku[i].cun.fname[0] != '\0' && i < CSIZE)
//	{
//		
//		printf("��������λͬѧ������\n");
//		s_gets(xinxiku[i].cun.lname, len);
//		printf("������������λͬѧ������ ��ѧ Ӣ��ɼ�\n");
//		scanf("%lf %lf %lf", &(xinxiku[i].grade[0]), &(xinxiku[i].grade[1]), &(xinxiku[i].grade[2]));
//		while (getchar() != '\n')
//			continue;
//		xinxiku[i].pinjun = (xinxiku[i].grade[0] + xinxiku[i].grade[1] + xinxiku[i].grade[2]) / 3;
//		printf("��������һλѧԱ����������������Ǽǣ�\n");
//		sum += xinxiku[i].pinjun;
//		i++;
//	}
//	print(xinxiku, i);
//	printf("����%d�˵�ƽ���ɼ�Ϊ%.0lf\n", i, sum / i);
//	printf("����\n");
//	
//}
//char* s_gets(char* st, int n)
//{
//	char* ret;
//	ret = fgets(st,n,stdin);
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
//void print(struct student pt[], int n)
//{
//	printf("���������ϢΪ\n");
//	for (int i = 0;i < n;i++)
//	{
//		printf("%s %s �����ĳɼ�Ϊ%.1lf ��ѧ�ɼ�Ϊ%.1lf Ӣ��ɼ�Ϊ%.1lf��ƽ���ɼ�Ϊ%.1lf\n", pt[i].cun.fname,pt[i].cun.lname,pt[i].grade[0], pt[i].grade[1], pt[i].grade[2],pt[i].pinjun);
//	}
//}


//6.һ���ı��ļ��б�����һ������ӵ���Ϣ��
//struct qiu
//{
//	
//	char fname[20];
//	char lname[20];
//	int shot;
//	int number;
//};
//struct qiu xinxiku[20] = {""};
//int main()
//{
//	FILE* pf;
//	if (pf = fopen("data.txt", "r") == NULL)
//	{
//		printf("Can not open the data.txt file\n");
//		exit(EXIT_FAILURE);
//	}
//	char fname[20];
//	char lname[20];
//	int number;
//	int shot;
//	int count;
//	while (1)
//	{
//		//������ʱ������ȡ�ļ���Ϣ��֮��洢�ṹ��������
//		count=fscanf(pf, "%d %s %s %d",number, fname, lname, &shot);
//		if (count < 4)//û�ж�ȡ������ȷ����Ϣ�˳���ȡ����
//			break;
//		strcpy(xinxiku[number].fname, fname);
//		strcpy(xinxiku[number].lname, lname);
//		xinxiku[number].number = number;
//		xinxiku[number].shot = shot;
//	}
//}