#include<stdio.h>
#include "game.h"
//#include<stdlib.h>
//#include<time.h>
//
//
//void menu()
//{
//	printf("************\n");
//	printf("** 1.play **\n");				//��������Ϸ
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
//		printf("�������");
//		scanf_s("%d",&guess);
//		if (guess > ret)
//		{
//			printf("�´���");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��");
//
//		}
//		else
//		{
//			printf("�¶���");
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
//		printf("��ѡ��");
//		scanf_s("%d",&input);
//		switch (input)
//		{
//		case 1:
//		
//			game();
//			break;
//		
//		case 0:
//			printf("�˳���Ϸ\n ");
//			break;
//		default:
//			printf("������������\n");
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
	
	//����߳����̵���Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ո�									//��������Ϸ
	InitBoard(board, ROW, COL);//��ʼ������
	DisplayBoard(board,ROW,COL);//��ӡ����
	while (1)
	{

		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);

		if (ret != 'C')
		{
			break;
		}




		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);

		if (ret != 'C')
		{
			break;
		}
	}
		
		if (ret == '*')
		{
			printf("���Ӯ\n");
		}
		else if (ret == '#')
		{
			printf("����Ӯ\n");
		}
		else
		{
			printf("ƽ��\n");
		}
	
	


}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		
		
		menu();
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�������,����ѡ��");
			break;

		}




	} while (input);



}
int main()
{
	test();





	return 0;
}
