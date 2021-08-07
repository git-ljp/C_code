/*描述
功能:输入一个正整数，按照从小到大的顺序输出它的所有质因子（重复的也要列举）（如180的质因子为2 2 3 3 5 ）

最后一个数后面也要有空格

输入描述：
输入一个long型整数

输出描述：
按照从小到大的顺序输出它的所有质数的因子，以空格隔开。最后一个数后面也要有空格。*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    long num = 0;
    char str[200] = { 0 };
    int i = 2;
    int temp;
    while (scanf("%d", &num) != EOF) {
        temp = num;
        for (; i * i <= temp && num > i; i++) {
            while (num % i == 0) {
                printf("%d ", i);
                num /= i;
            }
        }
        if (num - 1)printf("%d ", num);
        putchar('\n');
    }
    return 0;
}