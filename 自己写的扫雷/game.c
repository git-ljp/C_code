#include<stdio.h>
#include"game.h"
	//���������ʼ�������ʵ�֣�char board[ROWS][COLS]����mine�����show����
	//��������һ���ַ�set����mine��show���鴫�ι����ġ�0���͡�*��
void Initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("��������ɨ����Ϸ ��������\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i); //Ϊ�˷����û��ж���������������������ӡ����
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i); //ÿ�п�ͷ��ӡ����
		for (j = 1; j <=col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("��������ɨ����Ϸ��������\n");
}
void Setmine(char mine[ROWS][COLS], int row, int col)
{
	int count = SETCOUNT;	//Ϊ������ͨ�������Լ����ò����׵ĸ�������ͷ�ļ����Զ������
	while (count)
	{	//ֱ��countΪ0���˳�ѭ��������ÿ�ζ���������겼���ף�count�Ǽ���x��y��Ҫ�������
		int x = rand() % row + 1;//�û����������ķ�Χ�������������ķ�Χ��Ӧ����row+1������ȷ�����귶Χ
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;//ÿ����һ�����׵ĸ����ͼ�һ��
		}
	}
}
static int  get_mine_count(char mine[ROWS][COLS], int x,int y)  //static���κ����������������ֻ���ڵ�ǰԴ�ļ���ʹ����

{   //ͳ����Щ������Χ�м�����
	return mine[x][y - 1] +
		mine[x - 1][y - 1] +
		mine[x + 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] +
		mine[x + 1][y] - 8 * '0';  //���ﷵ�ص������֣�num+'0'='num';��һ�����ּ����ַ�0�������ִ�����ַ�

}
int get_showblank(char mine[ROWS][COLS], char show[ROWS][COLS], int x , int y)//���׵ĸ���Ϊ0ʱ����չ���Ŀհ׸���
{
	
	int count_mine = get_mine_count(mine, x,y);
    int count_blank = 0;//��ʼ���հ׵ĸ���
	if(count_mine == 0)
	{
		show[x][y] = ' ';
		count_blank++;//ֻҪ�ǿհ׾ͼ�1���´εݹ�Ҳһ��

	    //�ж���Χ�ĸ�����Ϸ��ԣ�����Ҫ����û�б�������������*�ţ��Է��ظ�����
		if (x - 1 >= 1 && x - 1 <= ROW && y >= 1 && y <= COL && show[x - 1][y] == '*')
		{
			count_blank+=get_showblank(mine, show, x - 1, y);//ÿ�ݹ�һ�Σ��հ׸���Ҫ�ۼӣ�������x,y�Ŀհ׺���Χ�ĸ�����Ŀհף�
			

		}
		if (x >= 1 && x <= ROW && y - 1 >= 1 && y - 1 <= COL && show[x][y - 1] == '*')
		{
			count_blank += get_showblank(mine, show, x, y - 1);
			
		}
		if (x + 1 >= 1 && x + 1 <= ROW && y >= 1 && y <= COL && show[x + 1][y] == '*')
		{
			count_blank += get_showblank(mine, show, x + 1, y);
			
		}
		if (x >= 1 && x <= ROW && y + 1 >= 1 && y + 1 <= COL && show[x][y + 1] == '*')
		{
			count_blank += get_showblank(mine, show, x, y + 1);
		}
			
	}
	return count_blank;//���ؿհ׸���
   
	



	
}
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//��¼�����׵ĸ���������
	while (win < row * col - SETCOUNT)
	{
		int count_blank = 0;//�հ׸�����ÿ�ν���ѭ����Ҫ���ã��������ѭ��������������һ�ε�ֵ���ظ����ӿհף�
		printf("�������Ų��׵����꣺\n");

		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)		//�ж�����Ϸ���
		{
			if (mine[x][y] == '1')		//����������
			{
				printf("���ź����㱻ը���ˣ�\n");
				Displayboard(mine, row, col);
				break;

			}
			else
			{
				int count_mine = get_mine_count(mine, x, y);
				
				if (count_mine == 0 && show[x][y]=='*')//��Χ�׵ĸ���Ϊ0����û�б�����
				{
					count_blank=get_showblank(mine, show, x, y);//�ݹ�չ���հף����ؿհ׸���
					win += count_blank;//�հ׵ĸ����ӵ������׸�����������
				}
				else if(show[x][y]=='*')//������else��̫���ʣ�������Ƶ������ǵ���Χ��������0������û�б�����
				{
                    show[x][y] = count_mine + '0';//�����ף���ͳ����Χ�м����ף�����show�����Ӧ����
					win++;//��ͳ������Χ�׵ĸ��������������ף���1
					
				}
				
				Displayboard(show, row, col);
				
			}
		}
		else
		{
			printf("���겻�Ϸ������������룡\n");
		}
	}
	if (win== row * col - SETCOUNT)
	{
		printf("��ϲ�㣬���׳ɹ���\n");
		Displayboard(show, row, col);
	}

		
}
