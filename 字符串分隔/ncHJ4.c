#include<stdio.h>
#include<string.h>
int main()
{
    char str[100] = { 0 };

    while (scanf("%s", str) == 1) {
        char* str_p = str;
        int str_len = strlen(str) - 1;
        int n = str_len / 8;
        for (int j = 0; j < n; j++) {
            for (int i = 0; i <= 7; i++) {
                printf("%c", *str_p);
                str_p++;
            }
            printf("\n");
        }
        for (int i = 0; i <= 7; i++) {
            if (*str_p != '\0') {
                printf("%c", *str_p);
                str_p++;
            }
            else {
                printf("0");
            }
        }
        printf("\n");
    }
}