#include<stdio.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	int flag = 1;  //���������Ѿ�������
	for (i = 0; i < sz-1; i++)  //ȷ������,Ӧ��ΪԪ�ظ�����һ����Ϊ�����±��0��ʼ������û�е��ںţ�
	{
		//ȷ��Ҫ�����ȽϵĴ�����
		for (j = 0; j < sz - 1 - i; j++)  //ÿ����һ�ˣ������ȽϵĴ�����Ҫ���٣�
		{
			if (arr[j] > arr[j + 1]  )
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0; //����֮����flag=0�������ͱ�ʾ�Ѿ������ˣ�����Ҫ������

			}
		}
		if (flag == 1)
		{
			break;  //flag==1,���ý������˳�ѭ����
		}
	}
}
int main()
{
	
	int arr[10] = {0};  //��ʼ�����飻

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);  //������������
	}
	int sz = sizeof(arr) / sizeof arr[0];  //������Ԫ�ظ����������ں����ڲ��������arr��ʾ���������ַ��
	bubble_sort(arr, sz);  //���鴫������Ԫ�ص�ַ��
	int i = 0;
	for (i = 0; i < sz; i++)
	{ 
		printf("%d ", arr[i]);  //��ӡ���������飻
	}
	return 0;


}