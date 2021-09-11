#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int cnt1 = 0;
        int cnt2 = 0;
        int sum = 0;
        int num;
        double result;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &num);
            if (num < 0)
            {
                cnt1++;
            }
            else if (num > 0)
            {
                sum += num;
                cnt2++;
            }
        }
        result = (float)sum / cnt2;
        printf("%d %0.1lf\n", cnt1, result);
    }


    return 0;
}