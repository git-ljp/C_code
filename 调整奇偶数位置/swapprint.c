#include<stdio.h>
void Print_swap(int*arr,int sz)
{
	int i = 0;
	int* start = arr;//�׵�ַָ��
	int* end = arr + sz-1;//ĩ��ַָ��
	while (start < end)
	{
		if ((*start) % 2 == 1)
		{
			start++;//����һ��Ԫ�������������׵�ַָ��++��
		}
		else if ((*end) % 2 == 0)
		{
			end--;//���һ��Ԫ����ż������ĩ��ַָ��--��
		}
		else//���(*start)%2==0 && (*end)%2==1 �ͽ�����ʹ��������ǰ��ż���ں�
		{
			int temp = *start;
			*start = *end;
			*end = temp;
		}
		
	}
	//����֮���ӡ����
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("δ����ǰ��\n");
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("������\n");
	Print_swap(arr, sz);
	return 0;
}