
#define _CRT_SECURE_NO_WARNINGS 1
#include"head.h"

//��ʾ����
void DisplayBoard(char board[ROWS][COLS], int row, int col) {
	int i = 0;
	for (i=0; i <= row; i++) {
		printf("%d ", i);
	}
	printf("\n");
	for(i=1; i<=row; i++) {
		printf("%d ", i);
		int j = 0;
		for (j=1;j<= col; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
//������
void SetMine(char mine[ROWS][COLS], int row, int col) {
	int i = 0, j = 0;
	for (int k = 0; k <row; k++) {
		i = rand() % row+1;
		j = rand() % col+1;
		printf("%d%d\n", i,j);
		if (mine[i][j] == '0') {
			mine[i][j] = '1';
		}
	}
}
//ͳ������
int Count(char mine[ROWS][COLS], int x, int y) {
	return mine[x - 1][y - 1] + mine[x - 1][y] +
		mine[x - 1][y + 1] + mine[x][y - 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] +
		mine[x + 1][y + 1] + mine[x][y + 1] - 8 * '0';
}
//����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x = 0, y = 0;
	int win = 0;
	while (win < row * col - Easy_count) {
		printf("���������꣺>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (mine[x][y] == '1') {
				printf("�ȵ����ˣ�\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else {
				int count = Count(mine, x, y);
				show[x][y] = count + 48;
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else {
			printf("����Ƿ����������룡\n");
		}
	}
	if (win == row * col - Easy_count) {
		printf("��ϲ�㣬���׳ɹ���\n");
	}
}