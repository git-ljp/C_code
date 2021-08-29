/*把一个32-bit整型转成二进制，其中包含多少个1，比如5的二进制表达是101，其中包含2个1*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < 32; i++)
    {
        if (n % 2 == 1)
            count++;
        n >>= 1;
    }
    printf("%d", count);
    return 0;
}