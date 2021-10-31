#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<malloc.h>
#define ERROR 0
#define OK 1

#define INIT_SIZE 5     /*初始分配的顺序表长度*/
#define INCREM 5        /*溢出时，顺序表长度的增量*/
typedef  int ElemType;  /*定义表元素的类型*/
typedef struct Sqlist {
    ElemType* slist;      /*存储空间的基地址*/
    int length;           /*顺序表的当前长度*/
    int listsize;         /*当前分配的存储空间长度*/
}Sqlist;

int InitList_sq(Sqlist* L); /*     初始化顺序表   */
int CreateList_sq(Sqlist* L, int n); /*   将表置空   */
int ListInsert_sq(Sqlist* L, int i, ElemType e);/*    在表中i的位置插入元素e  */
int PrintList_sq(Sqlist* L);  /*输出顺序表的元素*/
int ListDelete_sq(Sqlist* L, int i); /*删除第i个元素*/
int ListLocate(Sqlist* L, ElemType e); /*查找值为e的元素*/
//初始化顺序表
int InitList_sq(Sqlist* L) {
    L->slist = (ElemType*)malloc(INIT_SIZE * sizeof(ElemType));
    if (!L->slist) return ERROR;
    L->length = 0;
    L->listsize = INIT_SIZE;
    return OK;
}/*InitList*/
//初始化
int CreateList_sq(Sqlist* L, int n) {
    ElemType e;
    int i;
    for (i = 0; i < n; i++) {
        printf("input data %d", i + 1);
        scanf("%d", &e);
        if (!ListInsert_sq(L, i + 1, e))
            return ERROR;
    }
    return OK;
}/*CreateList*/

/*输出顺序表中的元素*/
int PrintList_sq(Sqlist* L) {
    int i;
    for (i = 1; i <= L->length; i++)
        printf("%5d", L->slist[i - 1]);
    return OK;
}/*PrintList*/
//在顺序表中插入元素
int ListInsert_sq(Sqlist* L, int i, ElemType e) {
    int k;
    if (i<1 || i>L->length + 1)
        return ERROR;
    if (L->length >= L->listsize) {
        L->slist = (ElemType*)realloc(L->slist,(INIT_SIZE + INCREM) * sizeof(ElemType));
        if (!L->slist)
            return ERROR;
        L->listsize += INCREM;
    }
    for (k = L->length - 1; k >= i - 1; k--) {
        L->slist[k + 1] = L->slist[k];
    }
    L->slist[i - 1] = e;
    L->length++;
    return OK;
}/*ListInsert*/

/*在顺序表中删除第i个元素*/
int ListDelete_sq(Sqlist* L, int i) {
    if (i<1 || i>L->length)
        return ERROR;
    if (L->length <= 0)
        return ERROR;
    for (int j = i; j < L->length; j++)
        L->slist[j - 1] = L->slist[j];
    L->length--;
    return OK;

}
/*在顺序表中查找指定值元素，返回其序号*/
int ListLocate(Sqlist* L, ElemType e) {
    int length = L->length;
    for (int i = 0; i < length; i++)
        if (L->slist[i] == e)
            return i;
    return ERROR;

}

int main() {
    Sqlist sl;
    int n, m, k;
    printf("please input n:");  /*输入顺序表的元素个数*/
    scanf("%d", &n);
    if (n > 0) {
        printf("\n1-Create Sqlist:\n");
        InitList_sq(&sl);
        CreateList_sq(&sl, n);
        printf("\n2-Print Sqlist:\n");
        PrintList_sq(&sl);
        printf("\nplease input insert location and data:(location,data)\n");
        scanf("%d,%d", &m, &k);
        ListInsert_sq(&sl, m, k);
        printf("\n3-Print Sqlist:\n");
        PrintList_sq(&sl);
        printf("\n");
    }
    else
        printf("ERROR");
    return 0;
}
//查找函数
int ListLocate(Sqlist* L, ElemType e) {
    int i = 0;
    for (i = 0;  i < L->length; i++)
    {
        if (L->slist[i] == e)
            return i+1;
    }
    return 0;
}
//增加表长
int ListAdd(Sqlist* L)
{
    L->slist = (ElemType*)realloc(L->slist,(L->listsize + INCREM) * sizeof(ElemType));
    L->listsize += INCREM;
    return OK;
}
//插入函数
int  ListInsert(Sqlist* L, int i, ElemType e)
{
    if (i<1 || i>L->length)
        return ERROR;
    if (L->length >= L->listsize)
        ListAdd(L);
    int j = 0;
    for (j=L->length-1;j>=i-1;j--)
    {
        L->slist[j+1] = L->slist[j];
    }
    L->slist[i - 1] = e;
    L->length++;
    return OK;
}
//删除函数
int ListDelete(Sqlist * L, int i)
{
    if (i<1 || i>L->length)
        return ERROR;
    int j = 0;
    for (j = i; j < L->length;j++)
    {
        L->slist[j - 1] = L->slist[j];
    }
    L->length--;
    return OK;
}
//int ListDelete_sq(Sqlist* L, int i)
//{
//    if (i<1 || i>L->length)
//        return ERROR;
//    if (L->length <= 0)
//        return ERROR;
//    for (int j = i; j < L->length; j++)
//        L->slist[j - 1] = L->slist[j];
//    L->length--;
//    return OK;
//
//}