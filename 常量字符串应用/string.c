#include <stdio.h>
int main()
{
    char str1[] = "hello bit.";
    char str2[] = "hello bit.";
    char* str3 = "hello bit.";//常量字符串，不能改，那么两个字符肯定存在一个地址中，不过是用不同的指针指向首字符
    char* str4 = "hello bit.";
    if (str1 == str2)//数组名表示字符串首地址，数组名不同，地址不同
        printf("str1 and str2 are same\n");
    else
        printf("str1 and str2 are not same\n");

    if (str3 == str4)//字符串指针存放的是首字符的首地址，都指向'h'的地址
        printf("str3 and str4 are same\n");
    else
        printf("str3 and str4 are not same\n");

    return 0;
}