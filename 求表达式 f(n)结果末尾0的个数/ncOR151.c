/*����
����һ����Ȼ��n������ʽ f(n) = 1!\times��2!\times��3!\times��.....\times��n! �Ľ��ĩβ�м���������0��
����������
��Ȼ��n
���������
f(n)ĩβ������0�ĸ���*/
#include<stdio.h>

int fun(int n)
{
    int count = 0;
    while (n >= 5) {
        count += n / 5;
        n = n / 5;
    }
    return count;
}


int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;
    if (n >= 5) {
        for (int i = 5; i <= n; i++)
            count += fun(i);
    }
    printf("%d", count);
    return 0;
}