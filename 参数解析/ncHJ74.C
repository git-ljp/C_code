#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[1000];
    while (gets(str))
    {
        int flag = 0; int len = strlen(str);
        for (int i = 0; i < len; i++)
        {
            if (str[i] == '"')
            {
                i++;
                while (str[i] != '"')
                {
                    i++;
                }
            }
            if (str[i] == ' ')
            {
                flag++;
            }
        }
        flag = flag + 1;
        printf("%d\n", flag);
        for (int j = 0; j < len; j++)
        {
            if (str[j] == ' ')
            {
                printf("\n");
            }
            else if (str[j] != ' ' && str[j] != '"')
            {
                printf("%c", str[j]);
            }
            else if (str[j] == '"')
            {
                j = j + 1;
                while (str[j] != '"')
                {
                    printf("%c", str[j]); j++;
                }
                continue;
            }
        }
    }
    return 0;
}