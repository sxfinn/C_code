#define _CRT_SECURE_NO_WARNINGS
#define MaxSize 10
#include<stdio.h>
//静态链表
//普通链表是每个节点在内存中星罗棋布，四散而开，而静态链表是内存中一块连续的内存空间
//存储区 和 索引区分别是数据和下一个节点的下标
//物理上的顺序和逻辑上的顺序有可能不同
//用数组的方式实现的链表方式

typedef struct Node
{
	int data;
	int next;
}SLinkList[MaxSize];
//初始化
int InitList(struct Node a[], int sz)
{
	a[0].next = -1;
	for (int i = 1; i < sz; i++)
	{
		a[i].next = -2;
	}
}
int Insert(SLinkList a,int sz,int e,int i)
{
	int index = 0;
	for (int i = 0; i < sz; i++)
	{
		if (a[i].next == -2)
		{
			a[i].data = e;
		}
	}
	while (index < i)
	{
		index = a[index].next;
	}
	a[index].next = i;
	a[i].next = -1;
	return 1;
}
void test()
{
	SLinkList a;
	InitList(a,sizeof(a)/sizeof(a[0]));
}
//typedef struct Sdu
//{
//	int age;
//	char name[10];
//}a[10];
//typedef int arr[10];
//typedef int(*p)[3];
//int main()
//{
//	
//	p n = NULL;
//	arr c;
//	a b;
//	printf("%d ", sizeof(n));
//	printf("%d %d", sizeof(b), sizeof(c));
//	return 0;
//}
////循环双链表
//struct DNode
//{
//	int data;
//	struct DNode* next;
//	struct DNode* prior;
//};
//int InitDList(struct DNode** L)
//{
//	*L = (struct DNode*)malloc(sizeof(struct DNode));
//	if (*L == NULL)
//		return 0;
//	(*L)->next = *L;
//	(*L)->prior = *L;
//	return 1;
//}//判空与判定尾的方法与循环单向链表相同
////在指定节点后方插入新节点
//int InsertNextNode(struct DNode* p, struct DNode* s)
//{
//	s->next = p->next;
//	s->next->prior = s;
//	s->prior = p;
//	p->next = s;
//	return 1;
//}
////删除p的后继节点
//int DeleteNextNode(struct DNode* p, struct DNode* s)
//{
//	p->next = s->next;
//	s->next->prior = p;
//	free(s);
//	return 1;
//}
//
////循环单链表
//struct LNode
//{
//	int data;
//	struct LNode* next;
//};
//int InitList(struct LNode** L)
//{
//	*L = (struct LNode*)malloc(sizeof(struct LNode));
//	if (*L == NULL)
//		return 0;
//	(*L)->next = *L;
//	return 1;
//}
//int empty(struct LNode* L)
//{
//	if (L->next == L)
//		return 1;
//	return 0;
//}
//int isTail(struct LNode* p , struct LNode*L)
//{
//	if (p->next == L)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int a = 3;
//	a = 10;
//	a = 020;
//	a = 30;
//	printf("%d", a);
//	return 0;
//}