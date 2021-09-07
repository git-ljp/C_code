#include<stdio.h>
#include<string.h>
int main()
{
    char str[256] = { 0 };
    while (scanf("%s", str) != EOF)
    {
        int a[256] = { 0 };
        int len = strlen(str);
        for (int i = 0; i < len; i++)
        {
            a[str[i]]++;
        }
        for (int i = 0; i < len; i++)
        {
            if (a[str[i]] == 1)
            {
                printf("%c\n", str[i]);
                break;
            }
            if (i == (len - 1))
                printf("-1\n");
        }
    }
    return 0;
}