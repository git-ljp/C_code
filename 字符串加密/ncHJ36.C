#include <stdio.h>
#include <string.h>

int main()
{
    char input[1024];
    char str[1024];
    while (scanf("%s", input) != EOF)
    {
        scanf("%s", str);
        int k = 0;
        char a[26];
        int b[26] = { 0 };
        int len;
        len = strlen(input);
        for (int i = 0; i < len; i++)
        {
            input[i] = toupper(input[i]);
            if (b[input[i] - 'A'] == 0)
            {
                a[k++] = input[i];
                b[input[i] - 'A'] = 1;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            if (b[i] == 0)
            {
                a[k++] = i + 'A';
            }
        }
        int len2;
        len2 = strlen(str);
        for (int i = 0; i < len2; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                printf("%c", a[str[i] - 'A']);
            }
            else if (str[i] >= 'a' && str[i] <= 'z')
            {
                printf("%c", a[str[i] - 'a'] + 'a' - 'A');
            }
            else printf("%c", str[i]);
        }
        printf("\n");
    }
}