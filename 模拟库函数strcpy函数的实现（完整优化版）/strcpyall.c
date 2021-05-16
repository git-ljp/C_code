#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	assert(dest);//断言，防止dest为空指针，如果为空指针，则为假，不执行下面语句。
	assert(src);//同上
	char* ret = dest;//strcpy函数返回目标空间的起始地址，ret为起始地址。
	while (*dest++ = *src++)
	{
		;//后置++，先解引用，让src指向的字符赋值给dest指向的字符，直到把'\0'也赋值，结果为假，不在赋值。
	}
	return ret;//返回目标空间起始地址。
}
int main()
{
	char arr1[10] = "*********";
	char arr2[10] = "yes";
	printf("%s", my_strcpy(arr1, arr2));//返回目标空间的地址所代表的字符串。
	return 0;
}