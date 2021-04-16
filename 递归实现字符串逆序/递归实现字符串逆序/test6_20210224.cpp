#include<stdio.h>
	
//int my_strlen(char* str)//计算字符串长度
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
//	int right = my_strlen(arr) - 1;		//第一种方法
//	while (left<right)		//利用临时变量交换，循环使左右两边交换
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//
//}
int my_strlen(char* str)//计算字符串长度
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
	char temp = arr[0];		//将a用一个变量代替
	
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];		//将f放到第一个位置
	arr[len - 1] = '\0';		//这里是为了下一次递归调用时更将下一次字符的最后一个字符与第一的字符交换，便于表示；
	if ((my_strlen(arr + 1)) >= 2)		//这里的arr+1代表着第二次要逆序的字符，传参为首地址；
	{									//只要长度大于2就可以交换；
		Reverse_string(arr+1);
	}
	arr[len - 1] = temp;		//所有递归之后将第一个元素放到最后；


}
int main()
{
	char arr[] = "abcdef";
	Reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}