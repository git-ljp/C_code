#include <stdio.h>
int main()
{
    int x, y, z;
    int a[50][50] = { 0 };
    int b[50][50] = { 0 };
    while (scanf("%d%d%d", &x, &y, &z) != EOF)
    {
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
                scanf("%d", &a[j][i]);
        }
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < z; j++)
                scanf("%d", &b[j][i]);
        }
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < z; j++)
            {
                int sum = 0;
                for (int k = 0; k < y; k++)
                    sum += a[k][i] * b[j][k];
                printf("%d ", sum);
            }
            printf("\n");
        }
    }
    return 0;
}
