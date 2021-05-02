//非递归实现
//#include<stdio.h>
//int main()
//{
//	char arr[] = "hello";
//	printf("%d", strlen("hello"));
//	return 0;
//}
//递归实现
#include<stdio.h>
int my_strlen(char* str)
{
	//不创建临时变量
	/*if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}*/
	//创建临时变量count
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;

}
int  main()
{
	char arr[] = "hello";
	int ret = my_strlen(&arr);
	printf("%d", ret);
	return 0;


}