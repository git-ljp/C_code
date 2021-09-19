#include<stdio.h>
#include<string.h>

char cmd[6][2][20] = { {"reset"},{"reset","board"},{"board","add"},
                    {"board","delete"},{"reboot","backplane"},{"backplane","abort"}
};
char rep[7][30] = { "reset what","board fault","where to add","no board at all",
                 "impossible","install first","unknown command" };
void print(int index)
{
    printf("%s\n", rep[index]); return;
}
int match(char* c, int a, int b)
{
    int wflag = 1, len = strlen(c);
    for (int i = 0; i < len; i++)if (c[i] != cmd[a][b][i])wflag = 0;
    return wflag;
}
int main() {
    char cin[100];
    while (scanf("%s", cin) != EOF) {
        //         printf("%s",cin);
        int len = strlen(cin); char next = 0;
        if (len > 9)print(6);
        else if (cin[0] == 'r') {
            next = getchar();
            if (match(cin, 0, 0))
            {
                if (next == '\n')print(0);
                else if (next == ' ') {
                    scanf("%s", cin);
                    if (match(cin, 1, 1) && strlen(cin) > 1)print(1);
                    else print(6);
                }
            }
            else if (match(cin, 4, 0)) {
                if (next == ' ') {
                    scanf("%s", cin);
                    if (match(cin, 4, 1) && strlen(cin) > 1)print(4);
                    else print(6);
                }
                else print(6);
            }
            else print(6);
        }
        else if (cin[0] == 'b') {
            next = getchar();
            if (match(cin, 2, 0))
            {
                if (next == ' ') {
                    scanf("%s", cin);
                    if (match(cin, 2, 1) && (!match(cin, 5, 1)))print(2);
                    else if (match(cin, 3, 1))print(3);
                    else print(6);
                }
                else print(6);
            }
            else if (match(cin, 5, 0)) {
                if (next == ' ') {
                    scanf("%s", cin);
                    if (match(cin, 5, 1) && strlen(cin) > 1)print(5);
                    else print(6);
                }
                else print(6);
            }
            else print(6);
        }
        else print(6);
        if (next == '\n')continue;
        while ((next = getchar()) != '\n');

    }
}
