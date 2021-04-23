#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
void Print_num(unsigned int n) 
{
	if (n > 9)
	{
		Print_num(n /10);

	}
	printf("%d ", n % 10);

}
int main()
{
	unsigned int  n = 0;
	scanf("%u", &n);
	Print_num(n);
	return 0;

}