/*描述
KiKi想完成字母大小写转换，有一个字符，判断它是否为大写字母，如果是，将它转换成小写字母；反之则转换为大写字母。
输入描述：
多组输入，每一行输入一个字母。
输出描述：
针对每组输入，输出单独占一行，输出字母的对应形式。*/
#include<stdio.h>
int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            printf("%c\n", ch - 32);
        }
        else if (ch >= 'A' && ch <= 'Z')        //不能是else,else后面不能接括号
        {
            printf("%c\n", ch + 32);
        }
        getchar();
    }
    return 0;
}