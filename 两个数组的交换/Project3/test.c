
//#include<stdio.h>  //���ַ������ȵĺ���
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while ("*end!='\0'")
//	{
//		end++;
//	}
//	return end - start;  //��ַ��ȥ��ַ�������鳤��
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//#include<stdio.h>
//void Init(int arr[], int sz)		//�������ʼ��Ϊ0��
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i]=0;
//	}
//}
//void Print(int arr[],int sz)		//��ӡ���飻
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[],int sz)		//���������ã�
//{
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		
//		int temp = arr[left];		//����ұ߻���
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//	
//
//	
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr,sz);
//	Print(arr,sz);
//	Reverse(arr,sz);
//	Print(arr, sz);
//	return 0;
//
//
//
//
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int arr1[5] = { 2,3,4,5,6 };
//	int arr2[5] = { 7,8,9,1,0 };
//	int temp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//
//		temp = arr1[i];
//		arr1[i] = arr2[i];			//��һ����ʱ����ʵ����������Ľ���
//		arr2[i] = temp;
//		
//	
//	
//		
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//	
//		printf("%d", arr2[i]);
//	}
//	printf("\n");
//	
//}
