#include<stdio.h>//��������Ϸ
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
	int num = rand() % 100 + 1;//���������


	while (1)
	{
		printf("������µ����֣�\n");
		scanf("%d", &guess);
		if (num < guess)
		{
			printf("�´���\n");
		}
		else if (num > guess)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
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
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:

			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("���������������\n");
			break;






		}
	} while (input);
	return 0;
}