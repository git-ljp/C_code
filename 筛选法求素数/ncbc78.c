/*多组输入，每行输入一个正整数（不大于100）。
输出描述：
针对每行输入的整数n，输出两行，第一行，输出n之内（包括n）的素数，用空格分隔，

第二行，输出数组中2之后0 的个数。每行输出后换行。*/
#include<stdio.h>
int main()
{
    int n = 0;
    int arr[101] = { 0 };
    while (~scanf("%d", &n))
    {

        int i = 0;
        int count = 0;
        //将0到n之间的数放到arr数组中；
        for (i = 0; i < n; i++)
        {
            arr[i] = i;        //这里还没有排除不是素数的数，所以都是数组的下标就是每个数；
        }
        //筛选
        for (i = 2; i <= n; i++)        //题目要求是求2到n之间的数，所以i表示每个数；j表示数组下标；
        {
            int j = 0;

            for (j = i + 1; j <= n; j++)        //每排除一次之后就从下一个开始；
            {
                if (arr[j] % i == 0)
                {
                    arr[j] = 0;
                }
            }
        }
        //计算0的个数，打印素数；
        for (i = 2; i <= n; i++)
        {
            if (arr[i] == 0)
            {
                count++;
            }
            else
            {
                printf("%d ", arr[i]);
            }
        }
        printf("\n%d\n", count);
    }
    return 0;
}