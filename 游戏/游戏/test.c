#include<stdio.h>
#include "game.h"
//#include<stdlib.h>
//#include<time.h>
//
//
//void menu()
//{
//	printf("************\n");
//	printf("** 1.play **\n");				//猜数字游戏
//	printf("** 0.exit **\n");
//	printf("************\n");
//
//
//}
//void game()
//{	
//	int ret = 0;
//	int guess=0;
//	ret = rand()%100+1;
//	
//	while (1)
//	{
//		printf("请猜数字");
//		scanf_s("%d",&guess);
//		if (guess > ret)
//		{
//			printf("猜大了");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了");
//
//		}
//		else
//		{
//			printf("猜对了");
//			break;
//		}
//	
//	
//	
//	}
//	
//
//
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf_s("%d",&input);
//		switch (input)
//		{
//		case 1:
//		
//			game();
//			break;
//		
//		case 0:
//			printf("退出游戏\n ");
//			break;
//		default:
//			printf("您的输入有误\n");
//			break;
//
//
//
//		}
//	} while (input);
//	
//
//	return 0;
//}
//
//
//	

void menu()
{
	printf("*********************\n");
	printf("** 1.play 2.exit ****\n");
	printf("*********************\n");




}
void game()
{
	char ret = 0;
	
	//存放走出棋盘的信息
	char board[ROW][COL] = { 0 };//全部空格									//三子棋游戏
	InitBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board,ROW,COL);//打印棋盘
	while (1)
	{

		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);

		if (ret != 'C')
		{
			break;
		}




		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);

		if (ret != 'C')
		{
			break;
		}
	}
		
		if (ret == '*')
		{
			printf("玩家赢\n");
		}
		else if (ret == '#')
		{
			printf("电脑赢\n");
		}
		else
		{
			printf("平局\n");
		}
	
	


}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		
		
		menu();
		printf("请选择：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误,重新选择");
			break;

		}




	} while (input);



}
int main()
{
	test();





	return 0;
}
