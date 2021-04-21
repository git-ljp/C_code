#include<stdio.h>
int get_max(int x, int y)
{
	
	return x > y ? x : y;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf_s("%d%d", &a, &b);
	int max = get_max(a, b);
	printf("max=%d", max);
}