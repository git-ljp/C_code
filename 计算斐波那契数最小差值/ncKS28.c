#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, x, n;
    scanf("%d", &n);
    int min, p;
    a = 0, b = 1;
    min = abs(a - n);
    while (b <= n)
    {
        x = b;
        b = a + b;
        a = x;
        p = abs(b - n);
        if (p < min)
            min = p;
    }
    printf("%d", min);
    return(0);
}