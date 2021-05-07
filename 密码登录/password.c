#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功！\n"); 
			break;
		}
		else
		{
			printf("输入错误，重新输入！\n");
		}
	}

	if (3 == i)
	{
		printf("三次均输入错误，即将退出程序!\n");

	}
	return 0;
}