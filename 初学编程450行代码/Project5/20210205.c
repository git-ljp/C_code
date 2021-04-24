//#include<stdio.h>



/*
#include<stdio.h>
/*#include<math.h>
int main()		//求1！...+n!
{
	int i; int n; int ret=1; int sum=0;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
		sum = sum + ret;
	}
	printf("sum=%d", sum);

	

}
int main()		//打印出1000到2000之间的润年
{
	int year; int count=0;
	for (year = 1000; year <= 2000; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d\n", year);
			count++;
		}
	}
		printf("count=%d\n", count);
}

int main()		//求100到200之间的素数
{
	int i=0;
	int count = 0;
	
	for (i = 101; i <= 200; i=i+2)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d\n", i);
		}
			
	}
	printf("\ncount=%d\n", count);
	return 0;
}
int main()		//求两个数的最大公约数
{
	int m ;
	int n ;
	int r ;
	scanf_s("%d %d", &m, &n);
	while (r=m % n)
	{
		
		m = n;
		n=r;

	}
	printf("%d", n);
	return 0;

}
int main()		//求1到100中包含数字9的个数
{
	int i;
	int count = 0;
	for (i = 1; i <= 100; i++) 
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;

	}
	printf("count=%d", count);
}
int main()		//求1+1/2+1/3+...1/100的和

	int i = 0;
	float sum = 0;
	for (i = 1; i <= 100; i++)
	{
		sum += 1.0 / i;
	}
	printf("sum=%f\n", sum);
}
int main()		//求数组中数值的最大值
{
	
	int arr
	int i = 0;
	int max = arr[0];
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	scanf_s("%d\n", &arr);
	for(i=1;i<=sz;i++)
	if (arr[i] > max)
	{
		max = arr[i];


	}
	printf("max=%d", max);

}
int main()		//编写99乘法口诀表
{
	int i = 0;
	
	for (i = 1; i <= 9; i++)
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
        printf("\n");
	}
	return 0;
}
 void Swap(int* pa, int* pb)	//编写一个函数能交换两个数的值	
{
	int temp = 0;
	temp =*pa;
	*pa = *pb;
	*pb= temp;



}
int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);
	Swap(&a,&b);
	printf("a=%d b=%d\n", a, b);



}
inint is_prime(int n)		//编写一个函数求出100到200之间的素数
{
	
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
		{
			break;
		}
	}
	if(j > sqrt(n))
		printf("%d ", n);



}



int main()
{
	int i = 0;
	for (i = 101; i <200; i+=2)
	{
		if (is_prime(i) == 1)
			printf("%d", i);
	}
	return 0;


}
int is_leap_year(y)		//编写一个函数求出1000到2000之间的闰年
{
	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
	
		return 1;
	else
	
	    return 0;

}

int main()
{
	int year;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year) == 1)
			printf("%d ", year);
	}
	return 0;
}
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;			//编写一个函数查找数字

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}

	}
	return -1;
}





int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
		if (ret == -1)
		{
			printf("找不到该数字");
		}
		else
		{
			printf("找到了，下标是%d", ret);
		}
	return 0;

}
int Add(int* p)
{
	(*p)++;

}



int main()
{
	int num = 0;		//输入1234，输出1 2 3 4 ；
	Add(&num);
	printf("num=%d ", num);
	Add(&num);
	printf("num=%d ", num);
	Add(&num);
	printf("num=%d ", num);
	return 0;

}
int print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);


}
int main()
{
	int num;

	scanf_s("%d", &num);
	print(num);
	
	return 0;


}*/

/*#include<stdio.h>
int my_strlen(char* str)
{
	/*int count = 0;         //创建临时变量求字符串长度
	while(*str != '\0')
	{
		count++;
		str++;

	}
	/return count;
	if (*str != '\0')		//不创建临时变量求字符串长度
	{

		return 1 + my_strlen(1 + str);
	}
	return 0;
}

int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	
	printf("len=%d ", len);


}
int Fac(int m)		//编写一个函数求n的阶乘
{
	if (m < 1)
	{
		return 1;
	}
	else
	{
		return  m * Fac(m - 1);
	}

}
int main()
{
	int n;
	int ret = 0;
	scanf_s("%d", &n);
	ret=Fac(n);
	printf("ret=%d ", ret);
	return 0;




}
int Fib(int n)		//编写求第n个斐波那契数
{
	/*if (n <= 2)		//递归法
	{
		return 1;
	}
	else
	{
		return Fib(n - 2) + Fib(n - 1);
	}
	int a = 1;			//迭代法
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;

}
int main()
{
	int n=0;
	
	scanf_s("%d", &n);
	int ret = Fib(n);
	printf("ret=%d ", ret);
	return 0;
	

}
void bubble_sort(int arr[], int sz)  //编写函数冒泡排序数组
{
	int i = 0;
	int temp = 0;
	for (i = 0; i < sz - 1; i++)	//确定排序的趟数
	{
		int j = 0;
		int flag = 1;		//假设这一趟排序的数列已经有序
		
		for (j = 0; j < sz - 1 - i; j++)	//每一趟冒泡排序两两交换的次数
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;	//本趟排序其实不完全有序


			}
		}
		if (flag == 1)
		{
			break;
		}
	}


}
int main()
	{
		int i = 0;
		int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
		int sz = sizeof(arr) / sizeof(arr[0]);
		bubble_sort(arr, sz);
		for (i = 0; i < sz; i++)
		{ 
			printf("%d ", arr[i]);
		}
		return 0;
	}
	*/

//#include<stdio.h>//求100到200的素数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 101; i < 200; i += 2)
//	{
//		
//		for (j = 2; j <= i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//
//			}
//			
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}