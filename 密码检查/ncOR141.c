
#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, len, flag;
    int d = 0, b = 0, c = 0;
    char a[101];
    scanf("%d", &n);
    while (n--)
    {
        flag = 0, d = 0, b = 0, c = 0;
        scanf("%s", &a);
        //getchar();
        len = strlen(a);
        if ((a[0] >= '0' && a[0] <= '9') || len < 8)
            printf("NO\n");
        else
        {
            for (i = 0; i < len; i++)
            {
                if (a[i] >= '0' && a[i] <= '9')
                    d = 1;
                else if (a[i] >= 'a' && a[i] <= 'z')
                    b = 1;
                else if (a[i] >= 'A' && a[i] <= 'Z')
                    c = 1;
                if (d + b + c >= 2)
                {
                    printf("YES\n");
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                printf("NO\n");
        }


    }


    return 0;
}
