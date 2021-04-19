//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf_s("%d", &n);
//    while (scanf_s("%d", &n)!=EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n - 1 - i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//
//    }
//    return 0;
//}
#include<stdio.h>
int main()
{
    int n = 0;
    int arr[50] = { 0 };
    int m = 0;
    scanf_s("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &arr[i]);
    }
    //插入
    scanf_s("%d", &m);

    for (i = n - 1; i >= 0; i--)
    {
        if (arr[i] > m)        //如果一开始找的比m,就把大的往后挪
        {
            arr[i + 1] = arr[i];
        }
        else
        {
            arr[i + 1] = m;//如果一开始找的比m小，就把m插入那个数之后
            break;
        }
    }
    //打印新数列
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}