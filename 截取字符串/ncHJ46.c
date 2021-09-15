#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[1000];
    while (scanf("%s", &str) != EOF) {
        int n;
        scanf("%d", &n);
        int cnt = 0;
        int i = 0;
        while (cnt + sizeof(str[i]) <= n) {
            printf("%c", str[i++]);
            cnt += sizeof(str[i]);
        }
        printf("\n");
    }
    return 0;
}



