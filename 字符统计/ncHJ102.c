/*����
����һ��ֻ����СдӢ����ĸ�����ֵ��ַ��������ղ�ͬ�ַ�ͳ�Ƹ����ɶൽ�����ͳ�ƽ�������ͳ�Ƶĸ�����ͬ������ASCII����С�������������
���⺬�ж�����������

����������
һ��ֻ����СдӢ����ĸ�����ֵ��ַ�����

���������
һ���ַ�����Ϊ��ͬ��ĸ���ִ����Ľ����ʾ�������ִ�����ͬ����ASCII������������*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i, len;
    while (gets(str))
    {
        int count[256] = { 0 };
        int max = 0;
        len = strlen(str);
        for (i = 0; i < len; i++)
        {
            count[str[i]]++;
            if (count[str[i]] > max)
                max = count[str[i]];
        }
        while (max)
        {
            for (i = 0; i < 256; i++)
            {
                if (count[i] == max)
                    printf("%c", i);
            }             max--;
        }
        printf("\n");
    }
    return 0;
}