/*对字符串中的所有单词进行倒排。

说明：

1、构成单词的字符只有26个大写或小写英文字母；

2、非构成单词的字符均视为单词间隔符；

3、要求倒排后的单词间隔符以一个空格表示；如果原字符串中相邻单词间有多个间隔符时，倒排转换后也只允许出现一个空格间隔符；

4、每个单词最长20个字母；*/
#include "stdio.h"

int main()
{
    char s[10000] = { 0 };
    char chr = 0;
    int len = 0;
    int flag = 0;
    int  end = 0, start = 0;
    int first = 0;
    while (1)
    {
        scanf("%c", &chr);
        if (chr == '\n')
            break;

        s[len++] = chr;
    }

    for (int i = len; i > 0; i--)
    {
        if ((s[i - 1] >= 'a' && s[i - 1] <= 'z') || (s[i - 1] >= 'A' && s[i - 1] <= 'Z')) // 
        {
            if (flag == 0)
            {
                flag = 1;
                end = i;
            }
        }
        else
        {
            if (flag == 1)
            {
                flag = 0;
                start = i;

                if (first == 0)
                    first = 1;
                else
                    printf(" ");

                for (int j = start; j < end; j++)
                    printf("%c", s[j]);

                start = 0;
                end = 0;
            }
        }
        if (i == 1)
        {
            if (end != 0)
            {
                printf(" ");
                for (int j = start; j < end; j++)
                    printf("%c", s[j]);
            }
            printf("\n");
        }
    }
}