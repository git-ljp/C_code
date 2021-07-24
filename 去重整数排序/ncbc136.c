/*描述
给定一个整数序列，KiKi想把其中的重复的整数去掉，并将去重后的序列从小到达排序输出。
输入描述：
第一行，输入一个整数n，表示序列有n个整数。
第二行输入n个整数（每个整数大于等于1，小于等于1000），整数之间用空格分隔。
输出描述：
去重并且从小到大排列的整数序列，整数之间用空格分隔*/
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int num = 0;

    int arr[1001] = { 0 };
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num);
        arr[num] = num;
    }
    for (i = 0; i < 1001; i++)
    {
        if (arr[i] != 0)
            printf("%d ", arr[i]);
    }
    return 0;
}