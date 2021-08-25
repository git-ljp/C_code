/*如果一个01串任意两个相邻位置的字符都是不一样的,我们就叫这个01串为交错01串。例如: "1","10101","0101010"都是交错01串。
小易现在有一个01串s,小易想找出一个最长的连续子串,并且这个子串是一个交错01串。小易需要你帮帮忙求出最长的这样的子串的长度是多少。*/
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
