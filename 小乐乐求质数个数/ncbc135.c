/*描述
KiKi知道了什么是质数（只能被1和他自身整除的数），他现在想知道所有三位整数中，有多少个质数。
输入描述：
无
输出描述：
一行，一个整数，表示所有三位整数中，有多少个质数。*/
#include<stdio.h>

int main()
{
    int i = 0;
    int count = 0;
    int j = 0;
    int flag = 0;
    for (i = 100; i < 1000; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }

        }
    }
    printf("%d", (900 - count));
    return 0;
}