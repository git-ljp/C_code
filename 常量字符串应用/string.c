#include <stdio.h>
int main()
{
    char str1[] = "hello bit.";
    char str2[] = "hello bit.";
    char* str3 = "hello bit.";//�����ַ��������ܸģ���ô�����ַ��϶�����һ����ַ�У��������ò�ͬ��ָ��ָ�����ַ�
    char* str4 = "hello bit.";
    if (str1 == str2)//��������ʾ�ַ����׵�ַ����������ͬ����ַ��ͬ
        printf("str1 and str2 are same\n");
    else
        printf("str1 and str2 are not same\n");

    if (str3 == str4)//�ַ���ָ���ŵ������ַ����׵�ַ����ָ��'h'�ĵ�ַ
        printf("str3 and str4 are same\n");
    else
        printf("str3 and str4 are not same\n");

    return 0;
}