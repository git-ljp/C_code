/*����
д��һ�����򣬽���һ��ʮ�����Ƶ������������ֵ��ʮ���Ʊ�ʾ��

����������
����һ��ʮ�����Ƶ���ֵ�ַ�����ע�⣺һ��������ͬʱ�ж����������ݣ���ο�����https://www.nowcoder.com/discuss/276���������������⡣

���������
�������ֵ��ʮ�����ַ�������ͬ��Ĳ���������\n������*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str[100];
    int i = 0, count, sum;
    while (gets(str))//���ڶ������
    {
        count = strlen(str);//�����ַ����ĳ���
        sum = 0;
        for (i = count - 1; i >= 0; i--)//��ʮ�����Ƹ�λ��ʼ��ÿλ��ת����ʮ����
        {
            if (str[i] >= '0' && str[i] <= '9')//�����ַ���ת��
            {
                sum += (str[i] - 48) * pow(16, count - i - 1);
            }
            else if (str[i] >= 'A' && str[i] <= 'F')//��ĸ�ַ���ת��
            {
                sum += (str[i] - 55) * pow(16, count - i - 1);
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}