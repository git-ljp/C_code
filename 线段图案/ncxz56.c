/*�������룬һ��������1~100������ʾ�߶γ��ȣ����� * ����������

���ÿ�����룬���ռһ�У��á� * ����ɵĶ�Ӧ���ȵ��߶Ρ�*/
#include<stdio.h>
int main()
{
    int num = 0;
    while (~scanf("%d", &num))
    {
        int i = 0;
        for (i = 0; i < num; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}