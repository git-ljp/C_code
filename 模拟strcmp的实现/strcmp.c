#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* s1, const char* s2)
{
	assert(s1 && s2);//����һ�����
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;//�������0��ôֱ����ȣ�����0��

		}
		//������Ⱦͼ����ȽϺ����
		s1++;
		s2++;
	}
	return *s1 - *s2;//*s1��*s2�󣬾ͷ��ش���0������*s1��*s2С���ͷ���С��0��������Ⱦͷ���0��
}
int main()
{
	char* p = "abcdef";
	char* q = "abccefg";
	int ret = my_strcmp(p, q);
	if (ret > 0)
	{
		printf("p>q\n");//����ֵ����0����pָ����ַ�������qָ����ַ�����
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