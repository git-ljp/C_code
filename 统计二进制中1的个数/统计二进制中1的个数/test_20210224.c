#include<stdio.h>
//int Count_bit_one(unsigned int n)		//��һ�ַ���(ģ2��2�ķ�����
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)		//����13��������Ϊ1101��13%2=1��13/2=6,6%2=0,6/2=3,3%2=1,3/2=1,1%2=1
//
//		{
//			count++;	//����count++�Ĵ�������1���ֵĸ���
//		}
//		n = n / 2;		//ȥ���������1�����¸�ֵn;
//	}
//	return count;
//}
//int Count_bit_one(int n)		//�ڶ��ַ�����n����λ�ƣ�֮��λ��1�õ����Ϊ1��++��
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
int Count_bit_one(int n)		//�������㷨������n��n-1��λ��Ĵ���������count�Ĵ�����

{
	int count = 0;
	while (n)
	{
		n=n&( n - 1);
		count++;
	}
	return count;
}
int main()
{
	int n = 0;
	printf("������һ����n��");
	scanf_s("%d",&n);
	int count=Count_bit_one(n);
	printf("%d", count);

	return 0;

}
