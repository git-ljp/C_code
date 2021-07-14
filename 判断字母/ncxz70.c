/*多组输入，每行输入包括一个字符。
输出描述：
针对每行输入，输出该字符是字母（YES）或不是（NO）。*/
#include<stdio.h>
int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF)
    {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            printf("YES\n");

        }
        else
        {

            printf("NO\n");
        }
        getchar();
    }
    return 0;
}