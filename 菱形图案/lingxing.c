//多组输入，一个整数（2~20）
//针对每行输入，输出用“* ”组成的菱形，每个“* ”后面有一个空格
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        //上   n行
        for (i = 0; i < n; i++)
        {            //一行
            int j = 0;
            for (j = 0; j < n - i; j++)
            {
                printf(" ");
            }
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        //下    n+1行
        for (i = 0; i < n + 1; i++)
        {
            int j = 0;
            for (j = 0; j < i; j++)
            {
                printf(" ");
            }
            for (j = 0; j < n + 1 - i; j++)
            {
                printf("* ");
            }
            printf("\n");

        }

    }
    return 0;
}
