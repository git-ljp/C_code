#include<stdio.h>//二分法找数字
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	scanf_s("%d", &k);//输入要查找的数字
	int i = 0;
	int left = 0;//数组首元素下标
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int right = sz - 1;//数组最后元素下标
	while (left <= right)
	{
		int mid = (left + right) / 2;//中间元素下标
		if (arr[mid] < k)//要找的数在中间元素的右边
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)//要找的数在中间元素的左边
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到了");
	}
	return 0;


}
