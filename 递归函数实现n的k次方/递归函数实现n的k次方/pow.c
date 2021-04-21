#include<stdio.h>
double Pow(int n, int k)
{
	
	if (k == 0)

	{
		return  1;
	}
	else if (k < 0)
	{
		return  (1.0 / (n * Pow(n, -k - 1)));		//��kС��0ʱ��ֻ����������
	}
	else

	{
		return  Pow(n, k - 1) * n;		//�ݹ�˼�룬n^k=n^(k-1)*n;
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