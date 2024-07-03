#include <stdio.h>
#include <ctype.h>
//按照输入的图书打印一次信息，按照书名的字母顺序打印一次信息，按照书名的价格升序打印一次信息
#define shuming 40
#define zuozhe 40
#define maxbooks 100
char * s_gets(char* st, int n);
void dayinw(struct book* st,int count);//按照书名的字母顺序
void dayinp(struct book* st, int count);//按照书的价格顺序
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
	printf("请输入书名：(首字母大写/输入小写系统自动转换)\n");
	while (count < maxbooks && s_gets(jihe[count].sm, shuming) != NULL && jihe[count].sm[0] != '\0')
	{

		printf("请输入作者名字：\n");
		s_gets(jihe[count].zz, zuozhe);
		printf("请输入此书的价格：\n");
		scanf("%f", &jihe[count].qian);
		while (getchar() != '\n')
			continue;
		count++;
		if (count < maxbooks)
			printf("请输入下一本书的书名：\n");

	}

	if (count > 0)
	{
		for (int z = 0;z < count;z++)
			jihe[z].sm[0] = toupper(jihe[z].sm[0]);
		printf("你的输入为:\n");
		for (int i = 0;i < count;i++)
		{
			printf("%s的作者是%s 价格为%.2f\n", jihe[i].sm, jihe[i].zz, jihe[i].qian);
		}
		dayinw(jihe, count);
		dayinp(jihe, count);
		/*printf("系统确认你原来输入的信息为\n");
		for (int i = 0;i < count;i++)
		{
			printf("%s的作者是%s 价格为%.2f!!!\n", jihe[i].sm, jihe[i].zz, jihe[i].qian);
		}*/
	}
	else
		printf("你没有输入一本书\n");

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
	
	printf("按照字母升序来排为\n");
	for (int i = 0;i < count;i++)
	{
		printf("%s的作者是%s 价格为%.2f\n", arr[i].sm, arr[i].zz, arr[i].qian);
	}
}
void dayinp(struct book* st, int count)
{
	struct book arr[maxbooks];
	for (int x = 0;x < count;x++)
		arr[x] = st[x];//创建一个临时变量 保护原来的信息
	for (int i = 0;i < count-1;i++)//count是有几本书 要比count-1次
	{

		for (int w = 0;w < count -1- i;w++)//比到i次少比i轮
		{
			if (arr[i].qian > arr[i + 1].qian)
			{

				struct book k = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = k;
			}
		}
	}
	printf("按照价格升序来排为\n");
	for (int i = 0;i < count;i++)
	{
		printf("%s的作者是%s 价格为%.2f\n", arr[i].sm, arr[i].zz, arr[i].qian);
	}
}
