#include<stdio.h>
#include<string.h>
int main()
{
    char a[105], b[105];
    int c[105] = { 0 }, d[105] = { 0 }, n[105];
    while (scanf("%s%s", a, b) != EOF)
    {
        int k = strlen(a), p = strlen(b), j = 0;
        for (int i = 0; i < k; i++)
        {
            if (a[i] > '9' || a[i] < '1')
            {
                printf("error");
                return 0;

            }
            c[i] = a[k - 1 - i] - '0';
        }
        for (int i = 0; i < p; i++)
        {
            if (b[i] > '9' || b[i] < '1')
            {
                printf("error");
                return 0;
            }
            d[i] = b[p - 1 - i] - '0';
        }
        int y = k > p ? k : p;
        for (int i = 0; i < y + 1; i++)
        {
            int tem = c[i] + d[i] + j;
            j = tem / 10;
            n[i] = tem % 10;

        }

        while (n[y] == 0)
        {
            y--;
        }


        for (int i = y; i >= 0; i--)
        {
            printf("%d", n[i]);
        } printf("\n");
    }
    return 0;
}