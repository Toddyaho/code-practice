#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)

#include"game.h"
//菜单栏
void menu()
{
	printf("*************************\n");
	printf("**   1.start   0.exit  **\n");
	printf("*************************\n");
}

//初始化棋盘
void InitBoard(char Board[ROW][COL], int row, int col)  
{
	int i = 0;
	for (; i < row; i++) {
		int j = 0;
		for (; j < col; j++) {
			Board[i][j] = ' ';
		}
	}
}
//显示棋盘
void 	DisplayBoard(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", Board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
//玩家1落子
void Player1move(char Board[ROW][COL], int row, int col)
{
	printf("玩家1走>");
	while (1)
	{
		int x = 0, y = 0;
		scanf("%d %d", &x,&y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (Board[x - 1][y - 1] ==' ')
			{
				Board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("已占用！\n");
				continue;
			}
		}
		else
		{
			printf("输入错误！\n");
			continue;
		}
	}
}
//玩家2落子
void Player2move(char Board[ROW][COL], int row, int col)
{
	printf("玩家2走>");
	while (1)
	{
		int x = 0, y = 0;
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <=row && y >= 1 && y <= col)
		{
			if (Board[x - 1][y - 1] == ' ')
			{
				Board[x - 1][y - 1] = '#';
				break;
			}
			else
			{
				printf("已占用！\n");
				continue;
			}
		}
		else
		{
			printf("输入错误！\n");
			continue;
		}
	}
}
//判定棋盘满不满
int Full(char Board[ROW][COL], int row, int col)
{
	int i = 0;
	for (; i < row; i++)
	{
		int j = 0;
		for (; j < col; j++)
		{
			if (Board[i][j] == ' ')
				return 0;
		}
	}
	return 5;
}
//判定输赢
int Jud(char Board[ROW][COL],int row,int col)
{
	int i = 0;
	//行
	for (i=0; i <row; i++)
	{
		if (Board[i][0] == Board[i][1] && Board[i][1] == Board[i][2]&&Board[i][0]!=' ')
		{
			if (Board[i][0] == '*')
				return 1;				//玩家一赢
			else if (Board[i][0] == '#')
				return 2;				//玩家二赢
		}
		//列
		if (Board[0][i] == Board[1][i] && Board[1][i] == Board[2][i]&&Board[0][i] != ' ')
		{
			if (Board[i][0] == '*')
				return 1;
			else if (Board[i][0] == '#')
				return 2;
		}
		//斜边
		if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] && Board[0][0] != ' ')
		{
			if (Board[i][0] == '*')
				return 1;
			else if (Board[i][0] == '#')
				return 2;
		}
		if (Board[0][2] == Board[1][1] && Board[1][1] == Board[2][0] && Board[0][2] != ' ')
		{
			if (Board[i][0] == '*')
				return 1;
			else if (Board[i][0] == '#')
				return 2;
		}
	}
	if (5 == Full(Board, ROW, COL))
	{
		return 3;		//平局
	}
	return 4;			//继续
}





