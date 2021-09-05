#include<stdio.h>
#include<string.h>

#define MAX 1000

int main()
{
    char string[MAX] = { 0 };
    while (gets(string)) {
        char temp[MAX] = { 0 };
        int  kk = 0;
        for (int ii = 0; ii < 26; ii++) {
            for (int jj = 0; jj < strlen(string); jj++) {
                if ((string[jj] == 'a' + ii) || string[jj] == 'A' + ii) {
                    temp[kk++] = string[jj];
                }
            }
        }
        int mm = 0;
        for (int n = 0; n < strlen(string); n++) {
            if ((string[n] >= 'a' && string[n] <= 'z') || (string[n] >= 'A' && string[n] <= 'Z')) {
                string[n] = temp[mm++];
            }
        }
        printf("%s ", string);
        printf("\n");
    }
    return 0;
}