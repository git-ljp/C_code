#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "hello";
	memset(arr, 'x', 5);
	printf("%s", arr);
	return 0;
}