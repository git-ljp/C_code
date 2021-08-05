/*描述
写出一个程序，接受一个十六进制的数，输出该数值的十进制表示。

输入描述：
输入一个十六进制的数值字符串。注意：一个用例会同时有多组输入数据，请参考帖子https://www.nowcoder.com/discuss/276处理多组输入的问题。

输出描述：
输出该数值的十进制字符串。不同组的测试用例用\n隔开。*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str[100];
    int i = 0, count, sum;
    while (gets(str))//用于多次输入
    {
        count = strlen(str);//计算字符串的长度
        sum = 0;
        for (i = count - 1; i >= 0; i--)//从十六进制个位开始，每位都转换成十进制
        {
            if (str[i] >= '0' && str[i] <= '9')//数字字符的转换
            {
                sum += (str[i] - 48) * pow(16, count - i - 1);
            }
            else if (str[i] >= 'A' && str[i] <= 'F')//字母字符的转换
            {
                sum += (str[i] - 55) * pow(16, count - i - 1);
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}