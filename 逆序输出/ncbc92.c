/*输入描述：
一行，输入10个整数（范围-231~231-1），用空格分隔。
输出描述：
一行，逆序输出输入的10个整数，用空格分隔。*/
#include<stdio.h>
int main()
{
    int arr[10] = { 0 };
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d ", &arr[i]);
    }
    for (i = 9; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}