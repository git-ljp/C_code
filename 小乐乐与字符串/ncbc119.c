/*����
����ף���ĸ��70����֮�ʣ���ʦ��С���ֳ���һ�����⡣��Ҷ�֪��China��Ӣ����д��CHN����ô����һ���ַ���s������Ҫ������ͳ��s���Ӵ���CHN���ĸ�����
�Ӵ��Ķ��壺���������±�a < b < c����ô��s[a]s[b]s[c]���͹���s��һ���Ӵ����硰ABC�����Ӵ��С�A������B������C������AB������AC������BC������ABC����


����������
����ֻ������д��ĸ���ַ���s��(1 �� length �� 8000)
���������
���һ��������Ϊ�ַ���s���ִ���CHN����������*/
#include<stdio.h>
int main()
{
    char arr[8000] = { 0 };
    long long c = 0;
    long long ch = 0;
    long long chn = 0;
    scanf("%s", &arr);
    char* p = arr;
    while (*p)
    {
        if (*p == 'C')

            c++;

        else if (*p == 'H')


            ch += c;

        else if (*p == 'N')

            chn += ch;
        p++;
    }
    printf("%lld", chn);
    return 0;

}