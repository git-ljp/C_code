#include<stdio.h>
void Print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));		//���ý����ò�������pΪ�׵�ַ
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print(arr, sz);


	return 0;
}