/*描述

输入一个正整数，计算它在二进制下的1的个数。
注意多组输入输出！！！！！！
输入描述：
输入一个整数

输出描述：
计算整数二进制中1的个数*/
#include <stdio.h>
int main()
{
    int a;
    int count = 0;
    while (scanf("%d", &a) != EOF) {
        while (a) {
            a &= (a - 1);
            count++;
        }
        printf("%d\n", count);
        count = 0;
    }
    return 0;
}