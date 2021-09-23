#include<stdio.h>
#include<string.h>
int main()
{
    char mima[100], x[100];
    int len, i;
    scanf("%s", mima);
    len = strlen(mima);
    for (i = 0; i < len; i++)
    {
        if (mima[i] >= 'a' && mima[i] <= 'c')
            x[i] = '2';
        else if (mima[i] >= 'd' && mima[i] <= 'f')
            x[i] = '3';
        else if (mima[i] >= 'g' && mima[i] <= 'i')
            x[i] = '4';
        else if (mima[i] >= 'j' && mima[i] <= 'l')
            x[i] = '5';
        else if (mima[i] >= 'm' && mima[i] <= 'o')
            x[i] = '6';
        else if (mima[i] >= 'p' && mima[i] <= 's')
            x[i] = '7';
        else if (mima[i] >= 't' && mima[i] <= 'v')
            x[i] = '8';
        else if (mima[i] >= 'w' && mima[i] <= 'z')
            x[i] = '9';
        else if (mima[i] >= 'A' && mima[i] <= 'Y')
            x[i] = mima[i] + 33;
        else if (mima[i] == 'Z')
            x[i] = 'a';
        else if (mima[i] >= '0' && mima[i] <= '9')
            x[i] = mima[i];
    }
    printf("%s", x);




}