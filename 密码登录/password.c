#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ���\n"); 
			break;
		}
		else
		{
			printf("��������������룡\n");
		}
	}

	if (3 == i)
	{
		printf("���ξ�������󣬼����˳�����!\n");

	}
	return 0;
}