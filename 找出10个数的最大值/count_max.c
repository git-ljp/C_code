#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int max = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);//����ʮ����
	}
	max = arr[0];//�����ֵΪ��Ԫ��
	for (j = 0; j < 10; j++)
	{
		if (max < arr[j])
		{
			max = arr[j];//������ֵ
		}
	}
	printf("���ֵ�ǣ�%d", max);
	return 0;


}