/*多组输入，一个整数（2~20），表示金字塔边的长度，即“*”的数量，，也表示输出行数。
输出描述：
针对每行输入，输出用“*”组成的金字塔，每个“*”后面有一个空格。*/
#include<stdio.h>
int main()
{
    int n = 0;

    while (~scanf("%d", &n))
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < n - 1 - i; j++)        //这里不是j<=;因为第一个空格是n-1;不是n;
            {
                printf(" ");
            }
            for (j = 0; j <= i; j++)            //这里可以等于，因为*空格的数量等于n的数量；
            {
                printf("* ");
            }
            printf("\n");
        }

    }
    return 0;
}