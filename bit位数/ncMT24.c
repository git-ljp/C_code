#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    n = n ^ m;
    m = 0;
    while (n > 0)
    {
        if (n & 1)
        {
            m = m + 1;
        }
        n = n >> 1;
    }
    printf("%d\n", m);
}