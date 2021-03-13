#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()												//菜单栏
{
	printf("********************************\n");
	printf("*****   1、play   0、exit  *****\n");
	printf("********************************\n");
}

void game()
{
	int set;
	srand((unsigned int)time(NULL));
	set=rand()%100+1;
	int g;
	while (1)
	{
		printf("请输入您猜的数字:\n");
		scanf("%d", &g);
		if (g == set)
		{
			printf("恭喜你猜对了！！！\n");
			break;
		}
		else if (g < set)
		{
			printf("猜小了！！！\n");
		}
		else if (g > set)
		{
			printf("猜大了！！！\n");
		}
	}
}
int main()
{
	int choose = 0;
	do
	{
		menu();
		printf("请输入选项：\n");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:game();
			break;
		case 0:printf("已退出\n");
			break;
		default:printf("输入无效\n");
			break;
		}
		
	} while (choose);
		return 0;
}