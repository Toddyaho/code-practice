#define _CRT_SECURE_NO_WARNINGS 1
#include"head.h"


void menu() {
	printf("***************************\n");
	printf("*******  1、扫雷    *******\n");
	printf("*******  0、退出    *******\n");
	printf("***************************\n");
}
void game() {

	char Mine[ROWS][COLS] = { 0 };
	char Show[ROWS][COLS] = { 0 };
	memset(Mine,'0', sizeof(Mine));		//初始化雷区
	memset(Show,'.', sizeof(Show));		//初始化界面

	DisplayBoard(Show, ROW, COL);		//显示用户界面
	printf("\n");	
	SetMine(Mine, ROW, COL);			//设置雷
	DisplayBoard(Mine, ROW, COL);		//显示后台界面
	printf("\n");
	FindMine(Mine,Show, ROW, COL);			//排雷
}
void test() {
	srand((unsigned)time(NULL));		//随机数
	int enter;
	menu();
	printf("please enter:\n");
	do {
		menu();
		printf("please enter:\n");
		scanf("%d", &enter);
		switch (enter) {
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!!!\n");
			break;
		default:
			break;
		}
	} while (enter);
}
int main()
{

	test();
	return 0;
}










