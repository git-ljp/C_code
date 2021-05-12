#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int max = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);//输入十个数
	}
	max = arr[0];//令最大值为首元素
	for (j = 0; j < 10; j++)
	{
		if (max < arr[j])
		{
			max = arr[j];//求出最大值
		}
	}
	printf("最大值是：%d", max);
	return 0;


}