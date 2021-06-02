#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Exchange(char* str, int k)
{
    int i, m;
    char temp;
    char* start;
    //控制要旋转的次数
    for (i = 0; i < k; i++)
    {
        //旋转一次
        start = str;//指针指向首元素地址
        temp = *str;//先保存首字符到临时变量
        for (m = 0; m <=(int)strlen(str) - 1; m++)//元素提前放置
        {
            *start = *(start + 1);
            start++;
        }
        *(str + strlen(str))=temp;//将首字符放置最后
    }
}

int main()
{
    char str[20] = "\0";
    printf("请输入字符串：\n");
    scanf("%s", &str);
    int k;
    printf("请输入要左旋几个字符\n");
    scanf("%d", &k);
    Exchange(str, k);
    printf("%s\n", str);
    return 0;
}