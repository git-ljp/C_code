#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;//数组名表示首地址
	printf("%d\n", arr[2]);
	printf("%d\n", 2[arr]);
	printf("%d\n", p[2]);
	printf("%d\n", 2[p]);
	printf("%d\n", *(p + 2));
	printf("%d\n", *(2 + p));
	printf("%d\n", *(arr + 2));
	printf("%d\n", *(2 + arr));
}
