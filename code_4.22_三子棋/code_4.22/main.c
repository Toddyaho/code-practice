#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void test()
{
	menu();
	int enter = 0;
	do {
		printf("please enter>\n");
		scanf("%d", &enter);
		switch (enter)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("重新选择!\n");
			break;
		}
	} while (enter);

}
void game()
{
	char Board[ROW][COL] = { 0 };		//设定棋盘
	DisplayBoard(Board, ROW, COL);		//显示棋盘
	InitBoard(Board, ROW, COL);			//初始化棋盘
	//玩家PK
	int set = 0;
	while (1)
	{
		//用户1走
		Player1move(Board, ROW, COL);
	
		DisplayBoard(Board, ROW, COL);
		Jud(Board, ROW, COL);
		set = Jud(Board, ROW, COL);
		if (set != 4)
		{
			break;
		}
		//用户2走
		Player2move(Board, ROW, COL);
		system("cls");
		DisplayBoard(Board, ROW, COL);
		Jud(Board, ROW, COL);
		set = Jud(Board, ROW, COL);
		if (set != 4)
		{
			break;
		}
	}
		
	switch (set)
	{
	case 1:
		printf("玩家1赢！！！\n");
	case 2:
		printf("玩家2赢！！！\n");
		break;
	case 3:
		printf("平局！！！\n");
		break;
	default:
		break;
	}
}
//主函数
int main()
{
	test();
	return 0;
}