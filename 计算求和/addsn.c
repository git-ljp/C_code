#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int ret = 0;
	int tmp = 0;
    scanf("%d%d", &a, &n);
	while (i < n)
	{
		tmp = tmp * 10 + a;
		ret += tmp;
		i++;
	}
	printf("%d\n", ret);

	return 0;
}