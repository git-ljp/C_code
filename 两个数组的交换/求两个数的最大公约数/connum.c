#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int c = 0;//����
	scanf_s("%d%d", &m, &n);
	//�����
	//int max = 0;
	//if (m > n)//�ж��������еĽϴ�ֵ
	//{
	//	max = n;
	//}
	//else
	//{
	//	max = m;
	//}
	//while (1)
	//{
	//	if (m % max == 0 && n % max == 0)
	//		printf("%d", max);
	//	break;
	//}
	//max--;//���������Լ�����Ϊ�����еĽ�Сֵ��������max--;
	//return 0;


	//շת�����
	while (c = m % n)//��m%n=0ʱ��n�������Լ��
	{
		m = n;
		n = c;

	}
	printf("%d", n);
	return 0;
	//��С������=��m*n)/���Լ��
}
