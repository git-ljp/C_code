#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Find_num(int arr[3][3], int num)
{
	int i = 2;
	int j = 0;
	while (i >= 0 && j < 3)
	{
		if (arr[i][j] < num)
		{
			++j;//j��++��ʹ�ã���˼�����ж�++���j
		}
		if (arr[i][j] > num)
		{
			--i;//iҲ��ͬ���ĵ����ж�--���i;
		}
		if(arr[i][j]==num)
		{
			printf("�ҵ�������%d,�ڵ�%d�е�%d��\n",arr[i][j],i+1,j+1);
			return 1;
		}

	}
	printf("û�ҵ�");
	return 0;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int arr[3][3] = { 
		{1,2,3} ,
		{4,5,6} ,
		{7,8,9} };
	
	 Find_num(arr, num);

	return 0;

}