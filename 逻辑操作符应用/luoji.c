#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;//a��ʹ�ú�++������a=0��ֵ����0��٣�����ı��ʽ�����ж�
	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);//aΪ++���ֵ��������ֵ����
	return 0;
}
#include <stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;//a��ʹ�ú�++������a=0��ֵ����0��һ���٣�����ı��ʽ�����жϣ���++bΪ�棬���治�����㣬d++����
	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);//aΪ++���ֵ��bΪ++���ֵ������ֵ����
	return 0;
//}
#include <stdio.h>
int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;//a��ʹ�ú�++��a��ֵΪ�棬����Ҫ�����ı��ʽ
	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);//aΪ++���ֵ������ֵ����
	return 0;
}