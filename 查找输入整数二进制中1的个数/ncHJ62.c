/*����

����һ�����������������ڶ������µ�1�ĸ�����
ע������������������������
����������
����һ������

���������
����������������1�ĸ���*/
#include <stdio.h>
int main()
{
    int a;
    int count = 0;
    while (scanf("%d", &a) != EOF) {
        while (a) {
            a &= (a - 1);
            count++;
        }
        printf("%d\n", count);
        count = 0;
    }
    return 0;
}