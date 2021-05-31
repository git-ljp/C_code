/* qsort函数，头文件，<stdlib.h>
* 语法结构：void qort(void* base,size_t num,size_t size,int (*compare)(const void*,const void*))
* void* base存放的是待排序数据的第一个对象的地址
* size_t num指的是待排序对象的元素个数，传参时可以用sizeof求得
* size_t size指的是每个元素个数的字节大小
* int （*compare)(const void*,const void*))指的是比较两个元素的函数指针，存放比较函数的地址
* 这里的void*是指不确定的指针类型，便于程序员自己设计指针类型
*/
#include<stdio.h>
void print_arr(int arr[],int sz)//打印函数
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
    }
	printf("\n");

}
int cmp_int(const void* e1, const void* e2)//比较函数
{
	return *(int*)e1 - *(int*)e2;//比较函数，由于不知道要比较的是什么类型，所以可以强制转换为自己需要转换的类型
								//qsort规定，当结果大于0时返回大于0的数，小于0时返回小于0的数												
								//至于函数内部怎么根据这个来排序，怎么把比较元素的地址传给e1,e2的是库函数规定的
}
void Swap(char* buf1,char* buf2,int width)//当满足条件时交换函数
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp =* buf1;
		*buf1 =* buf2;
		*buf2 = tmp;
		buf1++;
		buf2--;
	}
}
//模拟的qsort函数
void my_qsort(void* base,int sz,int width,int(*cmp_int)(const void* e1,const void* e2))
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//base接收首元素地址的指针
			// j*width表示用下标或者说元素个数乘以一个元素的字节宽度就等于指针要跳过的大小
			//(char*)base + j * width和(char*)base + (j + 1) * width代表要比较的两个元素的地址
			//由于需要比较的元素类型多变，所以用char型指针+字节宽度就很通用
			if (cmp_int((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				//不知道交换什么类型就可以一个一个字节交换，所以要把字节宽度传参
			}
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	my_qsort(arr,sz,sizeof(arr[0]),cmp_int);//arr代表首元素地址
	print_arr(arr, sz);
}