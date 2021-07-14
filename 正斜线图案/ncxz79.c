/*多组输入，一个整数（2~20），表示输出的行数，也表示组成正斜线的“*”的数量。
输出描述：
针对每行输入，输出用“*”组成的正斜线。*/
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
            for (j = 0; j < n - 1 - i; j++)
            {
                printf(" ");
            }
            printf("*");
            for (j = 0; j < i; j++)
            {
                printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}