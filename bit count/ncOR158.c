/*输入一个long类型的数值, 求该数值的二进制表示中的1的个数 .
*/
#include <stdio.h>
int main()
{
    long a;
    int c = 0;
    scanf("%ld", &a);
    for (int i = 0; i < 64; ++i) {
        if ((a >> i) & 1) {
            c++;
        }
    }
    printf("%d\n", c);
    return 0;
}