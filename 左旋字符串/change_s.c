#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Exchange(char* str, int k)
{
    int i, m;
    char temp;
    char* start;
    //����Ҫ��ת�Ĵ���
    for (i = 0; i < k; i++)
    {
        //��תһ��
        start = str;//ָ��ָ����Ԫ�ص�ַ
        temp = *str;//�ȱ������ַ�����ʱ����
        for (m = 0; m <=(int)strlen(str) - 1; m++)//Ԫ����ǰ����
        {
            *start = *(start + 1);
            start++;
        }
        *(str + strlen(str))=temp;//�����ַ��������
    }
}

int main()
{
    char str[20] = "\0";
    printf("�������ַ�����\n");
    scanf("%s", &str);
    int k;
    printf("������Ҫ���������ַ�\n");
    scanf("%d", &k);
    Exchange(str, k);
    printf("%s\n", str);
    return 0;
}