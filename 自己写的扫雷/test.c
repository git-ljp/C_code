#include<stdio.h>
#include"game.h"
#include<stdlib.h>
#include<time.h>
void game()
{
	char mine[ROWS][COLS] = { 0 };	//������Ų����׵�����
	char show[ROWS][COLS] = { 0 };	//��������Ų��׵�����
	Initboard(mine, ROWS, COLS,'0');	//��ʼ�������׵����̣�mine��ʾ������������׵�ַ
	Initboard(show, ROWS, COLS, '*');	//��ʼ���Ų��׵����飬show��ʾ�Ų���������׵�ַ
	//Displayboard(mine, ROW, COL);	//��ӡ�����׵����̣����ﲻ�ô�ӡ��չ���������У�ֻ�����м�����̲��ף�ɨ��Ҳͬ��
	Displayboard(show, ROW, COL);
	Setmine(mine, ROW, COL);	//������
	//Displayboard(mine, ROW, COL);
	Findmine(mine,show, ROW, COL);	//�Ų���
}
void menu()
{
	printf("**********************\n");
	printf("******* 1.play *******\n");
	printf("******* 0.exit *******\n");
	printf("**********************\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//�����������rand�ĵ���
	do
	{
		menu();
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("ɨ����Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");

		}

	} while (input);
	return 0;
}