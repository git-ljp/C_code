#include<stdio.h>
int main()		//��1��100�а�������9�ĸ���
{
	int i;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)//�����λΪ9����λ��
			count++;
		if (i / 10 == 9)
			count++;//����ʮλΪ9�ĸ���


	}
	printf("count=%d", count);
	return 0;
}