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
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("����ѡ��!\n");
			break;
		}
	} while (enter);

}
void game()
{
	char Board[ROW][COL] = { 0 };		//�趨����
	DisplayBoard(Board, ROW, COL);		//��ʾ����
	InitBoard(Board, ROW, COL);			//��ʼ������
	//���PK
	int set = 0;
	while (1)
	{
		//�û�1��
		Player1move(Board, ROW, COL);
	
		DisplayBoard(Board, ROW, COL);
		Jud(Board, ROW, COL);
		set = Jud(Board, ROW, COL);
		if (set != 4)
		{
			break;
		}
		//�û�2��
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
		printf("���1Ӯ������\n");
	case 2:
		printf("���2Ӯ������\n");
		break;
	case 3:
		printf("ƽ�֣�����\n");
		break;
	default:
		break;
	}
}
//������
int main()
{
	test();
	return 0;
}