#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* cp = str1;
	if (*str2 == '\0')
	{
		return (char*)str2;
	}
	while (*cp)
	{
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cp;
		}
		cp++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "abbbcdef";
	char arr2[] = "bbc";
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("没找到\n");
	}
	else
	{
		printf("找到了\n");
	}
	return 0;
}