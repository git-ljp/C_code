#include<stdio.h>
Print_arr(int* arr,int sz)
{
	int i = 0;
	int* p = arr;
	for (i = 0; i < sz; i++)
	{
		
		printf("%d ", *p);
		p++;
	}

	
	
		



}
int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Print_arr(arr, sz);
	return 0;
}