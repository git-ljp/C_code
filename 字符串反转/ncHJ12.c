/*描述
接受一个只包含小写字母的字符串，然后输出该字符串反转后的字符串。（字符串长度不超过1000）

输入描述：
输入一行，为一个只包含小写字母的字符串。

输出描述：
输出该字符串反转后的字符串。*/
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