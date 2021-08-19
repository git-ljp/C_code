//只要两个单词长度相同，含有字母分布相同，且单词本身不同
//输入的时候就对单词的每个字母进行计数，形成一个查找表
//查找表第一列设定为单词长度，第二列及其以后分别对应a到z的个数

#include <stdio.h>
#include <string.h>

typedef struct
{
    int len;        //字母的长度
    char str[100];    //字母是什么
    char bro;        //1表示是兄弟，0表示不是
}WORD;

int main()
{
    int list_len;    //字典长度
    int target;        //第k大的k
    WORD word;        //目标单词
    WORD* list = NULL;        //字典数组
    int loop = 1;        //循环许可
    int i, j;
    int count[26];

    while (loop)
    {
        //获取字典总长度
        if (scanf("%d", &list_len) == EOF) { loop = 0; break; }
        //按照长度动态分配内存
        list = malloc(sizeof(WORD) * list_len);
        //字典录入
        for (i = 0; i < list_len; i++)
        {
            //存入字符串
            scanf("%s", list[i].str);
            //记录字母个数
            list[i].len = 0;
            while (list[i].str[list[i].len] != '\0')
                list[i].len++;
            //兄弟标志位清空
            list[i].bro = 0;
        }
        //目标单词录入
        scanf("%s", word.str);
        word.len = 0;
        while (word.str[word.len] != '\0')
            word.len++;
        //目标位置录入
        scanf("%d", &target);

        //遍历整个字典，定位兄弟单词
        for (i = 0; i < list_len; i++)
        {
            //如果单词长度和目标单词相等
            if (list[i].len == word.len)
            {
                //如果两者字符上不相等
                if (strcmp(list[i].str, word.str) != 0)
                {
                    //清空计数器
                    for (j = 0; j < 26; j++) count[j] = 0;
                    //统计两个单词的字母
                    for (j = 0; j < list[i].len; j++)
                        count[list[i].str[j] - 'a'] ++;
                    for (j = 0; j < word.len; j++)
                        count[word.str[j] - 'a'] --;
                    //比较是否有差异，如果没有差异则确定为兄弟单词
                    for (j = 0; j < 26; j++) if (count[j] != 0) break;
                    if (j == 26) list[i].bro = 1;
                }
            }
        }

        //打印字典
        //for(i=0;i<list_len;i++) printf("%s, %d, %d\n",list[i].str, list[i].len, list[i].bro);

        //对所有兄弟单词按照字典要求重新排序
        for (i = 0; i < list_len; i++)
        {
            if (list[i].bro == 0) continue;
            for (j = i; j < list_len; j++)
            {
                if (list[j].bro == 0) continue;
                //如果两者都是兄弟单词，则判断其大小
                if (strcmp(list[i].str, list[j].str) > 0)
                {
                    int k = 0;
                    char temp;
                    while (k < list[i].len || k < list[j].len)
                    {
                        temp = list[i].str[k];
                        list[i].str[k] = list[j].str[k];
                        list[j].str[k] = temp;
                        k++;
                    }
                    temp = list[i].len;
                    list[i].len = list[j].len;
                    list[j].len = temp;
                }
            }
        }

        //打印字典
        //for(i=0;i<list_len;i++) printf("%s, %d, %d\n",list[i].str, list[i].len, list[i].bro);

        //计算出兄弟单词有多少个
        j = 0;
        for (i = 0; i < list_len; i++)
            if (list[i].bro) j++;
        printf("%d\n", j);

        //输出第target个
        j = 0;
        for (i = 0; i < list_len; i++)
        {
            if (list[i].bro) j++;
            if (j == target) break;
        }
        if (i != list_len) printf("%s\n", list[i].str);

        //清空内存
        free(list);
    }



}