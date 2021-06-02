#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct Book
{
	char name[20];
	int number;
	int price;
};
//qsortĬ����������
int  cmp_int(const void* e1, const void* e2)
{
	return *(int*)e2 - *(int*)e1;
	//Ĭ����e1-e2;
	//��e1-e2>0.��Ҫ����Ԫ��λ�ã��������
	//����ԭ�����������Ļ�����ɽ����Ҫ����e1��e2��λ�ã����e2-e1,���e2-e1>0�Ļ���Ҫ����λ�óɽ���
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
void print_name(struct Book* b, int sz)//b����ʾ�׵�ַ,�β���Ҫ�������ͣ���ô*b�����;��ǽṹ��ָ��
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", b[i].name);//����ӡ����һ������ע���±�i�������Լ�Ҫ��ӡ�Ľṹ��Ա
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


void test1()//������������
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);


}

int  sort_name(const void* e1, const void* e2)//�����ȽϺ���
{
	return strcmp(((struct Book*)e1)->name, ((struct Book*)e2)->name);
}
int sort_number(const void* e1, const void* e2)//��űȽϺ���
{
	return ((struct Book*)e1)->number - ((struct Book*)e2)->number;
}
int sort_price(const void* e1, const void* e2)//�۸�ȽϺ���
{
	return ((struct Book*)e1)->price - ((struct Book*)e2)->price;
}

void test2()
{
	//struct book���������൱��int��b�Ǳ������൱��arr
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