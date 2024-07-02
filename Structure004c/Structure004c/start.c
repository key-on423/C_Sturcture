#include <stdio.h>
#include <stdbool.h>
#include <string.h>



//枚举的基本运用
#define slen 30
char* s_gets(char* st, int n);
enum color{red,orange,yellow,greed,blue,violet};
const char* colors[] = { "red", "orange","yellow","green","blue","violet" };

int main()
{
	char xuanzhe[slen];
	enum color colorr;
	bool color_is_found = false;
	puts("请输入一个颜色:");
	while (s_gets(xuanzhe, slen) != NULL && xuanzhe[0] != '\0')
	{
		for (colorr = red;colorr <= violet;colorr++)
		{
			if (strcmp(xuanzhe, colors[colorr]) == 0)
			{
				color_is_found = true;
				break;
			}
		}
	
	  if (color_is_found)
		switch (colorr)
		{
		case 0:
			printf("玫瑰是红的\n");
			break;
		case 1:
			printf("橘子是橘色\n");
			break;
		case 2:
			printf("香蕉是黄色的\n");
			break;
		case 3:
			printf("草是绿色的\n");
			break;
		case 4:
			printf("天空是蓝色的\n");
			break;
		case 5:
			printf("紫罗兰是紫色的\n");
			break;
		}
	  else
	  	printf("我不认识你输入的颜色\n");
	  color_is_found = false;
	  puts("请输入下一个颜色");
     }

}
char* s_gets(char* st, int n)
{
	char* ret;
	ret = fgets(st, n, stdin);
	char* find;
	if (ret)
	{

		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;

	}
	return ret;
}