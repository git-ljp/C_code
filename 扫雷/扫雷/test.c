
#include"game.h"
void game()
{
	//�׵���Ϣ�洢
	//1.�����׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//2.�Ų���׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show,ROWS, COLS, '*');//Ϊ�˲����׵��������Ų���׵����̵���Ϣһһ��Ӧ������show�Ĳ���Ҫ��S;
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);//���ú��׵�λ�ò��ܴ�ӡ����
	DisplayBoard(show, ROW, COL);//�����Ų���׵�λ��
	//������
	SetMine(mine, ROW, COL);
	//ɨ��
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
			printf("�������������ѡ��\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}






	
