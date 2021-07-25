/*描述
给定n个整数和一个整数x，小乐乐想从n个整数中判断x出现几次，请编程帮他实现。
输入描述：
共3行
第一行，一个整数，表示n（1 <= n <= 100）。
第二行，共输入n个整数，两个整数之间用空格分隔。
第三行，输入一个整数，表示要查找的整数x。
输出描述：
一行，表示整数x出现的次数。*/
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int num[100] = { 0 };
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &num[i]);
    }
    int x = 0;
    scanf("%d", &x);
    int j = 0;

    int count = 0;
    for (j = 0; j < n; j++)
    {
        if (num[j] == x)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}