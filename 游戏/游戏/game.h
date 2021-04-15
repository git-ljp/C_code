#define ROW  3
#define COL  3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
//告诉我们四种游戏状态
//玩家赢返回“*”；
//电脑赢返回“#”;
//平局返回“Q”;
//继续返回“C”;


char IsWin(char board[ROW][COL], int row, int col);
