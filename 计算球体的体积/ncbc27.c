#include<stdio.h>
# define �� 3.1415926
int main()
{
    double r = 0;
    scanf("%lf", &r);
    double V = (4.0 / 3.0) * �� * (r * r * r);
    printf("%.3lf", V);
    return  0;

}