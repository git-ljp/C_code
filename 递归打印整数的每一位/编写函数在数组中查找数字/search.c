#include<stdio.h>
int binary_search(int arr[], int num, int sz)
{
	int left = 0;
	int right = sz - 1;  //下标从0开始
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > num)
		{
			right = mid - 1;
		}
		else if (arr[mid] < num)
		{
			left = mid + 1;
		}
		else
		{
			return mid;  //找到时返回数字的下标；

		}
	}
	return -1;  //当left>right即没找到时，返回-1；
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int  num = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, num, sz);  //ret为函数的返回值
	if (-1 == ret)
	{
		printf("找不到\n");


	}
	else
	{
		printf("找到了，下标是：%d\n", ret);  //主函数和自定义函数内部必须有相对应的返回值，这里的ret对应mid;
	}
}