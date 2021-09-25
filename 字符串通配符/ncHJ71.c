#include<stdio.h>
#include<string.h>

int max(int a, int b)
{
    return a > b ? a : b;
}
int match(char a[], char b[])
{
    int lena = strlen(a);
    int lenb = strlen(b);
    int dp[100][100] = { 0 };
    dp[0][0] = 1;
    for (int j = 0; j < lenb; j++)
    {
        if ((b[j] == '.') || ((b[j] >= '0') && (b[j] <= '9')) || ((b[j] >= 'a') && (b[j] <= 'z')) || ((b[j] >= 'A') && (b[j] <= 'Z')))
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    for (int i = 1; i <= lena; i++)
    {
        if (a[i - 1] == '*')
        {
            dp[i][0] = 1;
        }
        else
        {
            break;
        }
    }
    for (int i = 1; i <= lena; i++)
    {
        for (int j = 1; j <= lenb; j++)
        {
            if (a[i - 1] == '?')
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1]);
            }
            if ((a[i - 1] == b[j - 1]) || (a[i - 1] == b[j - 1] + 32) || (a[i - 1] == b[j - 1] - 32))
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1]);
            }
            if (a[i - 1] == '*')
            {
                dp[i][j] = max(dp[i][j], (dp[i - 1][j] || dp[i][j - 1]));
            }
        }
    }
    return dp[lena][lenb];

}

int main()
{
    int m;
    char a[100], b[100];
    while (scanf("%s", &a) != EOF)
    {
        scanf("%s", &b);
        m = match(a, b);
        if (m == 1)
        {
            printf("true\n");
        }
        else {
            printf("false\n");
        }
    }
}