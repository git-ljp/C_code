#define ROW 9
#define COL 9
#define ROWS ROW+2   //判断边界的方块有雷，有的是越界的坐标，那么使棋盘扩大一圈
#define COLS COL+2
#define EASY_COUNT 10
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);//设置set为了让不是雷和是雷的位置打印不冲突；能根据自己设置；
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS],int row,int col);