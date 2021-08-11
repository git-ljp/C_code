/*描述
给定n个字符串，请对n个字符串按照字典序排列。
输入描述：
输入第一行为一个正整数n(1≤n≤1000),下面n行为n个字符串(字符串长度≤100),字符串中只含有大小写字母。
输出描述：
数据输出n行，输出结果为按照字典序排列的字符串。*/
#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int num = 0, j;
    char cin[101];
    char mystr[1000][101];
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%s", cin);
        for (j = i - 1; j >= 0; j--) {
            if (strcmp(cin, mystr[j]) < 0) {
                strcpy(mystr[j + 1], mystr[j]);
            }
            else {
                strcpy(mystr[j + 1], cin);
                break;
            }
        }
        if (j < 0)
        {
            strcpy(mystr[0], cin);
        }
    }
    for (int i = 0; i < num; i++)
    {
        printf("%s\n", mystr[i]);
    }
    return 0;
}