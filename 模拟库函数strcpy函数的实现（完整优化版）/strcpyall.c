#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, const char* src)
{
	assert(dest);//���ԣ���ֹdestΪ��ָ�룬���Ϊ��ָ�룬��Ϊ�٣���ִ��������䡣
	assert(src);//ͬ��
	char* ret = dest;//strcpy��������Ŀ��ռ����ʼ��ַ��retΪ��ʼ��ַ��
	while (*dest++ = *src++)
	{
		;//����++���Ƚ����ã���srcָ����ַ���ֵ��destָ����ַ���ֱ����'\0'Ҳ��ֵ�����Ϊ�٣����ڸ�ֵ��
	}
	return ret;//����Ŀ��ռ���ʼ��ַ��
}
int main()
{
	char arr1[10] = "*********";
	char arr2[10] = "yes";
	printf("%s", my_strcpy(arr1, arr2));//����Ŀ��ռ�ĵ�ַ��������ַ�����
	return 0;
}