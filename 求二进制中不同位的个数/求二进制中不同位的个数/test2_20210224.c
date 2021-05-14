#include<stdio.h>
int Get_diff_bit(int m, int n)
{
	int count = 0;
	int temp = m ^ n;			//利用按位异或原理，相同为0，不同为1；所以只需计算异或之后的二进制数中1的个数就行；
	while (temp)
	{
		temp = temp & (temp - 1);		//每次按位与之后都能消除一个1
		count++;	//按位与几次加几次	
	}
	return count;
}
int main()
{
	int m = 0;
	int n = 0;
	printf("请输入两个数m和n:");
	scanf_s("%d%d", &m, &n);
	int count = Get_diff_bit(m, n);
	printf("count=%d\n", count);

	return 0;
}