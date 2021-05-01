#include<stdio.h>
int is_prime(int n)
{
	int j = 0;
	for (j = 100; j < 200; j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	
	for (i = 100; i < 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d", i);
		}
		
	}
	return 0;
}
