/*描述
在庆祝祖国母亲70华诞之际，老师给小乐乐出了一个问题。大家都知道China的英文缩写是CHN，那么给你一个字符串s，你需要做的是统计s中子串“CHN”的个数。
子串的定义：存在任意下标a < b < c，那么“s[a]s[b]s[c]”就构成s的一个子串。如“ABC”的子串有“A”、“B”、“C”、“AB”、“AC”、“BC”、“ABC”。


输入描述：
输入只包含大写字母的字符串s。(1 ≤ length ≤ 8000)
输出描述：
输出一个整数，为字符串s中字串“CHN”的数量。*/
#include<stdio.h>
int main()
{
    char arr[8000] = { 0 };
    long long c = 0;
    long long ch = 0;
    long long chn = 0;
    scanf("%s", &arr);
    char* p = arr;
    while (*p)
    {
        if (*p == 'C')

            c++;

        else if (*p == 'H')


            ch += c;

        else if (*p == 'N')

            chn += ch;
        p++;
    }
    printf("%lld", chn);
    return 0;

}