#include<stdio.h>
#include<assert.h>
int my_strlen(const char* arr)//ģ��⺯��strlen��ʵ��
{
	int ret = 0;
	assert(arr);//���ԣ���ֹarrΪ��ָ��
	while (*arr++)//�Ƚ����ã���++����*arrΪ'\0'ʱ���˳���
	{
		ret++;//�ַ�����++
	}
	return ret;
}
int main()
{
	char arr[20] = "abcdefg";
	
	printf("�ַ�������Ϊ��%d\n", my_strlen(arr));
}