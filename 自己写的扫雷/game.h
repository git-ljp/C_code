#pragma once
#define ROW 9
#define COL 9	
#define SETCOUNT 10

#define ROWS ROW+2		//为了能成功遍历边界的棋盘，所以需要创建两个扩展的数组将布雷和扫雷一一对应，初始化时也一样要扩展
#define COLS COL+2		
void Initboard(char board[ROWS][COLS], int rows, int cols,char set);
void Displayboard(char board[ROWS][COLS], int row, int col);		//打印棋盘只打印中间的棋盘，不需要打印扩列的
void Setmine(char mine[ROWS][COLS], int row, int col);
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);