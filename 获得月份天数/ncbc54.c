/*多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
输出描述：
针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。*/
#include<stdio.h>
int main()
{
    int y = 0;
    int m = 0;
    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    while (~scanf("%d %d", &y, &m))
    {
        int day = days[m - 1];
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        {
            if (m == 2)

                day++;

        }
        printf("%d\n", day);


    }
    return 0;

}