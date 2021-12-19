#include <stdio.h>   
#include <malloc.h> 
#include <string.h> 
#include <stdlib.h> 
#pragma warning(disable:4996)
typedef struct score
{
    int score_c;		//C���Գɼ�
    int score_math;		//�ߵ���ѧ
    int score_english;  //��ѧӢ��ɼ�
}Score;
typedef struct Student
{
    char name[100]; 		//����  
    char num[100];  		//ѧ��  
    char sex;			//�Ա� (m����Ů��f��������)  
    int age;				//����  
    Score score;			//�ɼ�  
}stu;
typedef struct LNode
{
    stu data;
    struct LNode* next;
}LinkList;


char nam[100]; 
char nu[100];
char s;
int ag; 
Score sc;

void menu()
{
    printf("\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t ==================================================\n");
    printf("\t\t\t == 0.ϵͳ������˵��=======1.ˢ��ѧ����Ϣ   =======\n");
    printf("\t\t\t ==================================================\n");
    printf("\t\t\t ===2.��ѯѧ����Ϣ ========3.�޸�ѧ����Ϣ  ========\n");
    printf("\t\t\t ==================================================\n");
    printf("\t\t\t ===4.����ѧ����Ϣ=========5.��ѧ��ɾ����Ϣ========\n");
    printf("\t\t\t ==================================================\n");
    printf("\t\t\t ===6.��ʾ��ǰ��Ϣ=========7.���浱ǰѧ����Ϣ======\n");
    printf("\t\t\t ==================================================\n");
    printf("\t\t\t ===============8.�˳�ϵͳ ========================\n");
    printf("\t\t\t ==================================================\n");
    printf("\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

void help()
{
    printf("\n\t\t\t0.��ӭʹ��ϵͳ������\n");
    printf("\n\t\t\t1.���ν���ϵͳ��,����ѡ������ѧ����Ϣ;\n");
    printf("\n\t\t\t2.���ղ˵���ʾ�������ִ���;\n");
    printf("\n\t\t\t3.����ѧ����Ϣ��,�мǱ���;\n");
    printf("\n\t\t\t4.лл����ʹ�ã�\n");
}

void InitList(LinkList** L)//��ʼ��  
{

    (*L) = (LinkList*)malloc(sizeof(LinkList));
    (*L)->next = NULL;
}
void ListInsert(LinkList** L, LinkList* p)//�����µĽڵ�  
{
    LinkList** q = NULL;
    q = L;
    p->next = (*q)->next;
    (*q)->next = p;
}
void addstu(LinkList** L)//�����µ�ѧ��  
{
    printf("������ѧ������Ϣ��\n");
    printf("ѧ�ţ�");
    scanf("%s", nu);
    LinkList* q = (*L)->next;
    while (q != NULL)  //�����ж�ѧ����Ϣ�Ƿ��Ѿ�����
    {
        if (0 == strcmp(q->data.num, nu))
        {
            printf("��ѧ���Ѵ���\n");
            break;
        }
        q = q->next;
    }
    if (q == NULL)
    {
        LinkList* p;
        InitList(&p);
        strcpy(p->data.num, nu);
        printf("����");
        scanf("%s", nam);
        strcpy(p->data.name, nam);

        printf("�Ա𣺣�mΪ�� fΪŮ��");
        while ((s = getchar()) != '\n');
        while ((s = getchar())!='f'&& s != 'm')
        {
            printf("������������������\n");
        }
        p->data.sex = s;
        printf("���䣺");
        scanf("%d", &ag);
        p->data.age = ag;
        printf("C���Գɼ���");
        scanf("%d", &sc.score_c);
        while (sc.score_c < 0 || sc.score_c>100)
        {
            printf("������������������\n");
            scanf("%d", &sc.score_c);
        }
        p->data.score.score_c = sc.score_c;
        printf("�ߵ���ѧ�ɼ���");
        scanf("%d", &sc.score_math);
        while (sc.score_math < 0 || sc.score_math>100)
        {
            printf("������������������\n");
            scanf("%d", &sc.score_math);
        }
        p->data.score.score_math = sc.score_math;
        printf("��ѧӢ��ɼ���");
        scanf("%d", &sc.score_english);
        while (sc.score_english < 0 || sc.score_english>100)
        {
            printf("������������������\n");
            scanf("%d", &sc.score_english);
        }
        p->data.score.score_english = sc.score_english;
        ListInsert(L, p);
    }
}

void deletestu(LinkList* L)//ɾ��ѧ��  
{
    printf("��������Ҫɾ����ѧ����ѧ��:");
    scanf("%s", nu);
    //�ж�  
    LinkList* p, * pre;
    if (L->next == NULL)
    {
        printf("��û��ѧ����Ϣ,������ѧ����Ϣ\n");
        return;
    }
    pre = L;
    p = pre->next;
    int judge = 0;
    while (p)
    {
        if (0 == strcmp(p->data.num, nu))
        {
            judge = 1;
            pre->next = p->next;
            free(p);
            printf("ɾ��ѧ���ɹ�\n");
            break;
        }
        pre = p;
        p = p->next;
    }
    if (judge == 0)
        printf("���ѧ��������\n");
}

void changestu(LinkList* L)//�ı�ѧ����Ϣ  
{
    int judge = 0;
    printf("��������Ҫ�޸�ѧ����ѧ�ţ�\n");
    scanf("%s", nu);
    LinkList* q = L->next;
    while (q != NULL)
    {
        if (0 == strcmp(q->data.num, nu))
        {
            judge = 1;
            printf("��������Ҫ�޸ĵ���Ϣѡ�1.���� 2. �ɼ�(c���ԣ��ߵ���ѧ����ѧӢ��)  3.����   \n");
            int choose;
            scanf("%d", &choose);
            switch (choose)
            {
            case 1:
                printf("��������Ҫ�޸ĵ����֣�");
                scanf("%s", nam);
                printf("�޸ĵ�����Ϊ��%s\n", nam);
                strcpy(q->data.name, nam);
                printf("�޸����ֳɹ���\n");
                break;
            case 2:
                printf("��������Ҫ�޸ĵĳɼ�");
                scanf("%d%d%d", &sc.score_c, &sc.score_math, &sc.score_english);
                printf("�޸ĵ�c�ɼ�Ϊ��%d  �޸ĵĸߵ���ѧ�ɼ�Ϊ��%d  �޸ĵĴ�ѧӢ��ɼ�Ϊ��%d\n", sc.score_c, sc.score_math, sc.score_english);
                q->data.score = sc;
                printf("�޸ĳɼ��ɹ���\n");
                break;
            case 3:
                printf("��������Ҫ�޸ĵ����䣺");
                scanf("%d", &ag);
                printf("�޸ĵ�����Ϊ��%d\n", ag);
                q->data.age = ag;
                printf("�޸�����ɹ���\n");
                break;
            default:
                printf("��������ȷ��ѡ��\n");
                break;
            }
        }
        q = q->next;
    }
    if (judge == 0)
    {
        printf("����������\n");
    }
}
void findstu(LinkList* L)//��ѧ�Ż�����������ѧ�������������Ϣ  
{
    int flag;
    printf("1.��ѧ�Ų�ѯ��\n");
    printf("2.��������ѯ��\n");
    printf("�������ѯ��ʽ��");
    scanf("%d", &flag);
    if (flag == 1) {
        printf("���������ѧ�ţ�");
        scanf("%s", nu);
        //�ж�  
        LinkList* q = L->next;
        while (q != NULL)
        {
            if (strcmp(q->data.num, nu) == 0)
            {
                printf("������%s\n", q->data.name);
                printf("ѧ�ţ�%s\n", q->data.num);
                printf("�Ա�%c\n", q->data.sex);
                printf("���䣺%d\n", q->data.age);
                printf("c���Գɼ���%d\n", q->data.score.score_c);
                printf("�ߵ���ѧ�ɼ���%d\n", q->data.score.score_math);
                printf("��ѧӢ��ɼ���%d\n", q->data.score.score_english);
                break;
            }
            q = q->next;
        }
        if (q == NULL)
            printf("����������\n");
    }
    else {
        printf("���������������");
        scanf("%s", nam);
        LinkList* q = L->next;
        while (q != NULL)
        {
            if (strcmp(q->data.name, nam) == 0)
            {
                printf("������%s\n", q->data.name);
                printf("ѧ�ţ�%s\n", q->data.num);
                printf("�Ա�%c\n", q->data.sex);
                printf("���䣺%d\n", q->data.age);
                printf("c���Գɼ���%d\n", q->data.score.score_c);
                printf("�ߵ���ѧ�ɼ���%d\n", q->data.score.score_math);
                printf("��ѧӢ��ɼ���%d\n", q->data.score.score_english);
                break;
            }
            q = q->next;
        }
        if (q == NULL)
            printf("����������\n");
    }
}
void display(LinkList** L)//���ȫ��ѧ����Ϣ  
{
    LinkList* q = (*L)->next;
    if (q == NULL)
    {
        printf("��û��ѧ����Ϣ��������ѧ����Ϣ\n");
        return;
    }
    while (q)
    {
        printf("������%s\t", q->data.name);
        printf("ѧ�ţ�%s\t", q->data.num);
        printf("�Ա�%c\t", q->data.sex);
        printf("���䣺%d\t", q->data.age);
        printf("c���Գɼ���%d\t", q->data.score.score_c);
        printf("�ߵ���ѧ�ɼ���%d\t", q->data.score.score_math);
        printf("��ѧӢ��ɼ���%d\n", q->data.score.score_english);
        q = q->next;
    }
}
void sort(LinkList* L)//��ѧ���������� ����������Ľ��  
{
    LinkList* q, * p, * r=L ;//= L->next;
    //�ж�  
    if (r == NULL)
    {
        printf("��û��ѧ����Ϣ��������ѧ����Ϣ\n");
        return;
    }
    while (r) //����ѭ���������  
    {
        p = r;
        q = r->next;
        LinkList* tmp;//��������ʱ�ݴ�ڵ�  
        InitList(&tmp);
        while (q)
        {
            if (q->data.num < p->data.num)  //ѧ����С����
            {
                strcpy(tmp->data.num, q->data.num);
                strcpy(tmp->data.name, q->data.name);
                tmp->data.sex = q->data.sex;
                tmp->data.age = q->data.age;
                tmp->data.score = q->data.score;
                strcpy(q->data.num, p->data.num);
                strcpy(q->data.name, p->data.name);
                q->data.sex = p->data.sex;
                q->data.age = p->data.age;
                q->data.score = p->data.score;
                strcpy(p->data.num, tmp->data.num);
                strcpy(p->data.name, tmp->data.name);
                p->data.sex = tmp->data.sex;
                p->data.age = tmp->data.age;
                p->data.score = tmp->data.score;
            }
            q = q->next;
        }
        r = r->next;
    }
    printf("ˢ�º��ѧ����Ϣ�ǣ�\n");
    display(&L);
}
void saveStuDentFile(LinkList** L)//����ѧ����Ϣ���ļ�  
{
    FILE* fp;
    LinkList* p = (*L)->next;
    if ((fp = fopen("student.txt", "w")) == NULL)
    {
        printf("���ܴ򿪴��ļ����밴������˳�\n");
        exit(1);
    }
    while (p)
    {
        fprintf(fp, "%s  %s  %c  %d  %d %d %d \n", p->data.num, p->data.name, p->data.sex, p->data.age, p->data.score.score_c, p->data.score.score_math, p->data.score.score_english);
        p = p->next;
        printf("����ɹ�\n");
    }
    fclose(fp);
}

void readStuDentput(LinkList** L) //����ǰ���ļ����ݶ�ȡ�������ڴ�  
{
    FILE* fp;
    fp = fopen("student.txt", "rb");
    if (fp == NULL)
    {
        printf("�ļ�������\n");
        exit(0);
    }
    int i = 0;
    while (!feof(fp))
    {
        char nu[100];
        char nam[100];
        char s;
        int ag; 
        struct score sc;
        fscanf(fp, " %s %s %c %d %d %d %d", nu, nam, &s, &ag, &sc.score_c, &sc.score_math, &sc.score_english);
        i++;
    }
    fclose(fp);
    FILE* FP;
    FP = fopen("student.txt", "rb");
    if (FP == NULL)
    {
        printf("�޷����ļ�\n");
        exit(0); 
    }
    int b = i - 1;
    int j = 1;
    while (!feof(FP))
    {
        fscanf(FP, "%s %s %c %d %d %d %d", nu, nam, &s, &ag, &sc.score_c, &sc.score_math, &sc.score_english);
        LinkList* n = (LinkList*)malloc(sizeof(LinkList));
        strcpy(n->data.num, nu);
        strcpy(n->data.name, nam);
        n->data.sex = s;
        n->data.age = ag;
        n->data.score = sc;
        ListInsert(L, n);
        n = n->next;
        if (j == b)
            break;
        j++;
    }
    fclose(FP);
}

int main()
{
    LinkList* L;
    InitList(&L);
    readStuDentput(&L);   //����ǰ���ļ����ݶ�ȡ������   
    int choose;
    while (1)
    {
        printf("\n");
        menu();
        printf("����������ѡ��\n");
        scanf("%d", &choose);
        switch (choose)
        {
        case 0://ϵͳ������˵��
            help();
            break;
        case 1://ˢ����Ϣ����ѧ������
            sort(L);
            break;
        case 2: //��ѯѧ����Ϣ
            findstu(L);
            break;
        case 3://�޸�ѧ����Ϣ  
            changestu(L);
            break;
        case 4://����ѧ����Ϣ  
            addstu(&L);
            break;
        case 5://ɾ��ѧ����Ϣ  
            deletestu(L);
            break;
        case 6://�������ѧ������Ϣ  
            display(&L);
            break;
        case 7://����ѧ����Ϣ���ļ�   
            saveStuDentFile(&L);
            break;
        case 8://�˳�  
            printf("ллʹ�ã�");
            exit(0);
        default:
            printf("��������ȷ��ѡ��\n");
            break;
        }
    }
    return 0;
}
