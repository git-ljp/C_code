#include<stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr1[10][10] = { 0 };
    int arr2[10][10] = { 0 };
    int i = 0;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            scanf("%d ", &arr1[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            scanf("%d ", &arr2[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                printf("No\n");
                return 0;
            }
        }
    }
    printf("Yes\n");
    return 0;

}