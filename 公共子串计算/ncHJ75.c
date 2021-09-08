//HJ75 公共子串计算
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[4000];
    char str2[4000];
    int count = 0;
    int max = 0;
    scanf("%s %s", &str1, &str2);
    //printf("%d %d\n",strlen(str1),strlen(str2));
    for (int i = 0; i < strlen(str1); i++)
    {
        for (int j = 0; j < strlen(str2); j++)
        {
            count = 1;
            if (str1[i] == str2[j])
            {
                for (int k = 1; k < strlen(str2); k++)
                {
                    if (str1[i + k] == str2[j + k]
                        && (str1[i + k] != '\0' && str2[j + k] != '\0'))
                        count++;
                    else
                        break;
                }
            }
            if (count > max)
                max = count;
            //printf("%d ",count);
        }
        //printf("%d\n",max);

    }
    printf("%d\n", max);
}