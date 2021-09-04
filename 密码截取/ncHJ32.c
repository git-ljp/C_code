#include <stdio.h>
#include <string.h>

#define LEN 10000

int palindrome_passwd_len(char* input_string, int step)
{
    int len = strlen(input_string);
    int low = 0, high = 0;
    int max = 0;
    int i;

    for (i = 0; i < len; ++i) {
        low = i;
        high = low + step;
        while (low >= 0 && high < len && (input_string[low] == input_string[high])) {
            low--;
            high++;
        }
        if ((high - low - 1) > max) {
            max = high - low - 1;
        }
    }

    return max;
}

int main(int argc, char* argv[])
{
    char input_string[LEN + 2];
    int max = 0, len = 0;

    while (fgets(input_string, LEN + 2, stdin) != NULL) {
        len = palindrome_passwd_len(input_string, 1);
        max = palindrome_passwd_len(input_string, 2);
        if (len >= max) {
            printf("%d\n", len);
        }
        else {
            printf("%d\n", max);
        }
    }

    return 0;
}