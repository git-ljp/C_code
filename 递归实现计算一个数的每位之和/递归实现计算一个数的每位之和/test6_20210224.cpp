#include<stdio.h>
int DigitSum(int num)

{
	if (num > 9)
	{
		return DigitSum(num / 10) + num % 10;	//递归思想是大事化小，分两步,依次调用digitsum；
	}											//digitsum(1729)
												//digitsum(172)+1729%10
												//digitsum(17)+172%10+1729%10
	                                     //digitsum(1)+17%10+172%10+1729%10
												//递归模式就是digitsum（num/10)+num%10
	
						
	   
    else
	{
		return num;
	}
		
}
int main()
{
	int num = 0;
	scanf_s("%d", &num);
	int ret = DigitSum(num);
	printf("ret=%d", ret);
	return 0;

}