#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()												//�˵���
{
	printf("********************************\n");
	printf("*****   1��play   0��exit  *****\n");
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
		printf("���������µ�����:\n");
		scanf("%d", &g);
		if (g == set)
		{
			printf("��ϲ��¶��ˣ�����\n");
			break;
		}
		else if (g < set)
		{
			printf("��С�ˣ�����\n");
		}
		else if (g > set)
		{
			printf("�´��ˣ�����\n");
		}
	}
}
int main()
{
	int choose = 0;
	do
	{
		menu();
		printf("������ѡ�\n");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:game();
			break;
		case 0:printf("���˳�\n");
			break;
		default:printf("������Ч\n");
			break;
		}
		
	} while (choose);
		return 0;
}