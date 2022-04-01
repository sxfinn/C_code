#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<assert.h>
//循环链表实现

typedef struct QNode
{
	int val;
	struct QNode* next;
}QNode;

typedef struct Queue
{
	QNode* phead;
	QNode* tail;
}Queue;

void QInit(Queue* pq)
{
	assert(pq);
	QNode* tmp = (QNode*)malloc(sizeof(QNode));
	if (tmp)
	{
		tmp->val = 0;
		tmp->next = tmp;
	}
	else
		exit(-1);
	pq->phead = tmp;
	pq->tail = tmp;
}


void QPush(Queue* pq, int val)
{
	assert(pq);
	QNode* tmp = (QNode*)malloc(sizeof(QNode));
	if (tmp)
	{
		tmp->val = val;
	}
	else
		exit(-1);
	tmp->next = pq->tail->next;
	pq->tail->next = tmp;
	pq->tail = tmp;
}

void QDestory(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->phead;
	QNode* next = cur->next;
	while (next != pq->phead)
	{		
		cur = next;
		next = next->next;
		free(cur);
	}
	free(pq->phead);
	pq->phead = NULL;
	pq->tail = NULL;
}
//void Qprint(Queue* pq)
//{
//	assert(pq);
//	QNode* cur = pq->phead;
//	while (cur != pq->tail)
//	{
//		printf("%d->", cur->val);
//		cur = cur->next;
//	}
//	printf("%d", pq->tail->val);
//	printf("\n");
//}
//int main()
//{
//	Queue q;
//	QInit(&q);
//	QPush(&q, 1);
//	QPush(&q, 2);
//	QDestory(&q);
//	return 0;
//
//}

typedef struct 
{
	Queue q;
	QNode* front;
	QNode* back;
	QNode* backprev;
} MyCircularQueue;
bool myCircularQueueIsEmpty(MyCircularQueue* obj);
bool myCircularQueueIsFull(MyCircularQueue* obj);

MyCircularQueue* myCircularQueueCreate(int k)
{
	MyCircularQueue* ret = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
	QInit(&(ret->q));
	while (k--)
	{
		QPush(&(ret->q), 0);
	}
	ret->front = ret->back = ret->q.phead->next;
	ret->backprev = ret->q.phead;
	return ret;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) 
{
	assert(obj);
	if (!myCircularQueueIsFull(obj))
	{
		obj->back->val = value;
		obj->backprev = obj->back;
		obj->back = obj->back->next;
		return true;
	}
	else
		return false;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) 
{
	assert(obj);
	if (!myCircularQueueIsEmpty(obj))
	{
		obj->front = obj->front->next;
		return true;
	}
	else
		return false;
}

int myCircularQueueFront(MyCircularQueue* obj) 
{
	assert(obj);
	if (!myCircularQueueIsEmpty(obj))
		return obj->front->val;
	else
		return -1;
}

int myCircularQueueRear(MyCircularQueue* obj) 
{
	assert(obj);
	if (!myCircularQueueIsEmpty(obj))
		return obj->backprev->val;
	else
		return -1;
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) 
{
	assert(obj);
	return obj->front == obj->back;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) 
{
	assert(obj);
	return obj->back->next == obj->front;
}

void myCircularQueueFree(MyCircularQueue* obj)
{
	//QDestory(&(obj->q));
	free(obj);
}



//typedef struct LNode
//{
//	int val;
//	struct LNode* next;
//}LNode;
//
//typedef struct Queue
//{
//	LNode* phead;
//	LNode* tail;
//}Queue;
//
//void QueueInit(Queue* pq)
//{
//	assert(pq);
//	pq->phead = NULL;
//	pq->tail = NULL;
//}
//
//void QueuePush(Queue* pq, int val)
//{
//	assert(pq);
//	LNode* tmp = (LNode*)malloc(sizeof(LNode));
//	if (tmp)
//	{
//		tmp->val = val;
//		tmp->next = NULL;
//	}
//	else
//		return;
//	if (pq->phead == NULL)
//	{
//		tmp->next = tmp;
//		pq->phead = tmp;
//		pq->tail = tmp;
//	}
//	else
//	{
//		tmp->next = pq->phead;
//		pq->tail->next = tmp;
//		pq->tail = tmp;
//	}
//}
//int main()
//{
//	Queue q;
//	QueueInit(&q);
//	QueuePush(&q, 1);
//	QueuePush(&q, 2);
//	QueuePush(&q, 3);
//	QueuePush(&q, 4);
//	QueuePush(&q, 1);
//	QueuePush(&q, 2);
//	QueuePush(&q, 3);
//	QueuePush(&q, 4);
//	return 0;
//}
//bool QueueEmpty(Queue* pq)
//{
//	assert(pq);
//	return pq->phead == NULL;
//}
//
//void QueuePop(Queue* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//	if (pq->phead == pq->tail)
//	{
//		pq->phead = pq->tail = NULL;
//	}
//	else
//	{
//		pq->phead = pq->phead->next;
//	}
//}
//
//
//
//int QueueFront(Queue* pq)
//{
//	assert(pq);
//	if (!QueueEmpty(pq))
//	{
//		return pq->phead->val;
//	}
//	else
//		exit(-1);
//}
//
//int QueueBack(Queue* pq)
//{
//	assert(pq);
//	if (!QueueEmpty(pq))
//	{
//		return pq->tail->val;
//	}
//	else
//		exit(-1);
//}
//
//size_t QueueSize(Queue* pq)
//{
//	assert(pq);
//	size_t cnt = 0;
//	LNode* cur = pq->phead;
//	while (cur)
//	{
//		++cnt;
//		cur = cur->next;
//	}
//	return cnt;
//}
//
//void QueueDestory(Queue* pq)
//{
//	assert(pq);
//	LNode* cur = pq->phead;
//	while (cur->next != pq->phead)
//	{
//		LNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//}


//typedef struct 
//{
//	Queue q;
//	LNode* front;
//	LNode* back;
//} MyCircularQueue;
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj);
//bool myCircularQueueIsFull(MyCircularQueue* obj);
//
//MyCircularQueue* myCircularQueueCreate(int k)
//{
//	MyCircularQueue* ret = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//	if (ret == NULL)
//		return NULL;
//	k = k + 1;
//	QueueInit(&(ret->q));
//	while (k--)
//	{
//		QueuePush(&(ret->q), 0);
//	}
//	ret->front = ret->back = ret->q.phead;
//	return ret;
//}
//
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) 
//{
//	if (!myCircularQueueIsFull(obj))
//	{
//		obj->back->val = value;
//		obj->back = obj->back->next;
//		return true;
//	}
//	else
//		return false;
//}
//
//
//bool myCircularQueueDeQueue(MyCircularQueue* obj) 
//{
//	if (!myCircularQueueIsEmpty(obj))
//	{
//		obj->front = obj->front->next;
//		return true;
//	}
//	else
//		return false;
//}
//
//int myCircularQueueFront(MyCircularQueue* obj) 
//{
//	if (!myCircularQueueIsEmpty(obj))
//	{
//		return obj->front->val;
//	}
//	else
//		return -1;
//}
//
//int myCircularQueueRear(MyCircularQueue* obj) 
//{
//	if (!myCircularQueueIsEmpty(obj))
//	{
//		LNode* cur = obj->front;
//		while (cur->next != obj->back)
//		{
//			cur = cur->next;
//		}
//		return cur->val;
//	}
//	else
//		return -1;
//}
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj)
//{
//	return obj->back == obj->front;
//}
//
//bool myCircularQueueIsFull(MyCircularQueue* obj) 
//{
//	return obj->back->next = obj->front;
//}
//
//void myCircularQueueFree(MyCircularQueue* obj) 
//{
//	LNode* cur = obj->q.phead;
//	while (cur != obj->q.tail)
//	{
//		LNode* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	free(cur);
//	free(obj);
//}

////数组实现
//typedef struct
//{
//	int* arr;
//	int front;
//	int back;
//	int k;
//} MyCircularQueue;
//
//bool myCircularQueueIsFull(MyCircularQueue* obj);
//bool myCircularQueueIsEmpty(MyCircularQueue* obj);
//MyCircularQueue* myCircularQueueCreate(int k)
//{
//	MyCircularQueue* pq = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//	pq->arr = (int*)malloc(sizeof(int) * (k + 1));
//	pq->front = 0;
//	pq->back = 0;
//	pq->k = k;
//	return pq;
//}
//
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) 
//{
//	if (!myCircularQueueIsFull(obj))
//	{
//		if (obj->back == obj->k)
//		{
//			obj->arr[obj->back] = value;
//			obj->back = 0;
//		}
//		else
//		{
//			obj->arr[obj->back] = value;
//			obj->back++;
//		}
//		return true;
//	}
//	else
//		return false;
//
//}
//
//bool myCircularQueueDeQueue(MyCircularQueue* obj) 
//{
//	if (!myCircularQueueIsEmpty(obj))
//	{
//		if (obj->front == obj->k)
//		{
//			obj->front = 0;
//		}
//		else
//			obj->front++;
//		return true;
//	}
//	else
//		return false;
//}
//
//int myCircularQueueFront(MyCircularQueue* obj) 
//{
//	if (!myCircularQueueIsEmpty(obj))
//	{
//		return obj->arr[obj->front];
//	}
//	else
//		return -1;
//}
//
//int myCircularQueueRear(MyCircularQueue* obj) 
//{
//	if (!myCircularQueueIsEmpty(obj))
//	{
//		if (obj->back == 0)
//			return obj->arr[obj->k];
//		else
//			return obj->arr[obj->back - 1];
//	}
//	else
//		return -1;
//}
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj) 
//{
//	return obj->back == obj->front;
//}
//
//bool myCircularQueueIsFull(MyCircularQueue* obj) 
//{
//	if (obj->back == obj->k && obj->front == 0)
//		return true;	
//	else if (obj->back + 1 == obj->front)
//		return true;
//	else
//		return false;
//}
//
//void myCircularQueueFree(MyCircularQueue* obj) 
//{
//	free(obj->arr);
//	obj->back = obj->front = obj->k = 0;
//	free(obj);
//}