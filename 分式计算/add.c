#include<stdio.h>
int main()
{
	int i = 0;
	double sum1 = 0.0;
	double sum2 = 0.0;
	int j = 0;


	for (i = 1; i < 100; i += 2)
	{
		sum1 += 1.0 / i;//����������ʽ�ĺ�


	}
	for (j = 2; j <= 100; j += 2)
	{
		sum2 += (-(1.0 / j));//����ż����ʽ�ĺ�
	}
	printf("%lf", sum1 + sum2);
	return 0;
}