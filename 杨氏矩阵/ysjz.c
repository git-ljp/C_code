#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Find_num(int arr[3][3], int num)
{
	int i = 2;
	int j = 0;
	while (i >= 0 && j < 3)
	{
		if (arr[i][j] < num)
		{
			++j;//j先++再使用，意思就是判断++后的j
		}
		if (arr[i][j] > num)
		{
			--i;//i也是同样的道理，判断--后的i;
		}
		if(arr[i][j]==num)
		{
			printf("找到了数字%d,在第%d行第%d列\n",arr[i][j],i+1,j+1);
			return 1;
		}

	}
	printf("没找到");
	return 0;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int arr[3][3] = { 
		{1,2,3} ,
		{4,5,6} ,
		{7,8,9} };
	
	 Find_num(arr, num);

	return 0;

}