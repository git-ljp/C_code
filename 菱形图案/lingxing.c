//�������룬һ��������2~20��
//���ÿ�����룬����á�* ����ɵ����Σ�ÿ����* ��������һ���ո�
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        //��   n��
        for (i = 0; i < n; i++)
        {            //һ��
            int j = 0;
            for (j = 0; j < n - i; j++)
            {
                printf(" ");
            }
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        //��    n+1��
        for (i = 0; i < n + 1; i++)
        {
            int j = 0;
            for (j = 0; j < i; j++)
            {
                printf(" ");
            }
            for (j = 0; j < n + 1 - i; j++)
            {
                printf("* ");
            }
            printf("\n");

        }

    }
    return 0;
}
