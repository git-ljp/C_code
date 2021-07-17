/*输入描述：
输入包含三行，

第一行包含两个正整数n, m（1 ≤ n,m ≤ 100），用空格分隔。n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。

第二行包含n个整数（范围1~5000），用空格分隔。

第三行包含m个整数（范围1~5000），用空格分隔。
输出描述：
输出为一行，输出长度为n+m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。*/
#include<stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr1[100] = { 0 };
    int arr2[100] = { 0 };
    int i = 0;


    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr1[i]);

    }
    for (i = 0; i < m; i++)
    {
        scanf("%d ", &arr2[i]);
    }
    i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            printf("%d ", arr1[i]);
            i++;
        }
        else
        {
            printf("%d ", arr2[j]);
            j++;
        }
    }
    if (i == n)
    {
        for (; j < m; j++)
        {
            printf("%d ", arr2[j]);
        }
    }
    else
    {
        for (; i < n; i++)
        {
            printf("%d ", arr1[i]);
        }
    }
    return 0;
}


