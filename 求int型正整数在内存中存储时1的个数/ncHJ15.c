/*����
����һ��int�͵����������������int���������ڴ��д洢ʱ1�ĸ�����

����������
 ����һ��������int���ͣ�

���������
 �����ת����2���ƺ����1�ĸ���*/
#include <stdio.h>

int main() {
    int m;
    int cnt = 0;
    scanf("%d", &m);
    while (m) {
        cnt += m & 1;
        m = m >> 1;
    }
    printf("%d", cnt);
    return 0;
}