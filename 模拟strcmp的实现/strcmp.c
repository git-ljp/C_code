#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* s1, const char* s2)
{
	assert(s1 && s2);//两个一起断言
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;//如果等于0那么直接相等，返回0；

		}
		//两个相等就继续比较后面的
		s1++;
		s2++;
	}
	return *s1 - *s2;//*s1比*s2大，就返回大于0的数，*s1比*s2小，就返回小于0的数，相等就返回0；
}
int main()
{
	char* p = "abcdef";
	char* q = "abccefg";
	int ret = my_strcmp(p, q);
	if (ret > 0)
	{
		printf("p>q\n");//返回值大于0代表p指向的字符串大于q指向的字符串；
	}
	else if (ret < 0)
	{
		printf("q<p\n");

	}
	else
	{
		printf("p==q\n");
	}

}