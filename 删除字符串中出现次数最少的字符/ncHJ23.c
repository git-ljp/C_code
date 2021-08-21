/*描述
实现删除字符串中出现次数最少的字符，若多个字符出现次数一样，则都删除。输出删除这些单词后的字符串，字符串中其它字符保持原来的顺序。
注意每个输入文件有多组输入，即多个字符串用回车隔开
输入描述：
字符串只包含小写英文字母, 不考虑非法输入，输入的字符串长度小于等于20个字节。

输出描述：
删除字符串中出现次数最少的字符后的字符串。*/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int i;
    while (scanf("%s", a) != EOF)
    {

        int min = 20;
        int b[1000] = { 0 };
        for (i = 0; i < strlen(a); i++)
        {
            b[a[i] - 'a']++;
        }
        for (i = 0; i < 1000; i++)
        {
            if ((b[i]) && (b[i] < min))
            {
                min = b[i];
            }
        }
        for (i = 0; i < strlen(a); i++)
        {
            if (b[a[i] - 'a'] > min)
            {
                printf("%c", a[i]);
            }
        }
        printf("\n");
    }
}