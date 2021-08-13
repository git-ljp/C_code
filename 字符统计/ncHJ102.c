/*描述
输入一个只包含小写英文字母和数字的字符串，按照不同字符统计个数由多到少输出统计结果，如果统计的个数相同，则按照ASCII码由小到大排序输出。
本题含有多组样例输入

输入描述：
一个只包含小写英文字母和数字的字符串。

输出描述：
一个字符串，为不同字母出现次数的降序表示。若出现次数相同，则按ASCII码的升序输出。*/

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