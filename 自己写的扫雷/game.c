#include<stdio.h>
#include"game.h"
	//两个数组初始化数组的实现，char board[ROWS][COLS]接收mine数组和show数组
	//这里设置一个字符set接收mine和show数组传参过来的‘0’和‘*’
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
	printf("————扫雷游戏 ————\n");
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i); //为了方便用户判断行数和列数，将列数打印出来
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i); //每行开头打印行数
		for (j = 1; j <=col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("————扫雷游戏————\n");
}
void Setmine(char mine[ROWS][COLS], int row, int col)
{
	int count = SETCOUNT;	//为了灵活变通，可以自己设置布置雷的个数，在头文件中自定义个数
	while (count)
	{	//直到count为0才退出循环，并且每次都是随机坐标布置雷，count是几，x和y就要随机几次
		int x = rand() % row + 1;//用户输入的坐标的范围就是行数列数的范围，应该是row+1才是正确的坐标范围
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;//每布置一个，雷的个数就减一；
		}
	}
}
static int  get_mine_count(char mine[ROWS][COLS], int x,int y)  //static修饰函数，那这个函数就只能在当前源文件里使用了

{   //统计这些坐标周围有几个雷
	return mine[x][y - 1] +
		mine[x - 1][y - 1] +
		mine[x + 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] +
		mine[x + 1][y] - 8 * '0';  //这里返回的是数字，num+'0'='num';即一个数字加上字符0等于数字代表的字符

}
int get_showblank(char mine[ROWS][COLS], char show[ROWS][COLS], int x , int y)//当雷的个数为0时计算展开的空白个数
{
	
	int count_mine = get_mine_count(mine, x,y);
    int count_blank = 0;//初始化空白的个数
	if(count_mine == 0)
	{
		show[x][y] = ' ';
		count_blank++;//只要是空白就加1；下次递归也一样

	    //判断周围四个坐标合法性，并且要满足没有被遍历，依旧是*号，以防重复遍历
		if (x - 1 >= 1 && x - 1 <= ROW && y >= 1 && y <= COL && show[x - 1][y] == '*')
		{
			count_blank+=get_showblank(mine, show, x - 1, y);//每递归一次，空白个数要累加，包括了x,y的空白和周围四个坐标的空白；
			

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
	return count_blank;//返回空白个数
   
	



	
}
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;//记录不是雷的个数，总数
	while (win < row * col - SETCOUNT)
	{
		int count_blank = 0;//空白个数，每次进入循环都要重置，如果放在循环外面依旧是上一次的值会重复叠加空白；
		printf("请输入排查雷的坐标：\n");

		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)		//判断坐标合法性
		{
			if (mine[x][y] == '1')		//遍历到了雷
			{
				printf("很遗憾，你被炸死了！\n");
				Displayboard(mine, row, col);
				break;

			}
			else
			{
				int count_mine = get_mine_count(mine, x, y);
				
				if (count_mine == 0 && show[x][y]=='*')//周围雷的个数为0，且没有被遍历
				{
					count_blank=get_showblank(mine, show, x, y);//递归展开空白，返回空白个数
					win += count_blank;//空白的个数加到不是雷个数的总数中
				}
				else if(show[x][y]=='*')//这里用else不太合适，这里控制的条件是当周围个数不是0，但是没有被遍历
				{
                    show[x][y] = count_mine + '0';//不是雷，则统计周围有几个雷，放入show数组对应坐标
					win++;//他统计了周围雷的个数，但本身不是雷，加1
					
				}
				
				Displayboard(show, row, col);
				
			}
		}
		else
		{
			printf("坐标不合法，请重新输入！\n");
		}
	}
	if (win== row * col - SETCOUNT)
	{
		printf("恭喜你，排雷成功！\n");
		Displayboard(show, row, col);
	}

		
}
