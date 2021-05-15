#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;//a先使用后++，先用a=0的值，有0则假，后面的表达式无需判断
	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);//a为++后的值，其他的值不变
	return 0;
}
#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;//a先使用后++，先用a=0的值，有0不一定假，后面的表达式还需判断，但++b为真，后面不用再算，d++不算
	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);//a为++后的值，b为++后的值，其他值不算
	return 0;
//}
#include <stdio.h>
int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;//a先使用后++，a的值为真，不需要算后面的表达式
	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);//a为++后的值，其他值不算
	return 0;
}