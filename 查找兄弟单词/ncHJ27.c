//ֻҪ�������ʳ�����ͬ��������ĸ�ֲ���ͬ���ҵ��ʱ���ͬ
//�����ʱ��ͶԵ��ʵ�ÿ����ĸ���м������γ�һ�����ұ�
//���ұ��һ���趨Ϊ���ʳ��ȣ��ڶ��м����Ժ�ֱ��Ӧa��z�ĸ���

#include <stdio.h>
#include <string.h>

typedef struct
{
    int len;        //��ĸ�ĳ���
    char str[100];    //��ĸ��ʲô
    char bro;        //1��ʾ���ֵܣ�0��ʾ����
}WORD;

int main()
{
    int list_len;    //�ֵ䳤��
    int target;        //��k���k
    WORD word;        //Ŀ�굥��
    WORD* list = NULL;        //�ֵ�����
    int loop = 1;        //ѭ�����
    int i, j;
    int count[26];

    while (loop)
    {
        //��ȡ�ֵ��ܳ���
        if (scanf("%d", &list_len) == EOF) { loop = 0; break; }
        //���ճ��ȶ�̬�����ڴ�
        list = malloc(sizeof(WORD) * list_len);
        //�ֵ�¼��
        for (i = 0; i < list_len; i++)
        {
            //�����ַ���
            scanf("%s", list[i].str);
            //��¼��ĸ����
            list[i].len = 0;
            while (list[i].str[list[i].len] != '\0')
                list[i].len++;
            //�ֵܱ�־λ���
            list[i].bro = 0;
        }
        //Ŀ�굥��¼��
        scanf("%s", word.str);
        word.len = 0;
        while (word.str[word.len] != '\0')
            word.len++;
        //Ŀ��λ��¼��
        scanf("%d", &target);

        //���������ֵ䣬��λ�ֵܵ���
        for (i = 0; i < list_len; i++)
        {
            //������ʳ��Ⱥ�Ŀ�굥�����
            if (list[i].len == word.len)
            {
                //��������ַ��ϲ����
                if (strcmp(list[i].str, word.str) != 0)
                {
                    //��ռ�����
                    for (j = 0; j < 26; j++) count[j] = 0;
                    //ͳ���������ʵ���ĸ
                    for (j = 0; j < list[i].len; j++)
                        count[list[i].str[j] - 'a'] ++;
                    for (j = 0; j < word.len; j++)
                        count[word.str[j] - 'a'] --;
                    //�Ƚ��Ƿ��в��죬���û�в�����ȷ��Ϊ�ֵܵ���
                    for (j = 0; j < 26; j++) if (count[j] != 0) break;
                    if (j == 26) list[i].bro = 1;
                }
            }
        }

        //��ӡ�ֵ�
        //for(i=0;i<list_len;i++) printf("%s, %d, %d\n",list[i].str, list[i].len, list[i].bro);

        //�������ֵܵ��ʰ����ֵ�Ҫ����������
        for (i = 0; i < list_len; i++)
        {
            if (list[i].bro == 0) continue;
            for (j = i; j < list_len; j++)
            {
                if (list[j].bro == 0) continue;
                //������߶����ֵܵ��ʣ����ж����С
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

        //��ӡ�ֵ�
        //for(i=0;i<list_len;i++) printf("%s, %d, %d\n",list[i].str, list[i].len, list[i].bro);

        //������ֵܵ����ж��ٸ�
        j = 0;
        for (i = 0; i < list_len; i++)
            if (list[i].bro) j++;
        printf("%d\n", j);

        //�����target��
        j = 0;
        for (i = 0; i < list_len; i++)
        {
            if (list[i].bro) j++;
            if (j == target) break;
        }
        if (i != list_len) printf("%s\n", list[i].str);

        //����ڴ�
        free(list);
    }



}