#include<stdio.h>
int Get_diff_bit(int m, int n)
{
	int count = 0;
	int temp = m ^ n;			//���ð�λ���ԭ����ͬΪ0����ͬΪ1������ֻ��������֮��Ķ���������1�ĸ������У�
	while (temp)
	{
		temp = temp & (temp - 1);		//ÿ�ΰ�λ��֮��������һ��1
		count++;	//��λ�뼸�μӼ���	
	}
	return count;
}
int main()
{
	int m = 0;
	int n = 0;
	printf("������������m��n:");
	scanf_s("%d%d", &m, &n);
	int count = Get_diff_bit(m, n);
	printf("count=%d\n", count);

	return 0;
}