
#include"game.h"
void game()
{
	//雷的信息存储
	//1.布置雷的信息
	char mine[ROWS][COLS] = { 0 };
	//2.排查出雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show,ROWS, COLS, '*');//为了布置雷的棋盘与排查出雷的棋盘的信息一一对应，所以show的参数要加S;
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);//布置好雷的位置不能打印出来
	DisplayBoard(show, ROW, COL);//这是排查出雷的位置
	//布置雷
	SetMine(mine, ROW, COL);
	//扫雷
    FindMine(mine,show, ROW, COL);


}
void menu()
{
	printf("**************************\n");
	printf("*** 1.play   0.exit  *****\n");
	printf("**************************\n");

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
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}






	
