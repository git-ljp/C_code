        /*  1
          1 1 1
        1 2 3 2 1
     1  3 6 7 6 3 1
     
     以上三角形的数阵，第一行只有一个数1，以下每行的每个数，是恰好是它上面的数，左上角数到右上角的数，3个数之和（如果不存在某个数，认为该数就是0）。

求第n行第一个偶数出现的位置。如果没有偶数，则输出-1。例如输入3,则输出2，输入4则输出3。


输入n(n <= 1000000000)
本题有多组输入数据，输入到文件末尾，请使用while(cin>>)等方式读入*/

#include<stdio.h>

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        if (n % 2 == 1)//奇数行直接输出2
            printf("2\n");
        else
        {
            if (n % 4 == 0)
                printf("3\n");
            else
                printf("4\n");
        }
    }
}
