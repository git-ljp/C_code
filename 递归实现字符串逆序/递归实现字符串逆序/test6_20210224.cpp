#include<stdio.h>
	
//int my_strlen(char* str)//�����ַ�������
//{
//	int count = 0;
//	while (*str!= '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void Reverse_string(char arr[])
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;		//��һ�ַ���
//	while (left<right)		//������ʱ����������ѭ��ʹ�������߽���
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//
//}
int my_strlen(char* str)//�����ַ�������
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void Reverse_string(char* arr)
{
	char temp = arr[0];		//��a��һ����������
	
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];		//��f�ŵ���һ��λ��
	arr[len - 1] = '\0';		//������Ϊ����һ�εݹ����ʱ������һ���ַ������һ���ַ����һ���ַ����������ڱ�ʾ��
	if ((my_strlen(arr + 1)) >= 2)		//�����arr+1�����ŵڶ���Ҫ������ַ�������Ϊ�׵�ַ��
	{									//ֻҪ���ȴ���2�Ϳ��Խ�����
		Reverse_string(arr+1);
	}
	arr[len - 1] = temp;		//���еݹ�֮�󽫵�һ��Ԫ�طŵ����


}
int main()
{
	char arr[] = "abcdef";
	Reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}