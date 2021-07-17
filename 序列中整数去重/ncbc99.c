/*输入描述：
输入包含两行，第一行包含一个正整数n（1 ≤ n ≤ 1000），表示第二行序列中数字的个数；第二行包含n个整数（范围1~5000），用空格分隔。

输出描述：
输出为一行，按照输入的顺序输出去重之后的数字，用空格分隔*/
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int arr[1000] = { 0 };
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);

    }
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                int k = 0;
                for (k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;


            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;

}
