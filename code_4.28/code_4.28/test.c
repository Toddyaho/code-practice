#define _CRT_SECURE_NO_WARNINGS 1
#include"head.h"
void menu()
{
	printf("*****************************\n");
	printf("********** 1.play ***********\n");
	printf("********** 0.exit  **********\n");
	printf("*****************************\n");
}
void game() {
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	FindMine(mine,show, ROW, COL);
}
void test() {
	int enter = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��>");
		scanf("%d", &enter);
		switch (enter)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��!\n");
			break;
		}
	} while (enter);
}
int main() {
	test();
	return 0;
}