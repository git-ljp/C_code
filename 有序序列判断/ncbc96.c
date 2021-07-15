/*输入描述：
第一行输入一个整数N(3≤N≤50)。
第二行输入N个整数，用空格分隔N个整数。
输出描述：
输出为一行，如果序列有序输出sorted，否则输出unsorted。*/
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int num[50] = { 0 };
    int flag1 = 0;//升序的标志初始
    int flag2 = 0;//降序的标志初始
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &num[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        if (num[i] < num[i + 1])
        {
            flag1 = 1;//不是降序
        }
        if (num[i] >= num[i + 1])
        {
            flag2 = 1;//不是升序
        }
    }
    if (flag1 + flag2 == 1)        //不是升就是降，和总为1；
    {
        printf("sorted\n");
    }
    else
    {
        printf("unsorted\n");
    }

    return 0;
}