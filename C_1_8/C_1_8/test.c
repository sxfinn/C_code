#define _CRT_SECURE_NO_WARNINGS 1
#define  MAXSIZE 10
#include<stdio.h>
#include<stdbool.h>

int main()
{
	int a = 1;
	int b = 2;
	return 0;
}

//char* removeOuterParentheses(char* s)
//{
//	int len = strlen(s);
//	int cnt = 0;
//	char* ret = (char*)malloc(sizeof(char) * 100000);
//	int p = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (s[i] == '(')
//		{
//			if (cnt > 0)
//			{
//				ret[p++] = '(';
//			}
//			cnt++;
//		}
//		else
//		{
//			if (cnt > 1)
//			{
//				ret[p++] = ')';
//			}
//			cnt--;
//		}
//	}
//	ret[p] = 0;
//	return ret;
//}
//
//bool isValid(char* s)
//{
//	char* p = (int*)malloc(sizeof(int) * 10000);
//	int sz = 0;
//	int len = strlen(s);
//	for (int i = 0; i < len; i++)
//	{
//		if (s[i] == '{' || s[i] == '(' || s[i] == '[')
//		{
//			p[sz++] = s[i];
//		}
//		else
//		{
//			if (sz == 0)
//				return 0;
//			else if (p[sz - 1] == '[' && s[i] != ']')
//				return 0;
//			else if (p[sz - 1] == '(' && s[i] != ')')
//				return 0;
//			else if (p[sz - 1] == '{' && s[i] != '}')
//				return 0;
//			sz--;
//		}
//	}
//	return sz == 0;
//}
////链表队列
//
//typedef struct ListNode
//{
//	int data;
//	struct ListNode* next;
//}ListNode;
//typedef struct ListQenue
//{
//	ListNode* front;
//	ListNode* rear;
//}ListQenue;
////链表队列的长度需要依次遍历
//int Lens(ListQenue Q)
//{
//	int cnt = 0;
//	ListNode* p = Q.front;
//	while (p->next)
//	{
//		cnt++;
//		p = p->next;
//	}
//	return cnt;
//}
////判空
//int is_empty(ListQenue* Q)
//{
//	return Q->front == Q->rear;
//}
////初始化
//void InitListQenue(ListNode** head, ListQenue* Q)
//{
//	*head = (ListNode*)malloc(sizeof(ListNode));
//	(*head)->next = NULL;
//	Q->front = Q->rear = *head;
//	return 1;
//}
////入队
//int EnListQenue(ListQenue* Q, int x)
//{
//	ListNode* S = (ListNode*)malloc(sizeof(ListNode));
//	S->next = NULL;
//	S->data = x;
//	Q->rear->next = S;
//	Q->rear = S;
//	return 1;
//}
////出队
//int DeListQenue(ListQenue* Q, int* x)
//{
//	if (Q->front == Q->rear)
//		return 0;
//	ListNode* p = Q->front->next;
//	*x = p->data;
//	Q->front->next = p;
//	if (Q->front->next = Q->rear)
//		Q->rear = Q->front;
//	free(p);
//	return 1;
//}
////获得栈顶元素
//int GetTop(ListQenue* Q, int* x)
//{
//	if (Q->front == Q->rear)
//		return 0;
//	*x = Q->front->next->data;
//	return 1;
//}
//int main()
//{
//	ListNode* head;
//	ListQenue Q;
//	InitListQenue(&head, &Q);
//	EnListQenue(&Q,1);
//	return 0;
//}
////静态数组实现队列
//typedef struct Queue
//{
//	int queue[MAXSIZE];
//	int front;
//	int rear;
//}Qenue;
//
//int InitQenue(Qenue* S)
//{
//	S->front = S->rear = 0;
//	return 1;
//}
//int lens(Qenue* S)
//{
//	return (MAXSIZE + S->rear - S->front) % MAXSIZE;
//}
////判空
//int is_empty(Qenue* S)
//{
//	if (S->front == S->rear % MAXSIZE)
//		return 1;
//	return 0;
//}
////判定是否已经满了
//int is_full(Qenue* S)
//{
//	return (S->rear + 1) % MAXSIZE == S->front;
//}
////入队
//int EnQenue(Qenue* S, int x)
//{
//	if (is_full(S))
//		return 0;
//	S->queue[S->rear] = x;
//	S->rear = (S->rear + 1) % MAXSIZE;
//	return 1;
//}
////出队
//int DeQenue(Qenue* S, int* x)
//{
//	if (S->front == S->rear)
//		return 0;
//	*x = S->queue[S->front];
//	S->front = (S->front + 1) % MAXSIZE;
//	return 1;
//}
//int main()
//{
//	Qenue S;
//	InitQenue(&S);
//	return 0;
//}



////链栈
//typedef struct ListStack
//{
//	int data;
//	struct ListStack* next;
//}*ListStack;
//int InitListStack(ListStack* S)
//{
//	*S = (ListStack)malloc(sizeof(struct ListStack));
//	(*S)->next = NULL;
//	return 1;
//}
//int is_empty(ListStack S)
//{
//	if (S->next == NULL)
//		return 1;
//	return 0;
//}
//
//int push(ListStack S, int x)
//{
//	ListStack L = (ListStack)malloc(sizeof(struct ListStack));
//	L->data = x;
//	L->next = S->next;
//	S->next = L;
//	return 1;
//}
//int pop(ListStack S)
//{
//	if (S->next == NULL)
//		return 0;
//	ListStack L = S->next;
//	S->next = L->next;
//	free(L);
//	return 1;
//}
//int get_top(ListStack S, int* x)
//{
//	if (S->next == NULL)
//		return 0;
//	*x = S->next->data;
//	return 1;
//}
//void testListStack()
//{
//	ListStack S;
//	InitListStack(&S);
//}
////静态数组实现顺序栈
//#define MAX 10
//typedef struct
//{
//	int data[MAX];
//	int top;
//}SqStack;
//int InitStack(SqStack* S)
//{
//	S->top = -1;
//	return 1;
//}
//int empty(SqStack* S)
//{
//	return S->top == -1;
//}
//int is_full(SqStack* S)
//{
//	return S->top == MAX - 1;
//}
//int Push(SqStack* S, int x)
//{
//	if (S->top == MAX - 1)
//		return 0;
//	S->data[++S->top] = x;
//	return 1;
//}
//int Pop(SqStack* S, int* x)
//{
//	*x = S->data[S->top--];
//	return 1;
//}
//
//int GetTop(SqStack* S, int* x)
//{
//	*x = S->data[S->top];
//	return 1;
//}
//void testStack()
//{
//	SqStack S;
//	InitStack(&S);
//}
////共享栈
//typedef struct shared_stack
//{
//	int data[MAX];
//	int top1;
//	int top0;
//}shared_stack;
//int InitStack(shared_stack* S)
//{
//	S->top0 = 0;
//	S->top1 = MAX - 1;
//}
//int isfull(shared_stack* S)
//{
//	return S->top0 > S->top1;
//}
//void testshared_stack()
//{
//	shared_stack S;
//	InitStack(&S);
//}
//int main()
//{
//	
//	return 0;
//}