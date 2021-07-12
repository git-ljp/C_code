#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
struct clerk
{
    int num;
    char name[20];
    int jbgz;
    int zwgz;
    int jt;
    int yb;
    int gjj;
    int total;
}em[100];
void menu();          //�˵�����
void input();         //¼��
void save();          //�����ļ�
void display();       //��ʾְ����Ϣ 
void del();           //ɾ�� 
void search();        //��ѯ
void search_num();    //��ְ���Ų�ѯ 
void search_name();   //��������ѯ 
void modify();        //�޸� 
void sta();           //ͳ�� 
void start();         //��ʼ����
int main()//������
{
    system("color f0");
    int n, button;
    char a;
    start();
    getchar();
    menu();
    do
    {
        printf("                                            ����ѡ��(1--6):");
        scanf("%d", &n);
        if (n >= 1 && n <= 6)
        {
            button = 1;
            break;
        }
        else
        {
            button = 0;
            printf("����������,������ѡ��!");
        }
    }     	while (button == 0);
    while (button == 1)
    {
        switch (n)
        {
        case 1: input(); break;
        case 2: display(); break;
        case 3: search(); break;
        case 4:del(); break;
        case 5:modify(); break;
        case 6:sta(); break;
        default:break;
        }
        getchar();
        printf("\n");
        printf("��Enter������\n");
        getchar();
        system("cls");  //����
        menu(); //���ò˵�����
        printf("                                            ����ѡ��(1--6):");
        scanf("%d", &n);
        printf("\n");

    }
    return 0;
}

void start() //��ʼ����
{
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t***********************************\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t*                                 *\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t*      ��ӭ���빤�ʹ���ϵͳ!      *\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t*                                 *\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t***********************************\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t�밴�س�������>>>\t\t\t\t\t\t\n");


    

}

void menu() //�˵�����
{
    system("cls");
    printf("\n\t\t\t\t\t\t\t>>>>>�˵�<<<<<\n\n\n\n");
    printf("\t\t\t\t\t\t\t>>>>> 1  ���� \n\n");
    printf("\t\t\t\t\t\t\t>>>>> 2  ��ʾ \n\n");
    printf("\t\t\t\t\t\t\t>>>>> 3  ���� \n\n");
    printf("\t\t\t\t\t\t\t>>>>> 4  ɾ�� \n\n");
    printf("\t\t\t\t\t\t\t>>>>> 5  �޸� \n\n");
    printf("\t\t\t\t\t\t\t>>>>> 6  ͳ�� \n\n");
    printf("\n\n\n\t\t\t                                ������������ \n\n\n");
    system("pause");
}
void input()   //¼��
{
    int i, m;
    system("cls");
    printf("ְ������(1--100):\n");
    scanf("%d", &m);

    for (i = 0; i < m; i++)
    {
        printf("������ְ����: ");
        scanf("%d", &em[i].num);

        printf("����������:  ");
        scanf("%s", &em[i].name);
        getchar();

        printf("�������������:  ");
        scanf("%d", &em[i].jbgz);

        printf("������ְ����:  ");
        scanf("%d", &em[i].zwgz);

        printf("���������:  ");
        scanf("%d", &em[i].jt);

        printf("������ҽ�Ʊ���:  ");
        scanf("%d", &em[i].yb);

        printf("�����빫����:  ");
        scanf("%d", &em[i].gjj);

        em[i].total = ((em[i].jbgz) + (em[i].zwgz) + (em[i].jt) - (em[i].yb) - (em[i].gjj));//�����ܹ���
        printf("\n");
    }
    printf("\n�������!\n");
    save(m);//����ְ������m
}

void save(int m)  //�����ļ�
{
    int i;
    FILE* fp;   //����fp��ָ�룬����ָ��FILE���͵Ķ���
    if ((fp = fopen("clerk.txt", "wb")) == NULL) //��ְ���б��ļ�Ϊ��
    {
        printf("��ʧ��\n");
        exit(0);
    }

    for (i = 0; i < m; i++) //���ڴ���ְ������Ϣ����������ļ���ȥ
        if (fwrite(&em[i], sizeof(struct clerk), 1, fp) != 1)//д�����ݿ�
            printf("�ļ���д����\n");
    fclose(fp);//�ر��ļ� 
}

int load()
{
    FILE* fp;
    int i = 0;
    if ((fp = fopen("clerk.txt", "rb")) == NULL)
    {
        printf("cannot open file\n");
        exit(0);
    }
    else
    {
        do
        {
            fread(&em[i], sizeof(struct clerk), 1, fp); //��ȡ
            i++;
        }   		while (feof(fp) == 0);  //����ļ�������
    }

    fclose(fp);
    return(i - 1);//��������
}

void display()  //��ʾְ����Ϣ 
{
    int i, sum0 = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
    int m = load();
    system("cls");
    printf("ְ����   ����   ��������  ְ����   ����    ҽ�Ʊ���  ������   �ܹ��� \n");
    for (i = 0; i < m; i++) //mΪ���벿�ֵ�ְ������
    {
        printf("\n  %-6d%-6s  %-8d  %-8d  %-8d  %-8d  %-8d %-8d  ", em[i].num, em[i].name, em[i].jbgz, em[i].zwgz, em[i].jt, em[i].yb, em[i].gjj, em[i].total);
        sum0 += em[i].jbgz;
        sum1 += em[i].zwgz;
        sum2 += em[i].jt;
        sum3 += em[i].yb;
        sum4 += em[i].gjj;
        sum5 += em[i].total;
    }
    printf("\n\nְ��ƽ������Ϊ��   %-8d   %-8d   %-8d   %-8d   %-8d   %-8d\n", sum0 / m, sum1 / m, sum2 / m, sum3 / m, sum4 / m, sum5 / m);
}

void del()   //ɾ��
{
    int m = load();
    int i, j, n, t, button;
    char name[20];
    printf("\n ԭ����ְ����Ϣ:\n");
    display(); //��ʾɾ��ǰ��Ա����Ϣ
    printf("\n");
    printf("������ɾ��:\n");
    scanf("%s", name);
    for (button = 1, i = 0; button && i < m; i++)//��������ȷ��button==1ʱ�������ſ��Ա�����
    {
        if (strcmp(em[i].name, name) == 0)//��Ա���������ҵ�ĳԱ�� ������������
        {
            printf("\n����ԭʼ��¼Ϊ:\n");//��ʾѡ��Ա������Ϣ
            printf("ְ����   ����   ��������  ְ����   ����    ҽ�Ʊ���  ������   �ܹ��� \n");
            printf("\n  %-6d%-6s  %-8d  %-8d  %-8d  %-8d  %-8d %-8d  ", em[i].num, em[i].name, em[i].jbgz, em[i].zwgz, em[i].jt, em[i].yb, em[i].gjj, em[i].total);
            printf("\nȷ��ɾ�� �밴1,��ɾ���밴0\n");
            scanf("%d", &n);
            if (n == 1)
            {
                for (j = i; j < m - 1; j++)//�ӵ�i�ʼ ����һ��ĸ���Ա��ֵ����ǰһ�����Ӧ�ĳ�Ա ��ɶԵ�i���ɾ��
                {
                    strcpy(em[j].name, em[j + 1].name);
                    em[j].num = em[j + 1].num;
                    em[j].jbgz = em[j + 1].jbgz;
                    em[j].zwgz = em[j + 1].zwgz;
                    em[j].jt = em[j + 1].jt;
                    em[j].yb = em[j + 1].yb;
                    em[j].gjj = em[j + 1].gjj;
                    em[j].total = em[j + 1].total;
                }
                button = 0;
            }
        }
    }
    if (!button)//button==0����ɾ�������
        m = m - 1;//��Ա��������һ��
    else
        printf("\n���޴���!\n");
    printf("\n ɾ���������ְ����Ϣ:\n");
    save(m);     //����ɾ�����ְ����Ϣ 
    display();  //��ʾɾ�����ְ����Ϣ 
    printf("\n����ɾ���밴1,����ɾ���밴0\n");
    scanf("%d", &t);
    switch (t)
    {
    case 1:del(); break;
    case 0:break;
    default:break;
    }
}

void search()//��ѯ
{
    int t, button;
    system("cls");

    do
    {
        printf("\n��1 �����Ų�ѯ\n��2 ��������ѯ\n��3 �����˵�\n");
        scanf("%d", &t);
        if (t >= 1 && t <= 3)
        {
            button = 1;
            break;
        }
        else
        {
            button = 0;
            printf("�������");
        }
    } while (button == 1);
    switch (t)//ѡ���ѯ��ʽ
    {
    case 1:printf("�����Ų�ѯ\n"); search_num(); break;
    case 2:printf("��������ѯ\n"); search_name(); break;
    case 3:break;
    default:break;
    }
}

void search_num()//��ְ���Ų�ѯ
{
    int a;
    int i, t;
    int m = load();
    printf("������Ҫ���ҵ�ְ����:\n");
    scanf("%d", &a);
    for (i = 0; i < m; i++)
        if (a == em[i].num)
        {
            printf("ְ����   ����   ��������  ְ����   ����    ҽ�Ʊ���  ������   �ܹ��� \n");
            printf("\n  %-6d%-6s  %-8d  %-8d  %-8d  %-8d  %-8d %-8d  ", em[i].num, em[i].name, em[i].jbgz, em[i].zwgz, em[i].jt, em[i].yb, em[i].gjj, em[i].total);
            break;
        }
    if (i == m)
        printf("\n�Բ���,���޴���\n");
    printf("\n");
    printf("���ز�ѯ�����밴1,������ѯְ�����밴2\n");
    scanf("%d", &t);
    switch (t)
    {
    case 1:search(); break;
    case 2:search_num(); break;
    default:break;
    }
}

void search_name()//��������ѯ 
{
    char name[30];
    int i, t;
    int m = load();
    printf("����������:\n");
    scanf("%s", name);
    for (i = 0; i < m; i++)
        if (strcmp(em[i].name, name) == 0)
        {
            printf("\n���ҵ�,���¼Ϊ:\n");
            printf("ְ����   ����   ��������  ְ����   ����    ҽ�Ʊ���  ������   �ܹ��� \n");
            printf("\n  %-6d%-6s  %-8d  %-8d  %-8d  %-8d  %-8d %-8d  ", em[i].num, em[i].name, em[i].jbgz, em[i].zwgz, em[i].jt, em[i].yb, em[i].gjj, em[i].total);
        }
    if (i == m)
        printf("\n\n");
    printf("\n");
    printf("���ز�ѯ�˵��밴1,������ѯ�����밴2\n");
    scanf("%d", &t);
    switch (t)
    {
    case 1:search(); break;
    case 2:search_name(); break;
    default:break;
    }
}

void modify() //�޸�
{
    int num;
    char name[20];
    int jbgz;
    int zwgz;
    int jt;
    int yb;
    int gjj;
    int b, c, i, n, t, button;
    int m = load();
    system("cls");
    printf("\n ԭ����ְ����Ϣ:\n");
    display();
    printf("\n");
    printf("������Ҫ�޸ĵ�ְ��������:\n");
    scanf("%s", name);
    for (button = 1, i = 0; button && i < m; i++)
    {
        if (strcmp(em[i].name, name) == 0)
        {
            printf("\n����ԭʼ��¼Ϊ:\n");
            printf("ְ����   ����   ��������  ְ����   ����    ҽ�Ʊ���  ������   �ܹ��� \n");
            printf("\n  %-6d%-6s  %-8d  %-8d  %-8d  %-8d  %-8d %-8d  ", em[i].num, em[i].name, em[i].jbgz, em[i].zwgz, em[i].jt, em[i].yb, em[i].gjj, em[i].total);
            printf("\nȷ�� ��1 ; ���޸��밴0\n");
            scanf("%d", &n);
            if (n == 1)
            {
                printf("\n��Ҫ�����޸ĵ�ѡ��\n 1.ְ���� 2.���� 3.�������� 4.ְ���� 5.���� 6.ҽ�Ʊ��� 7.������ 8.�����ϲ�\n");
                printf("��ѡ�����1-8:\n");
                scanf("%d", &c);
                if (c > 8 || c < 1)
                    printf("\nѡ�����,������ѡ��!\n");
            }
            button = 0;
        }
    }
    if (button == 1)
        printf("\n���޴���\n");
    do
    {
        switch (c)      //��Ϊ���ҵ���i��ְ��ʱ,for����i�Լ���1,���������Ӧ�ðѸĺ����Ϣ��ֵ����i-1����
        {
        case 1:printf("ְ���Ÿ�Ϊ: ");
            scanf("%d", &num);
            em[i - 1].num = num;
            break;
        case 2:printf("������Ϊ: ");
            scanf("%s", name);
            strcpy(em[i - 1].name, name);
            break;
        case 3:printf("�������ʸ�Ϊ: ");
            getchar();
            scanf("%d", &jbgz);
            em[i - 1].jbgz = jbgz;
            em[i - 1].total = (em[i - 1].jbgz + em[i - 1].zwgz + em[i - 1].jt - em[i - 1].yb - em[i - 1].gjj);
            break;
        case 4:printf("ְ���ʸ�Ϊ: ");
            scanf("%d", &zwgz);
            em[i - 1].zwgz = zwgz;
            em[i - 1].total = (em[i - 1].jbgz + em[i - 1].zwgz + em[i - 1].jt - em[i - 1].yb - em[i - 1].gjj);
            break;
        case 5:printf("������Ϊ: ");
            scanf("%d", &jt);
            em[i - 1].jt = jt;
            em[i - 1].total = (em[i - 1].jbgz + em[i - 1].zwgz + em[i - 1].jt - em[i - 1].yb - em[i - 1].gjj);
            break;
        case 6:printf("ҽ�Ʊ��ո�Ϊ: ");
            scanf("%d", &yb);
            em[i - 1].yb = yb;
            em[i - 1].total = (em[i - 1].jbgz + em[i - 1].zwgz + em[i - 1].jt - em[i - 1].yb - em[i - 1].gjj);
            break;
        case 7:printf("�������Ϊ: ");
            scanf("%d", &gjj);
            em[i - 1].gjj = gjj;
            em[i - 1].total = (em[i - 1].jbgz + em[i - 1].zwgz + em[i - 1].jt - em[i - 1].yb - em[i - 1].gjj);
            break;
        case 8:modify();
            break;
        }
        printf("\n");
        printf("\n\n ȷ���޸� �밴1 ; �����޸� �밴2:  \n");
        scanf("%d", &b);
    }    	while (b == 2);
    printf("\n�޸ĺ������ְ����Ϣ:\n");
    printf("\n");
    save(m);
    display();
    printf("\n��1 �����޸� ,�����޸��밴0\n");
    scanf("%d", &t);
    switch (t)
    {
    case 1:modify(); break;
    case 0:break;
    default:break;
    }
}

void sta()//ͳ��
{
    system("cls");
    int i;
    int sum0 = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
    int a = 0, b = 0, c = 0;
    int m = load();
    for (i = 0; i < m; i++) //Ϊ���벿�ֵ�ְ������
    {
        sum0 += em[i].jbgz;
        sum1 += em[i].zwgz;
        sum2 += em[i].jt;
        sum3 += em[i].yb;
        sum4 += em[i].gjj;
        sum5 += em[i].total;
        if ((em[i].total) <= 2000 && em[i].total >= 1000)
        {
            a++;
        }
        if (em[i].total > 2000 && em[i].total <= 3000)
        {
            b++;
        }
        if (em[i].total > 3000)
        {
            c++;
        }
    }
    printf("\n\n�����ܶ�Ϊ��%d\n", sum5);
    printf("ƽ������Ϊ��%d\t%d\t%d\t%d\t%d\t%d\n", sum0 / m, sum1 / m, sum2 / m, sum3 / m, sum4 / m, sum5 / m);
    printf("\n�������ʡ�ְ���ʡ�����֮��\n");
    printf("��1000-2000Բ��Ա��ռ��Ա����%d%%\n", a * 100 / m);
    printf("��2000-3000Բ��Ա��ռ��Ա����%d%%\n", b * 100 / m);
    printf("��3000Բ���ϵ�Ա��ռ��Ա����%d%%\n", c * 100 / m);
    printf("\n\n��Enter������");
    system("pause");
    getchar();
    menu();
   
}