#include<stdio.h>
#include<math.h>
int main()
{
	
	    //153=1^3+5^3+3^3
	
		int i = 0;
		for (i = 0; i <= 999999; i++)
		{
			int count = 1;//1λ������1�η�
			int num = i;//��ֹ��ͻ������num��i���;
			int sum = 0;
			// ���ж����ֵ�λ��
			while (num/ 10)
			{
				count++;//��λ�����ܽ���ѭ��
				num = num / 10;
			}

			//����ÿһλ�Ĵη���
			num = i;
			while (num)
			{
				sum += pow(num % 10, count);//��λ����n�η�
				num = num / 10;//ֻ���10�õ�����λ����
			}

			//�ж�
			if (sum == i)
				printf("%d ", i);
		}
		return 0;
}

