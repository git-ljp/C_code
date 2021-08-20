/*描述
功能:等差数列 2，5，8，11，14。。。。

输入:正整数N >0

输出:求等差数列前N项和

本题为多组输入，请使用while(cin>>)等形式读取数据

输入描述：
输入一个正整数。

输出描述：
输出一个相加后的整数。*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        if (n <= 0) return -1;
        else printf("%d\r\n", (3 * n + 1) * n / 2);
    }
    return 0;
}