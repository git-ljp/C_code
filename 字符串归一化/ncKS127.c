#include <stdio.h>

int main(void) {
    int count[26] = { 0 };
    char c;
    while ((c = getchar()) != '\n')
        count[c - 'a'] ++;
    int i = 0;
    while (i < 26) {
        if (count[i] != 0)
            printf("%c%d", i + 'a', count[i]);
        i++;
    }
    return 0;
}