#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int ip_to_num(int ip_addr, int ip_cnt)
{
    int i = 0;
    int cout = 0;
    int bin[8] = { 0 };

    while (ip_addr)
    {
        bin[i++] = ip_addr % 2;
        ip_addr /= 2;
    }

    for (int j = 7; j >= 0; j--)
    {
        ip_cnt--;
        cout += bin[j] * pow(2, ip_cnt);
    }
    return cout;
}

void num_to_ip(int ip_num)
{
    int tmp = 0;
    int ip_cnt = 3;

    for (int i = 0; i < 3; i++)
    {
        tmp = (ip_num >> ip_cnt * 8) & 0xff;
        printf("%d.", tmp);
        ip_cnt--;
    }
    tmp = (ip_num >> ip_cnt * 8) & 0xff;
    printf("%d\n", tmp);
}

int main()
{
    char str[20] = { "\0" };

    while (fgets(str, sizeof(str), stdin))
    {
        char tmp_str[5] = { "\0" };  //临时存放每节ip地址
        int len = strlen(str);
        int ip_num = 0;
        int tmp_len = 0;
        int ip_cnt = 4;

        if ((str[1] == '.') || (str[2] == '.') || (str[3] == '.'))  //判断是ip地址还是整数
        {
            //IP地址
            for (int i = 0; i < len; i++)
            {
                if (str[i] != '.')
                {
                    tmp_str[tmp_len++] = str[i];
                }
                else
                {
                    ip_num += ip_to_num(atoi(tmp_str), ip_cnt * 8);
                    memset(tmp_str, 0, tmp_len);
                    tmp_len = 0;
                    ip_cnt--;
                }
            }
            if (tmp_str != '\0')
            {
                ip_num += ip_to_num(atoi(tmp_str), ip_cnt * 8);
            }
            printf("%u\n", ip_num);
        }
        else
        {
            //整数
            num_to_ip(atoi(str));
        }
    }
    return 0;
}
