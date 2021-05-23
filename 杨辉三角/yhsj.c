#include<stdio.h>
int main()
{
    int n = 0;
    scanf_s("%d", &n);
    int arr[30][30] = { 0 };
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)//从0开始，0表示第一行，第一列
    {
        for (j = 0; j < n; j++)
        {
            if (j == 0)
            {
                arr[i][j] = 1;
            }
            if (i == j)
            {
                arr[i][j] = 1;
            }
            if (i > 1 && j > 0)//大于第三行，第二列
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;


}