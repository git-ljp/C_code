/*����������
һ�У�������������n��m���ÿո�ָ����ڶ��а���n*m����������Χ-231~231-1����(1��n��10, 1��m��10)
���������
����滮��n��m�еľ���ÿ�����ĺ�����һ���ո�*/
#include<stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int num = 0;
    int i = 0;
    for (i = 1; i <= n * m; i++)
    {
        scanf("%d ", &num);
        printf("%d ", num);
        if (i % m == 0)
        {
            printf("\n");
        }


    }
    return 0;

}