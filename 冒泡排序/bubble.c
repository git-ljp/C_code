#include<stdio.h>
void bubble_sort(int arr[], int sz)  //��д����ð����������
{
	int i = 0;
	int temp = 0;
	for (i = 0; i < sz - 1; i++)	//ȷ�����������
	{
		int j = 0;
		int flag = 1;		//������һ������������Ѿ�����

		for (j = 0; j < sz - 1 - i; j++)	//ÿһ��ð���������������Ĵ���
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;	//����������ʵ����ȫ����


			}
		}
		if (flag == 1)  //����������
		{
			break;
		}
	}


}
int main()
{
	int i = 0;
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);  //���������С��
	bubble_sort(arr, sz);                   //�����arrָ������Ԫ�ص�ַ��
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}