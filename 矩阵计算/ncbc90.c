/*����������
��һ��ΪN M(N: ����������M: ��������,��M,N<=10)����������N��Ϊ������С�
���������
һ�У����д������Ԫ��֮�͡�*/
#include<stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int i = 0;
    int count = 0;
    int num = 0;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            scanf("%d ", &num);

            if (num > 0)
                sum += num;
        }
    }
    printf("%d", sum);
    return 0;


}
