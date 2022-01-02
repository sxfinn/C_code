#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//循环双链表
struct DNode
{
	int data;
	struct DNode* next;
	struct DNode* prior;
};
int InitDList(struct DNode** L)
{
	*L = (struct DNode*)malloc(sizeof(struct DNode));
	if (*L == NULL)
		return 0;
	(*L)->next = *L;
	(*L)->prior = *L;
	return 1;
}//判空与判定尾的方法与循环单向链表相同
//在指定节点后方插入新节点
int InsertNextNode(struct DNode* p, struct DNode* s)
{
	s->next = p->next;
	s->next->prior = s;
	s->prior = p;
	p->next = s;
	return 1;
}
//删除p的后继节点
int DeleteNextNode(struct DNode* p, struct DNode* s)
{
	p->next = s->next;
	s->next->prior = p;
	free(s);
	return 1;
}

//循环单链表
struct LNode
{
	int data;
	struct LNode* next;
};
int InitList(struct LNode** L)
{
	*L = (struct LNode*)malloc(sizeof(struct LNode));
	if (*L == NULL)
		return 0;
	(*L)->next = *L;
	return 1;
}
int empty(struct LNode* L)
{
	if (L->next == L)
		return 1;
	return 0;
}
int isTail(struct LNode* p , struct LNode*L)
{
	if (p->next == L)
		return 1;
	else
		return 0;
}
//int main()
//{
//	int a = 3;
//	a = 10;
//	a = 020;
//	a = 30;
//	printf("%d", a);
//	return 0;
//}