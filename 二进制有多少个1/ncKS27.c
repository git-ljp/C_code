/*��һ��32-bit����ת�ɶ����ƣ����а������ٸ�1������5�Ķ����Ʊ����101�����а���2��1*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < 32; i++)
    {
        if (n % 2 == 1)
            count++;
        n >>= 1;
    }
    printf("%d", count);
    return 0;
}