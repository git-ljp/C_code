#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char password[20] = { 0 };
	printf("请输入密码：");
	scanf("%s", password);
	printf("请确认密码：Y/N\n");
	int tmp = 0;
	while ((tmp = getchar()) != '\n')//一个getchar只能读取一个字符，但是输入的是字符串，要使密码输入正确就要
		                             //使用循环清理缓冲区的多余字符
	{
		;//当没有读取到\n时，前面的内容都扔了

	}
	
	int ch = getchar();
	if (ch == 'Y')
		printf("确认成功");
	else

		printf("确认失败");
	return 0;
}