/*�������룬һ��������1~20������ʾ�����εĳ��ȣ�Ҳ��ʾ���������

���ÿ�����룬����á�*����ɵĶ�Ӧ�߳��������Σ�ÿ����*��������һ���ո�
*/
#include<stdio.h>
int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < n; j++)
            {
                printf("* ");
            }
            printf("\n");
        }

    }

    return 0;
}