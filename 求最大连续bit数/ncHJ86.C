#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int a[8];
        for (int i = 0; i < 8; i++)
        {
            a[i] = n % 2;
            n = n / 2;
        }
        int count = 0;
        int max = 0;
        for (int i = 0; i < 8; i++)
        {
            // printf("%d--",a[i]);
            if (a[i] == 1)
                count++;
            else
                count = 0;
            max = max > count ? max : count;
        }
        printf("%d\n", max);
    }
}