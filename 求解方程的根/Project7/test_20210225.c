//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);		//反向输出一个四位数
//	while (n)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//	return 0;
//
//}
//#include<stdio.h>
#include<stdio.h>
#include<math.h>
int main()
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    while (scanf_s("%lf %lf %lf", &a, &b, &c)!=EOF)
    {

        if (a != 0.0)
        {

            double ret = (b * b) - 4 * a * c;

            if (ret == 0.0)
            {

                printf("x1=x2=%.2lf\n", (-b) / (2 * a));
            }

            else if (ret > 0.0)
            {

                printf("x1=%.2lf;x2=%.2lf\n", (-b - sqrt(ret)) / (2 * a), (-b + sqrt(ret)) / (2 * a));
            }

            else
            {

                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n",
                    -b / (2 * a),
                    sqrt(-ret) / (2 * a),
                    -b / (2 * a),
                    sqrt(-ret) / (2 * a));
            }
        }
        else
        {
            printf("Not quadratic equation\n");
        }
    }
    return 0;
}
