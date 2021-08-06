/*描述
计算字符串最后一个单词的长度，单词以空格隔开，字符串长度小于5000。

输入描述：
输入一行，代表要计算的字符串，非空，长度小于5000。

输出描述：
输出一个整数，表示输入字符串最后一个单词的长度。*/
#include <stdio.h>
#include <string.h>


int main() {
    char str[5000];
    int i = 0;
    int count = 0;
    while (scanf("%c", &str[i++]) != EOF) {
        if (str[i - 1] == ' ') {
            count = 0;
        }
        else {
            count++;
        }
    };
    printf("%d", count - 1);
}