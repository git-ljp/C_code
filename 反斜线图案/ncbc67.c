/*�������룬һ��������2~20������ʾ�����������Ҳ��ʾ��ɷ�б�ߵġ� * ����������

���������
���ÿ�����룬����á� * ����ɵķ�б�ߡ�*/
#include<stdio.h>
int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        //�ո��*�ӿո�
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < i; j++)
            {
                printf(" ");
            }
            printf("*");
            for (j = 0; j < n - 1 - i; j++)
            {
                printf(" ");
            }
            printf("\n");

        }
    }
    return 0;
}