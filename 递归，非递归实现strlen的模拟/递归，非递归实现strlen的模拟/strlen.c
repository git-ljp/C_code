//�ǵݹ�ʵ��
//#include<stdio.h>
//int main()
//{
//	char arr[] = "hello";
//	printf("%d", strlen("hello"));
//	return 0;
//}
//�ݹ�ʵ��
#include<stdio.h>
int my_strlen(char* str)
{
	//��������ʱ����
	/*if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	else
	{
		return 0;
	}*/
	//������ʱ����count
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