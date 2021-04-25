#include<stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	int flag = 1;  //假设数组已经是升序
	for (i = 0; i < sz-1; i++)  //确定趟数,应该为元素个数减一，因为数组下标从0开始，所以没有等于号；
	{
		//确定要两两比较的次数；
		for (j = 0; j < sz - 1 - i; j++)  //每排完一趟，两两比较的次数就要减少；
		{
			if (arr[j] > arr[j + 1]  )
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0; //交换之后，令flag=0，这样就表示已经交换了，或者要交换；

			}
		}
		if (flag == 1)
		{
			break;  //flag==1,不用交换，退出循环；
		}
	}
}
int main()
{
	
	int arr[10] = {0};  //初始化数组；

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);  //自行输入数组
	}
	int sz = sizeof(arr) / sizeof arr[0];  //求数组元素个数，不能在函数内部求，这里的arr表示整个数组地址；
	bubble_sort(arr, sz);  //数组传参是首元素地址；
	int i = 0;
	for (i = 0; i < sz; i++)
	{ 
		printf("%d ", arr[i]);  //打印排序后的数组；
	}
	return 0;


}