/* qsort������ͷ�ļ���<stdlib.h>
* �﷨�ṹ��void qort(void* base,size_t num,size_t size,int (*compare)(const void*,const void*))
* void* base��ŵ��Ǵ��������ݵĵ�һ������ĵ�ַ
* size_t numָ���Ǵ���������Ԫ�ظ���������ʱ������sizeof���
* size_t sizeָ����ÿ��Ԫ�ظ������ֽڴ�С
* int ��*compare)(const void*,const void*))ָ���ǱȽ�����Ԫ�صĺ���ָ�룬��űȽϺ����ĵ�ַ
* �����void*��ָ��ȷ����ָ�����ͣ����ڳ���Ա�Լ����ָ������
*/
#include<stdio.h>
void print_arr(int arr[],int sz)//��ӡ����
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
    }
	printf("\n");

}
int cmp_int(const void* e1, const void* e2)//�ȽϺ���
{
	return *(int*)e1 - *(int*)e2;//�ȽϺ��������ڲ�֪��Ҫ�Ƚϵ���ʲô���ͣ����Կ���ǿ��ת��Ϊ�Լ���Ҫת��������
								//qsort�涨�����������0ʱ���ش���0������С��0ʱ����С��0����												
								//���ں����ڲ���ô���������������ô�ѱȽ�Ԫ�صĵ�ַ����e1,e2���ǿ⺯���涨��
}
void Swap(char* buf1,char* buf2,int width)//����������ʱ��������
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
//ģ���qsort����
void my_qsort(void* base,int sz,int width,int(*cmp_int)(const void* e1,const void* e2))
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//base������Ԫ�ص�ַ��ָ��
			// j*width��ʾ���±����˵Ԫ�ظ�������һ��Ԫ�ص��ֽڿ�Ⱦ͵���ָ��Ҫ�����Ĵ�С
			//(char*)base + j * width��(char*)base + (j + 1) * width����Ҫ�Ƚϵ�����Ԫ�صĵ�ַ
			//������Ҫ�Ƚϵ�Ԫ�����Ͷ�䣬������char��ָ��+�ֽڿ�Ⱦͺ�ͨ��
			if (cmp_int((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				//��֪������ʲô���;Ϳ���һ��һ���ֽڽ���������Ҫ���ֽڿ�ȴ���
			}
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	my_qsort(arr,sz,sizeof(arr[0]),cmp_int);//arr������Ԫ�ص�ַ
	print_arr(arr, sz);
}