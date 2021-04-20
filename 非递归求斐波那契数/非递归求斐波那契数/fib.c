#include<stdio.h>
int Fib(int n)
{
	//非递归实现
	int a = 1;
	int b = 1;
	int c = 1;
	int i = 0;
	for (i = 3; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;

	}
	return c;
	//递归实现
	/*if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);

	}*/
		

		
		
		

	







}
int main()
{
	int n = 0;
	scanf_s("%d", &n);

	int ret = Fib(n);
	printf("%d", ret);
	return 0;
}