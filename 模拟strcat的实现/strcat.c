#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	//��Ŀ���ַ�����\0
	while (*dest)
	{
		dest++;
	}
	//�ҵ�\0֮��ʼ׷��Դ�ַ���
	while (*dest++ = *src++)//�Ƚ����ø�ֵȻ��++��
	{
		;
	}
	return ret;//����Ŀ��ռ���ʼ��ַ
}
int main()
{
	char arr1[20] = "hello";
	char arr2[] = "world";
	printf("%s\n", my_strcat(arr1, arr2));//������ʼ��ַ���ܷ����ַ�����
	return 0;

}