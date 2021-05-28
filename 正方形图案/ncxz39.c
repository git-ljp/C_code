/*多组输入，一个整数（1~20），表示正方形的长度，也表示输出行数。

针对每行输入，输出用“*”组成的对应边长的正方形，每个“*”后面有一个空格。
*/
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
                printf("* ");
            }
            printf("\n");
        }

    }

    return 0;
}