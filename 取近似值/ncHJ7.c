#include <stdio.h>
int main()
{
    int i;
    float fl;
    scanf("%f", &fl);
    i = (int)(fl * 10);
    i = i / 10 + (i % 10 >= 5);
    printf("%d", i);
}