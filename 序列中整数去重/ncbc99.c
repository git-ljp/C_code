/*����������
����������У���һ�а���һ��������n��1 �� n �� 1000������ʾ�ڶ������������ֵĸ������ڶ��а���n����������Χ1~5000�����ÿո�ָ���

���������
���Ϊһ�У����������˳�����ȥ��֮������֣��ÿո�ָ�*/
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int arr[1000] = { 0 };
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);

    }
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                int k = 0;
                for (k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;


            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;

}
