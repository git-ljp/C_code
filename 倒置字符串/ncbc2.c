//��һ�仰�ĵ��ʽ��е��ã���㲻���á����� I like beijing. �����������Ϊ��beijing. like I
//����������
//ÿ�������������1������������ I like beijing.�����������Ȳ�����100
//���������
//�����������֮����ַ���, �Կո�ָ�
#include<stdio.h>
#include<string.h>
//������ת�����ȷ�ת�����ַ������ٷ�תÿ������
void re_string(char* left, char* right)//��left��rightָ������׵�ַ��ĩβ��ַ
{

	while (left < right)//��ת�ַ������ǽ����ַ�λ�ã����ݹ鷽����һ��
	{
		int temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;

	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);//���ʹ��scanf�����ո�ͻᷢ���ض�
	int len = strlen(arr);
	re_string(arr,arr+len-1);//���ַ����׵�ַ��ĩβ��ַ
	char* start = arr;//��startΪ�׵�ַָ��
	while (*start)//��*startΪ0ʱ����ѭ�������ٷ�ת����
	{
		char* end = start;
		while (*end != ' ' && *end!='\0')//*endΪ�ո�ʱ����ʾһ�����ʽ�����Ϊ'\0'ʱ��ʾ���һ�����ʽ���
		{
			end++;

		}
		re_string(start, end - 1);//*end���ڿո����\0ʱ������һ����ĸ��*endǰ��һ��������
		if (*end != '\0')
		{
			start = end + 1;//��ʾ��û�����һ�����ʣ���һ��start���ǿո��һ��
		}
		else
		{
			start = end;//��*end����'\0'ʱ����start����\0�����˳�ѭ����
		}
	}
	printf("%s\n", arr);



}