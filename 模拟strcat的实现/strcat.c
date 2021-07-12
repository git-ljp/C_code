#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	//找目标字符串的\0
	while (*dest)
	{
		dest++;
	}
	//找到\0之后开始追加源字符串
	while (*dest++ = *src++)//先解引用赋值然后++；
	{
		;
	}
	return ret;//返回目标空间起始地址
}
int main()
{
	char arr1[20] = "hello";
	char arr2[] = "world";
	printf("%s\n", my_strcat(arr1, arr2));//返回起始地址就能访问字符串了
	return 0;

}