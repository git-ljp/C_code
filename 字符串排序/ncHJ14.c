/*����
����n���ַ��������n���ַ��������ֵ������С�
����������
�����һ��Ϊһ��������n(1��n��1000),����n��Ϊn���ַ���(�ַ������ȡ�100),�ַ�����ֻ���д�Сд��ĸ��
���������
�������n�У�������Ϊ�����ֵ������е��ַ�����*/
#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int num = 0, j;
    char cin[101];
    char mystr[1000][101];
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%s", cin);
        for (j = i - 1; j >= 0; j--) {
            if (strcmp(cin, mystr[j]) < 0) {
                strcpy(mystr[j + 1], mystr[j]);
            }
            else {
                strcpy(mystr[j + 1], cin);
                break;
            }
        }
        if (j < 0)
        {
            strcpy(mystr[0], cin);
        }
    }
    for (int i = 0; i < num; i++)
    {
        printf("%s\n", mystr[i]);
    }
    return 0;
}