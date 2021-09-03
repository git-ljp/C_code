#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char str1[1000] = { 0 };


    while (scanf("%s", str1) != EOF) {
        char str2[1000] = { 0 };
        scanf("%s", str2);

        int len1 = strlen(str1);
        int len2 = strlen(str2);
        int i = 0, carry = 0, j = 0;
        int num1[1000] = { 0 };
        int num2[1000] = { 0 };
        int result[1000] = { 0 };

        for (i = 0; i < len1; i++) {
            num1[i] = str1[len1 - 1 - i] - '0';
        }
        for (i = 0; i < len2; i++) {
            num2[i] = str2[len2 - 1 - i] - '0';
        }
        int len = len1 > len2 ? len1 : len2;
        for (i = 0; i < len + 1; i++) {
            result[i] = (num1[i] + num2[i] + carry) % 10;
            carry = (num1[i] + num2[i] + carry) > 9 ? 1 : 0;
        }

        for (j = i - 1; j >= 0; j--) {
            if ((j == i - 1) && (result[j] == 0))
                continue;
            else printf("%d", result[j]);
        }
        printf("\n");
    }
    return 0;
}