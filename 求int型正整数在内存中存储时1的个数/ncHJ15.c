/*描述
输入一个int型的正整数，计算出该int型数据在内存中存储时1的个数。

输入描述：
 输入一个整数（int类型）

输出描述：
 这个数转换成2进制后，输出1的个数*/
#include <stdio.h>

int main() {
    int m;
    int cnt = 0;
    scanf("%d", &m);
    while (m) {
        cnt += m & 1;
        m = m >> 1;
    }
    printf("%d", cnt);
    return 0;
}