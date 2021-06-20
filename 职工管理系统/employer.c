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
void menu();          //菜单界面
void input();         //录入
void save();          //保存文件
void display();       //显示职工信息 
void del();           //删除 
void search();        //查询
void search_num();    //按职工号查询 
void search_name();   //按姓名查询 
void modify();        //修改 
void sta();           //统计 
void start();         //开始界面
int main()//主函数
{
    system("color f0");
    int n, button;
    char a;
    start();
    getchar();
    menu();
    do
    {
        printf("                                            功能选择(1--6):");
        scanf("%d", &n);
        if (n >= 1 && n <= 6)
        {
            button = 1;
            break;
        }
        else
        {
            button = 0;
            printf("您输入有误,请重新选择!");
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
        printf("按Enter键继续\n");
        getchar();
        system("cls");  //清屏
        menu(); //调用菜单函数
        printf("                                            功能选择(1--6):");
        scanf("%d", &n);
        printf("\n");

    }
    return 0;
}

void start() //开始界面
{
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t***********************************\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t*                                 *\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t*      欢迎进入工资管理系统!      *\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t*                                 *\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t***********************************\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t请按回车键继续>>>\t\t\t\t\t\t\n");


    

}

void menu() //菜单界面
{
    system("cls");
    printf("\n\t\t\t\t\t\t\t>>>>>菜单<<<<<\n\n\n\n");
    printf("\t\t\t\t\t\t\t>>>>> 1  输入 \n\n");
    printf("\t\t\t\t\t\t\t>>>>> 2  显示 \n\n");
    printf("\t\t\t\t\t\t\t>>>>> 3  查找 \n\n");
    printf("\t\t\t\t\t\t\t>>>>> 4  删除 \n\n");
    printf("\t\t\t\t\t\t\t>>>>> 5  修改 \n\n");
    printf("\t\t\t\t\t\t\t>>>>> 6  统计 \n\n");
    printf("\n\n\n\t\t\t                                请先输入数据 \n\n\n");
    system("pause");
}
void input()   //录入
{
    int i, m;
    system("cls");
    printf("职工人数(1--100):\n");
    scanf("%d", &m);

    for (i = 0; i < m; i++)
    {
        printf("请输入职工号: ");
        scanf("%d", &em[i].num);

        printf("请输入姓名:  ");
        scanf("%s", &em[i].name);
        getchar();

        printf("请输入基本工资:  ");
        scanf("%d", &em[i].jbgz);

        printf("请输入职务工资:  ");
        scanf("%d", &em[i].zwgz);

        printf("请输入津贴:  ");
        scanf("%d", &em[i].jt);

        printf("请输入医疗保险:  ");
        scanf("%d", &em[i].yb);

        printf("请输入公积金:  ");
        scanf("%d", &em[i].gjj);

        em[i].total = ((em[i].jbgz) + (em[i].zwgz) + (em[i].jt) - (em[i].yb) - (em[i].gjj));//计算总工资
        printf("\n");
    }
    printf("\n创建完毕!\n");
    save(m);//保存职工人数m
}

void save(int m)  //保存文件
{
    int i;
    FILE* fp;   //声明fp是指针，用来指向FILE类型的对象
    if ((fp = fopen("clerk.txt", "wb")) == NULL) //打开职工列表文件为空
    {
        printf("打开失败\n");
        exit(0);
    }

    for (i = 0; i < m; i++) //将内存中职工的信息输出到磁盘文件中去
        if (fwrite(&em[i], sizeof(struct clerk), 1, fp) != 1)//写入数据块
            printf("文件读写错误\n");
    fclose(fp);//关闭文件 
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
            fread(&em[i], sizeof(struct clerk), 1, fp); //读取
            i++;
        }   		while (feof(fp) == 0);  //检测文件结束符
    }

    fclose(fp);
    return(i - 1);//返回人数
}

void display()  //显示职工信息 
{
    int i, sum0 = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
    int m = load();
    system("cls");
    printf("职工号   姓名   基本工资  职务工资   津贴    医疗保险  公积金   总工资 \n");
    for (i = 0; i < m; i++) //m为输入部分的职工人数
    {
        printf("\n  %-6d%-6s  %-8d  %-8d  %-8d  %-8d  %-8d %-8d  ", em[i].num, em[i].name, em[i].jbgz, em[i].zwgz, em[i].jt, em[i].yb, em[i].gjj, em[i].total);
        sum0 += em[i].jbgz;
        sum1 += em[i].zwgz;
        sum2 += em[i].jt;
        sum3 += em[i].yb;
        sum4 += em[i].gjj;
        sum5 += em[i].total;
    }
    printf("\n\n职工平均工资为：   %-8d   %-8d   %-8d   %-8d   %-8d   %-8d\n", sum0 / m, sum1 / m, sum2 / m, sum3 / m, sum4 / m, sum5 / m);
}

void del()   //删除
{
    int m = load();
    int i, j, n, t, button;
    char name[20];
    printf("\n 原来的职工信息:\n");
    display(); //显示删除前的员工信息
    printf("\n");
    printf("按姓名删除:\n");
    scanf("%s", name);
    for (button = 1, i = 0; button && i < m; i++)//主函数中确定button==1时各函数才可以被调用
    {
        if (strcmp(em[i].name, name) == 0)//按员工姓名查找到某员工 并调出其资料
        {
            printf("\n此人原始记录为:\n");//显示选定员工的信息
            printf("职工号   姓名   基本工资  职务工资   津贴    医疗保险  公积金   总工资 \n");
            printf("\n  %-6d%-6s  %-8d  %-8d  %-8d  %-8d  %-8d %-8d  ", em[i].num, em[i].name, em[i].jbgz, em[i].zwgz, em[i].jt, em[i].yb, em[i].gjj, em[i].total);
            printf("\n确定删除 请按1,不删除请按0\n");
            scanf("%d", &n);
            if (n == 1)
            {
                for (j = i; j < m - 1; j++)//从第i项开始 将后一项的各成员的值赋给前一项各对应的成员 完成对第i项的删除
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
    if (!button)//button==0表明删除已完成
        m = m - 1;//总员工数减少一人
    else
        printf("\n查无此人!\n");
    printf("\n 删除后的所有职工信息:\n");
    save(m);     //保存删除后的职工信息 
    display();  //显示删除后的职工信息 
    printf("\n继续删除请按1,不再删除请按0\n");
    scanf("%d", &t);
    switch (t)
    {
    case 1:del(); break;
    case 0:break;
    default:break;
    }
}

void search()//查询
{
    int t, button;
    system("cls");

    do
    {
        printf("\n按1 按工号查询\n按2 按姓名查询\n按3 回主菜单\n");
        scanf("%d", &t);
        if (t >= 1 && t <= 3)
        {
            button = 1;
            break;
        }
        else
        {
            button = 0;
            printf("输入错误");
        }
    } while (button == 1);
    switch (t)//选择查询方式
    {
    case 1:printf("按工号查询\n"); search_num(); break;
    case 2:printf("按姓名查询\n"); search_name(); break;
    case 3:break;
    default:break;
    }
}

void search_num()//按职工号查询
{
    int a;
    int i, t;
    int m = load();
    printf("请输入要查找的职工号:\n");
    scanf("%d", &a);
    for (i = 0; i < m; i++)
        if (a == em[i].num)
        {
            printf("职工号   姓名   基本工资  职务工资   津贴    医疗保险  公积金   总工资 \n");
            printf("\n  %-6d%-6s  %-8d  %-8d  %-8d  %-8d  %-8d %-8d  ", em[i].num, em[i].name, em[i].jbgz, em[i].zwgz, em[i].jt, em[i].yb, em[i].gjj, em[i].total);
            break;
        }
    if (i == m)
        printf("\n对不起,查无此人\n");
    printf("\n");
    printf("返回查询函数请按1,继续查询职工号请按2\n");
    scanf("%d", &t);
    switch (t)
    {
    case 1:search(); break;
    case 2:search_num(); break;
    default:break;
    }
}

void search_name()//按姓名查询 
{
    char name[30];
    int i, t;
    int m = load();
    printf("请输入姓名:\n");
    scanf("%s", name);
    for (i = 0; i < m; i++)
        if (strcmp(em[i].name, name) == 0)
        {
            printf("\n已找到,其记录为:\n");
            printf("职工号   姓名   基本工资  职务工资   津贴    医疗保险  公积金   总工资 \n");
            printf("\n  %-6d%-6s  %-8d  %-8d  %-8d  %-8d  %-8d %-8d  ", em[i].num, em[i].name, em[i].jbgz, em[i].zwgz, em[i].jt, em[i].yb, em[i].gjj, em[i].total);
        }
    if (i == m)
        printf("\n\n");
    printf("\n");
    printf("返回查询菜单请按1,继续查询姓名请按2\n");
    scanf("%d", &t);
    switch (t)
    {
    case 1:search(); break;
    case 2:search_name(); break;
    default:break;
    }
}

void modify() //修改
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
    printf("\n 原来的职工信息:\n");
    display();
    printf("\n");
    printf("请输入要修改的职工的姓名:\n");
    scanf("%s", name);
    for (button = 1, i = 0; button && i < m; i++)
    {
        if (strcmp(em[i].name, name) == 0)
        {
            printf("\n此人原始记录为:\n");
            printf("职工号   姓名   基本工资  职务工资   津贴    医疗保险  公积金   总工资 \n");
            printf("\n  %-6d%-6s  %-8d  %-8d  %-8d  %-8d  %-8d %-8d  ", em[i].num, em[i].name, em[i].jbgz, em[i].zwgz, em[i].jt, em[i].yb, em[i].gjj, em[i].total);
            printf("\n确定 按1 ; 不修改请按0\n");
            scanf("%d", &n);
            if (n == 1)
            {
                printf("\n需要进行修改的选项\n 1.职工号 2.姓名 3.基本工资 4.职务工资 5.津贴 6.医疗保险 7.公积金 8.返回上层\n");
                printf("请选择序号1-8:\n");
                scanf("%d", &c);
                if (c > 8 || c < 1)
                    printf("\n选择错误,请重新选择!\n");
            }
            button = 0;
        }
    }
    if (button == 1)
        printf("\n查无此人\n");
    do
    {
        switch (c)      //因为当找到第i个职工时,for语句后i自加了1,所以下面的应该把改后的信息赋值给第i-1个人
        {
        case 1:printf("职工号改为: ");
            scanf("%d", &num);
            em[i - 1].num = num;
            break;
        case 2:printf("姓名改为: ");
            scanf("%s", name);
            strcpy(em[i - 1].name, name);
            break;
        case 3:printf("基本工资改为: ");
            getchar();
            scanf("%d", &jbgz);
            em[i - 1].jbgz = jbgz;
            em[i - 1].total = (em[i - 1].jbgz + em[i - 1].zwgz + em[i - 1].jt - em[i - 1].yb - em[i - 1].gjj);
            break;
        case 4:printf("职务工资改为: ");
            scanf("%d", &zwgz);
            em[i - 1].zwgz = zwgz;
            em[i - 1].total = (em[i - 1].jbgz + em[i - 1].zwgz + em[i - 1].jt - em[i - 1].yb - em[i - 1].gjj);
            break;
        case 5:printf("津贴改为: ");
            scanf("%d", &jt);
            em[i - 1].jt = jt;
            em[i - 1].total = (em[i - 1].jbgz + em[i - 1].zwgz + em[i - 1].jt - em[i - 1].yb - em[i - 1].gjj);
            break;
        case 6:printf("医疗保险改为: ");
            scanf("%d", &yb);
            em[i - 1].yb = yb;
            em[i - 1].total = (em[i - 1].jbgz + em[i - 1].zwgz + em[i - 1].jt - em[i - 1].yb - em[i - 1].gjj);
            break;
        case 7:printf("公积金改为: ");
            scanf("%d", &gjj);
            em[i - 1].gjj = gjj;
            em[i - 1].total = (em[i - 1].jbgz + em[i - 1].zwgz + em[i - 1].jt - em[i - 1].yb - em[i - 1].gjj);
            break;
        case 8:modify();
            break;
        }
        printf("\n");
        printf("\n\n 确定修改 请按1 ; 重新修改 请按2:  \n");
        scanf("%d", &b);
    }    	while (b == 2);
    printf("\n修改后的所有职工信息:\n");
    printf("\n");
    save(m);
    display();
    printf("\n按1 继续修改 ,不再修改请按0\n");
    scanf("%d", &t);
    switch (t)
    {
    case 1:modify(); break;
    case 0:break;
    default:break;
    }
}

void sta()//统计
{
    system("cls");
    int i;
    int sum0 = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;
    int a = 0, b = 0, c = 0;
    int m = load();
    for (i = 0; i < m; i++) //为输入部分的职工人数
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
    printf("\n\n工资总额为：%d\n", sum5);
    printf("平均工资为：%d\t%d\t%d\t%d\t%d\t%d\n", sum0 / m, sum1 / m, sum2 / m, sum3 / m, sum4 / m, sum5 / m);
    printf("\n基本工资、职务工资、津贴之和\n");
    printf("在1000-2000圆的员工占总员工的%d%%\n", a * 100 / m);
    printf("在2000-3000圆的员工占总员工的%d%%\n", b * 100 / m);
    printf("在3000圆以上的员工占总员工的%d%%\n", c * 100 / m);
    printf("\n\n按Enter键继续");
    system("pause");
    getchar();
    menu();
   
}