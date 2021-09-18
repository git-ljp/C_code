#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[1000] = { '\0' };
    while (scanf("%s", str1) != EOF)
    {

        char str2[10000] = { '\0' };
        int shortStr[26] = { 0 };
        int longStr[26] = { 0 };
        scanf("%s", str2);
        for (int i = 0; i < strlen(str1); i++)
        {
            shortStr[str1[i] - 'a'] = 1;
        }
        for (int i = 0; i < strlen(str2); i++)
        {
            longStr[str2[i] - 'a'] = 1;
        }
        int flag = 0;
        for (int i = 0; i < 26; i++)
        {
            if ((shortStr[i] == 1) && (shortStr[i] != longStr[i]))
            {
                flag = 1;
                printf("false\n");
                break;
            }
        }
        if (flag == 0)
        {
            printf("true\n");
        }
    }
    return 0;
}