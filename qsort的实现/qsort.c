#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct Book
{
	char name[20];
	int number;
	int price;
};
//qsort默认升序排序
int  cmp_int(const void* e1, const void* e2)
{
	return *(int*)e2 - *(int*)e1;
	//默认是e1-e2;
	//当e1-e2>0.就要交换元素位置，变成升序
	//但是原本如果是升序的话，变成降序就要交换e1和e2的位置，变成e2-e1,如果e2-e1>0的话就要交换位置成降序；
}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void print_name(struct Book* b, int sz)//b仅表示首地址,形参需要加上类型，那么*b的类型就是结构体指针
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", b[i].name);//跟打印数组一个道理，注意下标i的引用以及要打印的结构成员
	}
	printf("\n");
}
void print_number(struct Book* b, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", b[i].number);
	}
	printf("\n");
}
void print_price(struct Book *b, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", b[i].price);
	}
	printf("\n");
}


void test1()//排序整型数组
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);


}

int  sort_name(const void* e1, const void* e2)//书名比较函数
{
	return strcmp(((struct Book*)e1)->name, ((struct Book*)e2)->name);
}
int sort_number(const void* e1, const void* e2)//书号比较函数
{
	return ((struct Book*)e1)->number - ((struct Book*)e2)->number;
}
int sort_price(const void* e1, const void* e2)//价格比较函数
{
	return ((struct Book*)e1)->price - ((struct Book*)e2)->price;
}

void test2()
{
	//struct book是类型名相当于int，b是变量名相当于arr
	struct Book b[4] = { {"cyy",167,40},{"gdsx",2,39},{"dxyy",123,41},{"java",234,45} };
	int sz = sizeof(b) / sizeof(b[0]);
	qsort(b, sz, sizeof(b[0]), sort_name);
	print_name(b, sz);
	qsort(b, sz, sizeof b[0], sort_number);
	print_number(b, sz);
	qsort(b, sz, sizeof(b[0]), sort_price);
	print_price(b, sz);


}
int main()
{
	//test1();
	test2();
	return 0;
}