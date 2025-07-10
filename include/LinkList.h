#ifndef LINKLIST_H 
#define LINKLIST_H // ifndef-define-endif是为了防止.h被重复编译引入，SOMEHEAD_H是自定义的全局唯一标识符
#define ElemType int // 数据类型宏定义 

/*单链表结构体定义*/

// 单链表结构体定义
typedef struct LinkList {
    ElemType data; 
    struct LinkList* next;
} LinkList, * LNode; // 将struct LinkList用LinkList替代；struct LinkList* 用LNode替代 

#endif