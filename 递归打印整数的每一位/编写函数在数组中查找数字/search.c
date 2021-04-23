#include<stdio.h>
int binary_search(int arr[], int num, int sz)
{
	int left = 0;
	int right = sz - 1;  //�±��0��ʼ
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
			return mid;  //�ҵ�ʱ�������ֵ��±ꣻ

		}
	}
	return -1;  //��left>right��û�ҵ�ʱ������-1��
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int  num = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, num, sz);  //retΪ�����ķ���ֵ
	if (-1 == ret)
	{
		printf("�Ҳ���\n");


	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);  //���������Զ��庯���ڲ����������Ӧ�ķ���ֵ�������ret��Ӧmid;
	}
}