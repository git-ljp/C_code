#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int c = 0;//余数
	scanf_s("%d%d", &m, &n);
	//相减法
	//int max = 0;
	//if (m > n)//判断两个数中的较大值
	//{
	//	max = n;
	//}
	//else
	//{
	//	max = m;
	//}
	//while (1)
	//{
	//	if (m % max == 0 && n % max == 0)
	//		printf("%d", max);
	//	break;
	//}
	//max--;//两个数最大公约数最大为两数中的较小值，不是则max--;
	//return 0;


	//辗转相除法
	while (c = m % n)//当m%n=0时，n就是最大公约数
	{
		m = n;
		n = c;

	}
	printf("%d", n);
	return 0;
	//最小公倍数=（m*n)/最大公约数
}
