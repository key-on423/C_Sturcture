#include <stdio.h>
#include <stdbool.h>
#include <string.h>



//ö�ٵĻ�������
#define slen 30
char* s_gets(char* st, int n);
enum color{red,orange,yellow,greed,blue,violet};
const char* colors[] = { "red", "orange","yellow","green","blue","violet" };

int main()
{
	char xuanzhe[slen];
	enum color colorr;
	bool color_is_found = false;
	puts("������һ����ɫ:");
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
			printf("õ���Ǻ��\n");
			break;
		case 1:
			printf("��������ɫ\n");
			break;
		case 2:
			printf("�㽶�ǻ�ɫ��\n");
			break;
		case 3:
			printf("������ɫ��\n");
			break;
		case 4:
			printf("�������ɫ��\n");
			break;
		case 5:
			printf("����������ɫ��\n");
			break;
		}
	  else
	  	printf("�Ҳ���ʶ���������ɫ\n");
	  color_is_found = false;
	  puts("��������һ����ɫ");
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