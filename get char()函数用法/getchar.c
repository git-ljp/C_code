#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char password[20] = { 0 };
	printf("���������룺");
	scanf("%s", password);
	printf("��ȷ�����룺Y/N\n");
	int tmp = 0;
	while ((tmp = getchar()) != '\n')//һ��getcharֻ�ܶ�ȡһ���ַ���������������ַ�����Ҫʹ����������ȷ��Ҫ
		                             //ʹ��ѭ�����������Ķ����ַ�
	{
		;//��û�ж�ȡ��\nʱ��ǰ������ݶ�����

	}
	
	int ch = getchar();
	if (ch == 'Y')
		printf("ȷ�ϳɹ�");
	else

		printf("ȷ��ʧ��");
	return 0;
}