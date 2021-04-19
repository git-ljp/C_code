#include<stdio.h>
void Print(int m)
{
	int i = 0;
	printf("奇数位：");		//第一位，第三位。。。
	for (i = 30; i >=0; i -= 2)		//比如10为00000000000000000000000000001010，i>=0意思是打印第一个奇数位不用向右移

	{
		printf("%d", ((m >> i) & 1));
	}
	printf("\n");
	printf("偶数位：");
	for (i = 31; i >=1; i -= 2)		//比如10为00000000000000000000000000001010，i>=0意思是打印第一个偶数位要向右移一位

	{
		printf("%d", ((m >> i) & 1));
	}
	printf("\n");
}
int main()
{
	int m = 0;
	printf("输入一个数m：");
	scanf_s("%d", &m);
	Print(m);


	return 0;

}