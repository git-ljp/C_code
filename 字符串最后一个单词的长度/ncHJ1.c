/*����
�����ַ������һ�����ʵĳ��ȣ������Կո�������ַ�������С��5000��

����������
����һ�У�����Ҫ������ַ������ǿգ�����С��5000��

���������
���һ����������ʾ�����ַ������һ�����ʵĳ��ȡ�*/
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