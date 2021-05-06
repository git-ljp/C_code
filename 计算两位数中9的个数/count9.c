#include<stdio.h>
int main()		//求1到100中包含数字9的个数
{
	int i;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)//计算个位为9的两位数
			count++;
		if (i / 10 == 9)
			count++;//计算十位为9的个数


	}
	printf("count=%d", count);
	return 0;
}