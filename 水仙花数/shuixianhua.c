#include<stdio.h>
#include<math.h>
int main()
{
	
	    //153=1^3+5^3+3^3
	
		int i = 0;
		for (i = 0; i <= 999999; i++)
		{
			int count = 1;//1位数就是1次方
			int num = i;//防止冲突，定义num跟i相等;
			int sum = 0;
			// 求判断数字的位数
			while (num/ 10)
			{
				count++;//两位数才能进入循环
				num = num / 10;
			}

			//计算每一位的次方和
			num = i;
			while (num)
			{
				sum += pow(num % 10, count);//个位数的n次方
				num = num / 10;//只需除10得到其他位的数
			}

			//判断
			if (sum == i)
				printf("%d ", i);
		}
		return 0;
}

