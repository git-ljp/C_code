#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello";
	strcpy(arr1, arr2);
	printf("%s", arr1);

}