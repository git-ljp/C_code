#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char arr1[] = "welcom to bit";
	char arr2[] = "#############";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
		//Sleep(300);//Ë¯Ãß
		//system("cls");//Çå¿ÕÆÁÄ»£¬ÈÃ´úÂëÒ»ÐÐÏÔÊ¾

	}
	
	return 0;
}