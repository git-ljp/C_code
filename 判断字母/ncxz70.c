/*�������룬ÿ���������һ���ַ���
���������
���ÿ�����룬������ַ�����ĸ��YES�����ǣ�NO����*/
#include<stdio.h>
int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            printf("YES\n");

        }
        else
        {

            printf("NO\n");
        }
        getchar();
    }
    return 0;
}