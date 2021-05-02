//非递归实现
#include<stdio.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int ret = 1;
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d", ret);

	return 0;
}
//递归实现
#include<stdio.h>
int Fac(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		if (n <= 1)
		{
			return 1;
		}
		else
		{


			return Fac(n - 1) * n;
		}
	}
}
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int ret = Fac(n);
	printf("%d", ret);
	return 0;
}