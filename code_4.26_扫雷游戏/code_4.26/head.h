#ifndef __HEAD_H__
#define __HEAD_H__

#define ROW 9	
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define Easy_count 10

#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>

void DisplayBoard(char board[ROWS][COLS],int row, int col);
void SetMine(char set[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);


#endif // !1