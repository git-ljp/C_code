/*我们定义一个由数字 0 和 1 组成的序列是交错序列，当且仅当在这个序列中 0 和 1 是轮流 出现的，比如，0，010，10101 都是交错序列。
现在给出了一个由数字 0 和 1 组成的序列𝐴，它可能不是一个交错序列，但是你可以从这个 序列中选择一些数字出来，按他们在序列𝐴中原有的相对顺序排列(即选取𝐴的一个子序列)， 使得你最后得到的是一个交错序列。问这样能得到的交错序列的最长长度是多少。*/
# include <stdio.h>

int main()
{
    int n;
    char buf[200000] = { 0 };
    char copy[200000];
    scanf("%d", &n);
    getchar();
    gets(buf);
    int count = 1;
    int j = 0;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (buf[i] != ' ')
        {
            copy[j] = buf[i];
            j++;
        }
    }
    copy[j] = '\0';
    for (int i = 0; i < j - 1; i++)
    {
        if (copy[i] != copy[i + 1])
        {
            count += 1;
        }
    }
    printf("%d\n", count);
    return 0;
}