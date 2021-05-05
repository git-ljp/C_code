#include<stdio.h>//猜数字游戏
#include<time.h>
#include<stdlib.h>
menu()
{
	printf("****************\n");
	printf("******1.play****\n");
	printf("******2.exit****\n");


}
void game()
{
	int guess = 0;
	int num = rand() % 100 + 1;//产生随机数


	while (1)
	{
		printf("请输入猜的数字：\n");
		scanf("%d", &guess);
		if (num < guess)
		{
			printf("猜大了\n");
		}
		else if (num > guess)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}




}
int main()
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
			printf("输入错误，重新输入\n");
			break;






		}
	} while (input);
	return 0;
}