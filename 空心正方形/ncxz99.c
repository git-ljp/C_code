/*多组输入，一个整数（3~20），表示输出的行数，也表示组成正方形边的“*”的数量。
输出描述：
针对每行输入，输出用“*”组成的“空心”正方形，每个“*”后面有一个空格。*/
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
            for (j = 0; j < n; j++)
            {
                if ((i == 0) || (i == n - 1) || (j == 0) || (j == n - 1))
                    printf("* ");
                else            //除了第一行和最后一行；中间的那几行有几对*空格就有几对空格；
                    printf("  ");


            }
            printf("\n");
        }
    }
    return 0;
}