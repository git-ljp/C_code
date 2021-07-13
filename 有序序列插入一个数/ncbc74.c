/*第一行输入一个整数(0≤N≤50)。

第二行输入N个升序排列的整数，输入用空格分隔的N个整数。

第三行输入想要进行插入的一个整数。

输出描述：
输出为一行，N+1个有序排列的整数。*/
#include<stdio.h>
int main()
{
    int n = 0;
    int arr[50] = { 0 };
    int m = 0;
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //插入
    scanf("%d", &m);
    for (i = n - 1; i >= -1; i--)
    {
        if (arr[i] > m)        //如果一开始找的比m,就把大的往后挪
        {
            arr[i + 1] = arr[i];
        }
        else
        {
            arr[i + 1] = m;//如果一开始找的比m小，就把m插入那个数之后
            break;
        }
    }
    //打印新数列
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}