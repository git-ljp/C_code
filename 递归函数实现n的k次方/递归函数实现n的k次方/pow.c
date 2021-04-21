#include<stdio.h>
double Pow(int n, int k)
{
	
	if (k == 0)

	{
		return  1;
	}
	else if (k < 0)
	{
		return  (1.0 / (n * Pow(n, -k - 1)));		//当k小于0时，只需求倒数即可
	}
	else

	{
		return  Pow(n, k - 1) * n;		//递归思想，n^k=n^(k-1)*n;
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf_s("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("ret=%lf", ret);

	return 0;
}