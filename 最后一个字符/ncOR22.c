#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int i;
        getchar();
        for (i = 0; i < n; i++)
        {
            int j;
            int b[1000] = { 0 };
            char a[1000000];
            gets(a);
            for (j = 0; j < strlen(a); j++)
            {
                b[a[j]]++;
            }
            for (j = 0; j < strlen(a); j++)
            {
                if (b[a[j]] == 1)
                {
                    printf("%c\n", a[j]);
                    break;
                }
            }
        }
    }
    return 0;
}
