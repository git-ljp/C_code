/*描述
KiKi想知道一个n阶方矩是否为上三角矩阵，请帮他编程判定。上三角矩阵即主对角线以下的元素都为0的矩阵，主对角线为从矩阵的左上角至右下角的连线。

输入描述：
第一行包含一个整数n，表示一个方阵包含n行n列，用空格分隔。 (2≤n≤10)

从2到n+1行，每行输入n个整数（范围-231~231-1），用空格分隔，共输入n*n个数。

输出描述：
一行，如果输入方阵是上三角矩阵输出"YES"并换行，否则输出"NO"并换行。*/
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int flag = 0;
    int arr[11][11] = { 0 };
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
            if (i > j && arr[i][j] != 0)
            {
                flag = 1;
            }
        }
    }
    if (flag)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;



}