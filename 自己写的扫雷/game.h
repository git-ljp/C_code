#pragma once
#define ROW 9
#define COL 9	
#define SETCOUNT 10

#define ROWS ROW+2		//Ϊ���ܳɹ������߽�����̣�������Ҫ����������չ�����齫���׺�ɨ��һһ��Ӧ����ʼ��ʱҲһ��Ҫ��չ
#define COLS COL+2		
void Initboard(char board[ROWS][COLS], int rows, int cols,char set);
void Displayboard(char board[ROWS][COLS], int row, int col);		//��ӡ����ֻ��ӡ�м�����̣�����Ҫ��ӡ���е�
void Setmine(char mine[ROWS][COLS], int row, int col);
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);