//将一句话的单词进行倒置，标点不倒置。比如 I like beijing. 经过函数后变为：beijing. like I
//输入描述：
//每个测试输入包含1个测试用例： I like beijing.输入用例长度不超过100
//输出描述：
//依次输出倒置之后的字符串, 以空格分割
#include<stdio.h>
#include<string.h>
//三步翻转法，先翻转整个字符串，再翻转每个单词
void re_string(char* left, char* right)//用left和right指针接收首地址和末尾地址
{

	while (left < right)//翻转字符串就是交换字符位置，跟递归方法不一样
	{
		int temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;

	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);//如果使用scanf碰到空格就会发生截断
	int len = strlen(arr);
	re_string(arr,arr+len-1);//传字符串首地址和末尾地址
	char* start = arr;//令start为首地址指针
	while (*start)//当*start为0时跳出循环，不再翻转单词
	{
		char* end = start;
		while (*end != ' ' && *end!='\0')//*end为空格时，表示一个单词结束，为'\0'时表示最后一个单词结束
		{
			end++;

		}
		re_string(start, end - 1);//*end等于空格或者\0时，将第一个字母和*end前面一个交换；
		if (*end != '\0')
		{
			start = end + 1;//表示还没到最后一个单词，下一个start就是空格后一个
		}
		else
		{
			start = end;//当*end等于'\0'时，让start等于\0才能退出循环；
		}
	}
	printf("%s\n", arr);



}