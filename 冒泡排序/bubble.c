#include<stdio.h>
void bubble_sort(int arr[], int sz)  //编写函数冒泡排序数组
{
	int i = 0;
	int temp = 0;
	for (i = 0; i < sz - 1; i++)	//确定排序的趟数
	{
		int j = 0;
		int flag = 1;		//假设这一趟排序的数列已经有序

		for (j = 0; j < sz - 1 - i; j++)	//每一趟冒泡排序两两交换的次数
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;	//本趟排序其实不完全有序


			}
		}
		if (flag == 1)  //不用排序了
		{
			break;
		}
	}


}
int main()
{
	int i = 0;
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);  //计算数组大小；
	bubble_sort(arr, sz);                   //这里的arr指的是首元素地址；
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}