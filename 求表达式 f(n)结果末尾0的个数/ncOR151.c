/*描述
输入一个自然数n，求表达式 f(n) = 1!\times×2!\times×3!\times×.....\times×n! 的结果末尾有几个连续的0？
输入描述：
自然数n
输出描述：
f(n)末尾连续的0的个数*/
#include<stdio.h>

int fun(int n)
{
    int count = 0;
    while (n >= 5) {
        count += n / 5;
        n = n / 5;
    }
    return count;
}


int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;
    if (n >= 5) {
        for (int i = 5; i <= n; i++)
            count += fun(i);
    }
    printf("%d", count);
    return 0;
}