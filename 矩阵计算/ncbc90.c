/*输入描述：
第一行为N M(N: 矩阵行数；M: 矩阵列数,且M,N<=10)，接下来的N行为矩阵各行。
输出描述：
一行，其中大于零的元素之和。*/
#include<stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int i = 0;
    int count = 0;
    int num = 0;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            scanf("%d ", &num);

            if (num > 0)
                sum += num;
        }
    }
    printf("%d", sum);
    return 0;


}
