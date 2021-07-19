/*输入描述：
一行，输入两个整数n和m，用空格分隔，第二行包含n*m个整数（范围-231~231-1）。(1≤n≤10, 1≤m≤10)
输出描述：
输出规划后n行m列的矩阵，每个数的后面有一个空格。*/
#include<stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int num = 0;
    int i = 0;
    for (i = 1; i <= n * m; i++)
    {
        scanf("%d ", &num);
        printf("%d ", num);
        if (i % m == 0)
        {
            printf("\n");
        }


    }
    return 0;

}