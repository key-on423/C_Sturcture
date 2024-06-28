#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//结构中的字符数组和字符指针
//
//struct name 
//{
//	char* fn;
//	char* ln;
//	int letters;
//};
//#define num 81
//char* s_gets(char* st, int n);
//void gim(struct name*);
//void mim(struct name*);
//void sim(struct name*);
//void freee(struct name*);
//
//int main()
//{
//	struct name here;
//	gim(&here);
//	mim(&here);
//	sim(&here);
//	freee(&here);
//	return 0;
//}
//
//char* s_gets(char* st, int n)
//{
//	char* ret;
//	ret = fgets(st, n, stdin);
//	char* find;
//	if (ret)
//	{
//		find=strchr(st, '\n');
//		if (find)
//			*find = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret;
//}
//void gim(struct name*std)
//{
//	char tem[num];
//	printf("请输入你的姓：\n");
//	s_gets(tem, num);
//	std->fn = (char*)malloc(strlen(tem) + 1);
//	strcpy(std->fn, tem);
//	printf("请输入你的名\n");
//	s_gets(tem, num);
//	std->ln = (char*)malloc(strlen(tem) + 1);
//	strcpy(std->ln, tem);
//}
//void mim(struct name*std)
//{
//	std->letters = strlen(std->fn) + strlen(std->ln);
//}
//void sim(struct name* std)
//{
//	printf("你的姓是%s名是%s 总共有%d个信息\n", std->fn, std->ln, std->letters);
//}
//void freee(struct name* std)
//{
//	free(std->fn);
//	free(std->ln);
//}

//struct a
//{
//	size_t count;
//	double pinj;
//	double score[];
//};
//void sim(struct a* std);
//int main()
//{
//	struct a* pa, * pb;
//	int n = 5;
//	int i = 0;
//	pa = malloc(sizeof(struct a) + n * sizeof(double));
//	pa->count = n;
//	int sum = 0;
//	for (i = 0;i < n;i++)
//	{
//		pa->score[i] = 20 - i;
//		sum += pa->score[i];
//	}
//	pa->pinj = sum / n;
//	sim(pa);
//	sum = 0;
//	n = 9;
//	pb = malloc(sizeof(struct a) + n * sizeof(double));
//	pb->count = n;
//	for (i = 0;i < n;i++)
//	{
//		pb->score[i] = 30 - i;
//		sum += pb->score[i];
//	}
//	pb->pinj = sum / n;
//	sim(pb);
//	free(pa);
//	free(pb);
//	return 0;
//}
//void sim(struct a* std)
//{
//	int i = 0;
//	printf("Scores:\n");
//	for (i = 0;i < std->count;i++)
//	{
//		printf("%g ", std->score[i]);
//	}
//	printf("\nPinjun:%g\n", std->pinj);
//}

