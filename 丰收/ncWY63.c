#include <stdio.h>
int a[100000 + 10];
int main()
{
    int i, m, n, sum, mid, l, r;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        a[i] += a[i - 1];

    }
    scanf("%d", &m);
    while (m--)
    {
        l = 1; r = n;
        scanf("%d", &sum);
        while (l < r)
        {
            mid = (l + r) / 2;
            if (a[mid] >= sum)
                r = mid;
            else
                l = mid + 1;

        }
        printf("%d\n", l);
    }
}
