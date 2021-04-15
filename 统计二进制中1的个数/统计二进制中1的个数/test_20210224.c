#include<stdio.h>
//int Count_bit_one(unsigned int n)		//第一种方法(模2除2的方法）
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)		//比如13，二进制为1101；13%2=1；13/2=6,6%2=0,6/2=3,3%2=1,3/2=1,1%2=1
//
//		{
//			count++;	//利用count++的次数计算1出现的个数
//		}
//		n = n / 2;		//去掉计算过的1，重新赋值n;
//	}
//	return count;
//}
//int Count_bit_one(int n)		//第二种方法，n向右位移，之后按位与1得到结果为1就++；
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
int Count_bit_one(int n)		//第三种算法，利用n与n-1按位与的次数来计算count的次数；

{
	int count = 0;
	while (n)
	{
		n=n&( n - 1);
		count++;
	}
	return count;
}
int main()
{
	int n = 0;
	printf("请输入一个数n：");
	scanf_s("%d",&n);
	int count=Count_bit_one(n);
	printf("%d", count);

	return 0;

}
