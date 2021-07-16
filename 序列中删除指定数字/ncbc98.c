/*输入描述：
第一行输入一个整数(0≤N≤50)。

第二行输入N个整数，输入用空格分隔的N个整数。

第三行输入想要进行删除的一个整数。

输出描述：
输出为一行，删除指定数字之后的序列。*/
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[50] = { 0 };
    int i = 0;
    int del = 0;

    for (i = 0; i < n; i++)        //i是遍历数组的下标
    {
        scanf("%d ", &arr[i]);
    }
    scanf("%d\n", &del);
    int j = 0;                //j是用来临时存储删除后的新数列的下标
    for (i = 0; i < n; i++)
    {
        if (arr[i] != del)//当数列中的数不是要删的数的时候就暂时存储到j数列中；
        {
            arr[j++] = arr[i];//i在变化，j也在加；
        }
    }
    for (i = 0; i < j; i++)
    {
        printf("%d ", arr[i]);//实际打印的是i数组；
    }
    return 0;




}


