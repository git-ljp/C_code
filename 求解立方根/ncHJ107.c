#include<stdio.h>
#include<string.h>

int main() {
    double num;
    while (scanf("%lf", &num) != EOF) {
        double a = 0;
        int flag = 0;
        if (num >= 0) {
            flag = 1;
        }
        else {
            flag = -1;
        }
        while (a * a * a < (num * flag)) {
            a = a + 0.04;
        }
        printf("%.1f\n", a * flag);
    }
}