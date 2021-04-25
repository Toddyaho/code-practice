#ifndef __GAME_H__
#define __GAME_H__

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<Windows.h>

#define ROW 3    //∆Â≈Ã––
#define COL 3    //∆Â≈Ã¡–

void test();
void menu();
void game();
void InitBoard(char Board[ROW][COL], int row, int col); 
void DisplayBoard(char Board[ROW][COL], int row, int col);
void Player1move(char Board[ROW][COL],int row,int col);
void Player2move(char Board[ROW][COL],int row,int col);
int Jud(char Board[ROW][COL], int row, int col);


#endif // !__ADD_H__

