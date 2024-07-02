#include <stdio.h>
#define len 20
#include <string.h>

//这是一个可以执行判断一年到某月有多少天，或者某年某月某日有多少天
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
int fenhuan(void);//程序一
const char* Year[12] = { "jan","feb","mar","apr","may","jue","jul","aug","spe","oct","nov","dec" };
char* s_gets(char* st, int n);
int main()
{


	//程序一
	/*puts("输入一个具体信息，我返回年初到该日的时间，年份用来判断闰年");
	int panbie;
	panbie=fenhuan();
	printf("一年到该日期有%d天\n", panbie);*/
	//

	//程序二
	char shuru[len];
	printf("请输入需要计算的年初到月份时日的三个英文缩写：");
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
				printf("一年到%s有%d天\n", arr[w].name,sum);
				break;
			}
		}
		puts("请输入一下个月份的简写（空行输入退出程序）");
    }
	//
	puts("结束");
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
	printf("请输入具体日期\n");
	scanf("%d", &day);
	qinli();
	puts("请输入具体的月份三个英文小写缩写:");
	s_gets(yue, len);
	puts("请输入具体年份：");
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
			//printf("%d年%s月%d日有%d天\n",year, arr[w].name,day, sum);
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
////3.指向结构体数组指针
// n=sizeof(arr)/sizeof(year)//有多少个
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
//		sum += (pt + i)->days;//调整当前结构体的位置 +i
//	}
//	printf("sum=%d", sum);
//	printf("一年每个月平均值为%d（四舍五入）", sum / i);
//}

