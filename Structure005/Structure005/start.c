#include <stdio.h>
#define len 20
#include <string.h>

//����һ������ִ���ж�һ�굽ĳ���ж����죬����ĳ��ĳ��ĳ���ж�����
struct yearr
{
	char name[len];
	int days;
}arr[12] =
{
	{"jan",31},
	{"feb",28},
	{"mar",31},
	{"apr",30},
	{"may",31},
	{"jue",30},
	{"jul",31},
	{"aug",31},
	{"spe",30},
	{"oct",31},
	{"nov",30},
	{"dec",31}
};
void qinli();
int fenhuan(void);//����һ
const char* Year[12] = { "jan","feb","mar","apr","may","jue","jul","aug","spe","oct","nov","dec" };
char* s_gets(char* st, int n);
int main()
{


	//����һ
	/*puts("����һ��������Ϣ���ҷ�����������յ�ʱ�䣬��������ж�����");
	int panbie;
	panbie=fenhuan();
	printf("һ�굽��������%d��\n", panbie);*/
	//

	//�����
	char shuru[len];
	printf("��������Ҫ�����������·�ʱ�յ�����Ӣ����д��");
	while(s_gets(shuru,len)!=NULL&&shuru[0]!='\0')
	{
		int sum = 0;
		int w;
		for (int i = 0;i < 12;i++)
		{
			if (strcmp(shuru, Year[i]) == 0)
			{
				for (w = 0;w <= i;w++)
				{
					sum += arr[w].days;
				}
				w--;
				printf("һ�굽%s��%d��\n", arr[w].name,sum);
				break;
			}
		}
		puts("������һ�¸��·ݵļ�д�����������˳�����");
    }
	//
	puts("����");
	return 0;

}
char* s_gets(char* st, int n)
{
	
	char* ret;
	ret = fgets(st, n, stdin);
	if (ret)
	{
		while (*st != '\n' && *st != '0')
			st++;
		if (*st == '\n')
			*st = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret;
}
int fenhuan(void)
{
	
	char yue[len];
	int day;
	int year;
	printf("�������������\n");
	scanf("%d", &day);
	qinli();
	puts("�����������·�����Ӣ��Сд��д:");
	s_gets(yue, len);
	puts("�����������ݣ�");
	scanf("%d", &year);
	qinli();
	int sum = 0;
	int w;
	for (int i = 0;i < 12;i++)
	{
		if (strcmp(yue, Year[i]) == 0)
		{
			for(w = 0;w <=i;w++)
			{
				if (w == i)
					sum += day;
				else
				sum += arr[w].days;
			}
			//w--;
			if (year % 400 == 0 || (year % 4 == 0 && year & 100 == 0))
				sum += 1;
			//printf("%d��%s��%d����%d��\n",year, arr[w].name,day, sum);
			break;
		}
	}
		return sum;
}
void qinli()
{
	while (getchar() != '\n')
		continue;
}
////3.ָ��ṹ������ָ��
// n=sizeof(arr)/sizeof(year)//�ж��ٸ�
//void average(struct yearr* pt, int n);
//int main()
//{
//	int numb = sizeof(arr) / sizeof(struct yearr);
//	average(arr, numb);
//	return 0;
//}
//void average(struct yearr* pt, int n)
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		sum += (pt + i)->days;//������ǰ�ṹ���λ�� +i
//	}
//	printf("sum=%d", sum);
//	printf("һ��ÿ����ƽ��ֵΪ%d���������룩", sum / i);
//}

