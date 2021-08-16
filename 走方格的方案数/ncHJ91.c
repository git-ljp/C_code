/*描述
请计算n*m的棋盘格子（n为横向的格子数，m为竖向的格子数）沿着各自边缘线从左上角走到右下角，总共有多少种走法，要求不能走回头路，即：只能往右和往下走，不能往左和往上走。

本题含有多组样例输入。
输入描述：
每组样例输入两个正整数n和m，用空格隔开。(1≤n,m≤8)

输出描述：
每组样例输出一行结果*/
#include <stdio.h>

int fun(int n, int m)
{
    if (n == 0 || m == 0)
        return 1;
    else
        return fun(n - 1, m) + fun(n, m - 1);
}

int main()
{
    int n, m, a;
    while (scanf("%d %d", &n, &m) != EOF)
        printf("%d\n", a = fun(n, m));
    return 0;
}
