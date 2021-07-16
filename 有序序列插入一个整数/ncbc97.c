/*输入描述：
第一行输入一个整数N(0≤N≤50)。

第二行输入N个升序排列的整数，输入用空格分隔的N个整数。

第三行输入想要进行插入的一个整数。
输出描述：
输出为一行，N+1个有序排列的整数。*/
#include <stdio.h>
int main()
{
    //第一行输入一个整数(0≤N≤50)。
    int N;
    scanf("%d", &N);
    int a[N];
    int i, j;
    //第二行输入N个升序排列的整数，输入用空格分隔的N个整数
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    //第三行输入想要进行插入的一个整数
    int x;
    scanf("%d", &x);
    //在数列中插入一个数
    for (i = 0; i < N; i++)
    {
        if (x < a[i])
        {
            for (j = N; j > i; j--)
                a[j] = a[j - 1];
            break;
        }
    }
    a[i] = x;
    for (i = 0; i < N + 1; i++)
        printf("%d ", a[i]);
    return 0;
}