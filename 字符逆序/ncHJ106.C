#include <stdio.h>
#include <string.h>
void reverse_str(char* cp)
{
    int len = strlen(cp);
    char* end = cp + len - 1;
    while (cp < end)
    {
        *cp ^= *end;
        *end ^= *cp;
        *cp ^= *end;
        cp++;
        end--;
    }
}

int main()
{
    char arr[100] = { 0 };
    gets(arr);
    reverse_str(arr);
    printf("%s\n", arr);

    return 0;
}