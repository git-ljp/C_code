/*����
����һ��ֻ����Сд��ĸ���ַ�����Ȼ��������ַ�����ת����ַ��������ַ������Ȳ�����1000��

����������
����һ�У�Ϊһ��ֻ����Сд��ĸ���ַ�����

���������
������ַ�����ת����ַ�����*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch[1000];
    gets(ch);
    int len = strlen(ch);
    for (int i = len; i > 0; i--)
        printf("%c", ch[i - 1]);
    return 0;
}