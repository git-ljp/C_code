/*����һ��long���͵���ֵ, �����ֵ�Ķ����Ʊ�ʾ�е�1�ĸ��� .
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