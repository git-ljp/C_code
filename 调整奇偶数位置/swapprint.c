#include<stdio.h>
void Print_swap(int*arr,int sz)
{
	int i = 0;
	int* start = arr;//首地址指针
	int* end = arr + sz-1;//末地址指针
	while (start < end)
	{
		if ((*start) % 2 == 1)
		{
			start++;//若第一个元素是奇数，则首地址指针++；
		}
		else if ((*end) % 2 == 0)
		{
			end--;//最后一个元素是偶数，则末地址指针--；
		}
		else//如果(*start)%2==0 && (*end)%2==1 就交换，使得奇数在前，偶数在后
		{
			int temp = *start;
			*start = *end;
			*end = temp;
		}
		
	}
	//交换之后打印数组
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("未交换前：\n");
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("交换后：\n");
	Print_swap(arr, sz);
	return 0;
}