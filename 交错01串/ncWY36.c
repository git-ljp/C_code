/*���һ��01��������������λ�õ��ַ����ǲ�һ����,���Ǿͽ����01��Ϊ����01��������: "1","10101","0101010"���ǽ���01����
С��������һ��01��s,С�����ҳ�һ����������Ӵ�,��������Ӵ���һ������01����С����Ҫ����æ�������������Ӵ��ĳ����Ƕ��١�*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    scanf("%s", str);//gets(str);
    int len;
    len = strlen(str);
    int count = 1;
    int max = 1;
    for (int i = 0; i < len - 1; i++)
    {
        if (str[i] != str[i + 1])
        {
            count++;
        }
        else
            count = 1;
        if (max > count)
            max = max;
        else
            max = count;
    }
    printf("%d", max);
}
