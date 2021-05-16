#include<stdio.h>
#include<assert.h>
int my_strlen(const char* arr)//模拟库函数strlen的实现
{
	int ret = 0;
	assert(arr);//断言，防止arr为空指针
	while (*arr++)//先解引用，在++，当*arr为'\0'时，退出。
	{
		ret++;//字符个数++
	}
	return ret;
}
int main()
{
	char arr[20] = "abcdefg";
	
	printf("字符串长度为：%d\n", my_strlen(arr));
}