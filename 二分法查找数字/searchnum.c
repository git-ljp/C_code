#include<stdio.h>//���ַ�������
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 0;
	scanf_s("%d", &k);//����Ҫ���ҵ�����
	int i = 0;
	int left = 0;//������Ԫ���±�
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	int right = sz - 1;//�������Ԫ���±�
	while (left <= right)
	{
		int mid = (left + right) / 2;//�м�Ԫ���±�
		if (arr[mid] < k)//Ҫ�ҵ������м�Ԫ�ص��ұ�
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)//Ҫ�ҵ������м�Ԫ�ص����
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ�����");
	}
	return 0;


}
