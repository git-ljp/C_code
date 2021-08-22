/*描述
蛇形矩阵是由1开始的自然数依次排列成的一个矩阵上三角形。

例如，当输入5时，应该输出的三角形为：

1 3 6 10 15

2 5 9 14

4 8 13

7 12

11


请注意本题含有多组样例输入。
*/
#include <stdio.h>

int main() {
	int n, i, j;
	//     int a[100][100];
	while (scanf("%d", &n) != EOF) {//多组输入，每次结束一个N值，所有参数清零
		int p = 1;
		for (i = 1; i <= n; i++) {
			printf("%d ", p);
			int q = p;
			int k = i + 1;
			for (j = 1; j <= (n - i); j++) {
				q += k;
				k++;
				printf("%d ", q);
			}
			p += i;
			printf("\n");
		}
		//无关变量清零操作,可以把p值放入循环内赋值
//		p = 1;
	}

	return 0;
}