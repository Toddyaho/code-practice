#define _CRT_SECURE_NO_WARNINGS 1
#include"head.h"


void menu() {
	printf("***************************\n");
	printf("*******  1��ɨ��    *******\n");
	printf("*******  0���˳�    *******\n");
	printf("***************************\n");
}
void game() {

	char Mine[ROWS][COLS] = { 0 };
	char Show[ROWS][COLS] = { 0 };
	memset(Mine,'0', sizeof(Mine));		//��ʼ������
	memset(Show,'.', sizeof(Show));		//��ʼ������

	DisplayBoard(Show, ROW, COL);		//��ʾ�û�����
	printf("\n");	
	SetMine(Mine, ROW, COL);			//������
	DisplayBoard(Mine, ROW, COL);		//��ʾ��̨����
	printf("\n");
	FindMine(Mine,Show, ROW, COL);			//����
}
void test() {
	srand((unsigned)time(NULL));		//�����
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
			printf("�˳���Ϸ!!!\n");
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










