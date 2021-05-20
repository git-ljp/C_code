#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>//法一
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int m = a > b ? a : b;//最小公倍数最小为两个数的最大值，所以先求最小值
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)//如果最小值能同时整除a和b,那么就是最小公倍数
//		{
//			printf("%d\n", m);
//			break;
//		}
//		m++;//不能同时整除就不是公倍数除，所以m++,知道能同时整除为止
//	}
//	return 0;
//}
//法二
//#include<stdio.h>
//int main()
//{
//	//总能找到这样一个数i使得a乘以他能整除b,那么a*i就是最小公倍数
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int i = 1;
//	for (i = 1;; i++)
//	{
//		if (a * i % b == 0)//不求最大值，从a,b本身出发，让a或者b乘上一个数再模a或b,如果余数为0，那么就是公倍数；
//		{
//			printf("%d\n", a * i);//那么a*i就是最小公倍数
//			break;
//		}
//	}
//	return 0;
//}
//法三，最小公倍数=两数之积/最大公约数
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	int d = a * b;
	while ( c=a % b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", d/b);//这里不能直接写成a*b/b,因为a和b是while循环后的a和b,但是我们要的是原始的a和b的乘积，所以一开始就要把a和b的乘积放到一个变量中；

}