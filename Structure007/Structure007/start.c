#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//4.编辑一个程序，创建一个有两个成员的结构模版：
//a.第一个成员是社会保险号，第二哥成员是一个有三个成员的结构，第一个成员代表名，第二个成员代表中间名，第三个成员代表姓。
//创建并初始化一个内含5个该类型结构的数组。
//如果有中间名，只打印它的第一个字母，后面加一个点(.);如果没有中间名，则不用打印点。编写一个程序进行打印，把结构数组传递给
//这个函数。
//b.修改a部分，传递结构的值而不是结构的地址
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
//	printf("下面是结构内包含的信息：\n");
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


//5.编写一个程序满足下面的要求。
//a.外部定义一个有两个成员的结构模版name：一个字符串存储名，一个字符串存储姓
//b.外部定义一个有3个成员的结构模版student：一个name类型的结构，一个grade数组存储3个浮点型分数，一个变量存储3个分数平均数
//c.在main（）函数中声明一个内含CSIZE（=4）个student类型结构的数组，并初始化这些结构的名字部分。用函数执行g，e，f中描述的任务
//d.以交互的方式获得每个学生的成绩，提示用户输入学生的姓名和分数。把分数存储到grade数组相应的结构中。可以在main（）函数或
//其他函数中用循环来完成
//e.计算每个结构的平均分，并把计算后的值赋给相应成员
//f.打印每个结构的信息
//g.打印所有人的平均分，即所有结构的数组成员的平均值

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
//	printf("请输入第一位学生的名()\n");
//	int i = 0;
//	double sum = 0;
//	while (s_gets(xinxiku[i].cun.fname,len) != NULL && xinxiku[i].cun.fname[0] != '\0' && i < CSIZE)
//	{
//		
//		printf("请输入这位同学的姓氏\n");
//		s_gets(xinxiku[i].cun.lname, len);
//		printf("请依次输入这位同学的语文 数学 英语成绩\n");
//		scanf("%lf %lf %lf", &(xinxiku[i].grade[0]), &(xinxiku[i].grade[1]), &(xinxiku[i].grade[2]));
//		while (getchar() != '\n')
//			continue;
//		xinxiku[i].pinjun = (xinxiku[i].grade[0] + xinxiku[i].grade[1] + xinxiku[i].grade[2]) / 3;
//		printf("请输入下一位学员的名（空输入结束登记）\n");
//		sum += xinxiku[i].pinjun;
//		i++;
//	}
//	print(xinxiku, i);
//	printf("他们%d人的平均成绩为%.0lf\n", i, sum / i);
//	printf("结束\n");
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
//	printf("你输入的信息为\n");
//	for (int i = 0;i < n;i++)
//	{
//		printf("%s %s 的语文成绩为%.1lf 数学成绩为%.1lf 英语成绩为%.1lf，平均成绩为%.1lf\n", pt[i].cun.fname,pt[i].cun.lname,pt[i].grade[0], pt[i].grade[1], pt[i].grade[2],pt[i].pinjun);
//	}
//}


//6.一个文本文件中保存着一个垒球队的信息。
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
//		//创建临时变量读取文件信息，之后存储结构数组体中
//		count=fscanf(pf, "%d %s %s %d",number, fname, lname, &shot);
//		if (count < 4)//没有读取到三个确定信息退出读取过程
//			break;
//		strcpy(xinxiku[number].fname, fname);
//		strcpy(xinxiku[number].lname, lname);
//		xinxiku[number].number = number;
//		xinxiku[number].shot = shot;
//	}
//}