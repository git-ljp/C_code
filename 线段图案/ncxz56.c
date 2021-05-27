/*多组输入，一个整数（1~100），表示线段长度，即“ * ”的数量。

针对每行输入，输出占一行，用“ * ”组成的对应长度的线段。*/
#include<stdio.h>
int main()
{
    int num = 0;
    while (~scanf("%d", &num))
    {
        int i = 0;
        for (i = 0; i < num; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}