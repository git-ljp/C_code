#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Swap(int* a, int* b)
{
	int z = 0;
	z = *a;
	*a = *b;
	*b = z;

}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	printf("����ǰ��a=%d,b=%d\n", a, b);
	Swap(&a,&b);
	printf("������a=%d,b=%d\n", a, b);
	return 0;

}