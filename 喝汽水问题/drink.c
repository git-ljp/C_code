#include<stdio.h>
int main()
{
	int count = 0;//������ˮ����
	int blank = 0;//��ƿ����
	int money = 0;//Ǯ
	scanf_s("%d", &money);
	if (money <= 0)
		count = 0;
	else
		count = (money * 2) - 1;//ͨ�����ɣ������ǵȲ�����
	

	printf("%d\n", count);
	return 0;

}
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf_s("%d", &money);
//
//	//����1
//	total = money;
//	empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//
//	return 0;
//}
