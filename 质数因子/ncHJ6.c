/*����
����:����һ�������������մ�С�����˳������������������ӣ��ظ���ҲҪ�о٣�����180��������Ϊ2 2 3 3 5 ��

���һ��������ҲҪ�пո�

����������
����һ��long������

���������
���մ�С�����˳����������������������ӣ��Կո���������һ��������ҲҪ�пո�*/
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