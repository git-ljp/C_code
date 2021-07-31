#include<stdio.h>
int main()
{
    int m = 0;
    int n = 0;
    scanf("%d%d", &m, &n);
    int arr1[100][100] = { 0 };
    int arr2[100][100] = { 0 };
    int i = 0;
    int j = 0;
    int count = 0.0;
    for (i = 0; i < m; i++)
    {

        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {

        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {


        for (j = 0; j < n; j++)
        {
            if (arr1[i][j] == arr2[i][j])
            {
                count++;
            }
        }
    }
    printf("%.2f\n", 100.0 * count / (m * n));
    return 0;





}

