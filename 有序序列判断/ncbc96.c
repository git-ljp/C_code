/*����������
��һ������һ������N(3��N��50)��
�ڶ�������N���������ÿո�ָ�N��������
���������
���Ϊһ�У���������������sorted���������unsorted��*/
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int num[50] = { 0 };
    int flag1 = 0;//����ı�־��ʼ
    int flag2 = 0;//����ı�־��ʼ
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &num[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        if (num[i] < num[i + 1])
        {
            flag1 = 1;//���ǽ���
        }
        if (num[i] >= num[i + 1])
        {
            flag2 = 1;//��������
        }
    }
    if (flag1 + flag2 == 1)        //���������ǽ�������Ϊ1��
    {
        printf("sorted\n");
    }
    else
    {
        printf("unsorted\n");
    }

    return 0;
}