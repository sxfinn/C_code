#include"queue.h"
//链表结构的队列

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->phead = pq->tail = NULL;
}

void QueuePush(Queue* pq, DataType val)
{
	assert(pq);
	QNode* tmp = (QNode*)malloc(sizeof(QNode));
	if (tmp)
	{
		tmp->val = val;
		tmp->next = NULL;
		if (pq->phead == NULL)
		{
			pq->phead = tmp;
			pq->tail = tmp;
		}
		else
		{
			pq->tail->next = tmp;
			pq->tail = tmp;
		}
	}
}

void QueuePop(Queue* pq)
{
	assert(pq);
	QNode* phead = pq->phead;
	if (phead == NULL)
		return;
	if (phead->next == NULL)
	{
		pq->phead = NULL;
		pq->tail = NULL;
	}
	else
	{
		pq->phead = pq->phead->next;
	}
	free(phead);
}

size_t QueueSize(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->phead;
	size_t cnt = 0;
	while (cur)
	{
		++cnt;
		cur = cur->next;
	}
	return cnt;
}

bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->phead == NULL;
}

void QueueDestory(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->phead;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->phead = NULL;
	pq->tail = NULL;
}

DataType QueueFront(Queue* pq)
{
	assert(pq);
	if (QueueEmpty(pq))
		exit(-1);
	return pq->phead->val;	
}

DataType QueueBack(Queue* pq)
{
	if (QueueEmpty(pq))
		exit(-1);
	return pq->tail->val;
}

//错误示范
//struct Queue* getnode(DataType val)
//{
//	struct Queue* ret = (struct Queue*)malloc(sizeof(struct Queue));
//	if (ret)
//	{
//		ret->val = val;
//		ret->next = NULL;
//		return ret;
//	}
//	else
//	{
//		printf("%s", strerror(errno));
//		return NULL;
//	}
//}
//
//void QueuePushBack(struct Queue** pphead, DataType val)
//{
//	assert(pphead);
//	static struct Queue* tail = NULL;
//	if (*pphead == NULL)
//	{
//		*pphead = getnode(val);
//		tail = *pphead;
//	}
//	else
//	{
//		struct Queue* tmp = getnode(val);
//		tail->next = tmp;
//		tail = tmp;
//	}
//	
//}
//
//void QueuePop(struct Queue** pphead)
//{
//	assert(pphead);
//	assert(*pphead);
//	struct Queue* next = (*pphead)->next;
//	free(*pphead);
//	*pphead = next;
//}
//
//DataType QueueFront(struct Queue** pphead)
//{
//	assert(pphead);
//	assert(*pphead);
//	return (*pphead)->val;
//}
//
//void QueueDestory(struct Queue** pphead)
//{
//	assert(pphead);
//	if (*pphead == NULL)
//		return;
//	struct Queue* cur = *pphead;
//	
//	while (cur)
//	{
//		struct Queue* next = cur->next;
//		free(cur);
//		cur = next;
//	}
//}
//
//size_t QueueSize(struct Queue** pphead)
//{
//	assert(pphead);
//	struct Queue* cur = *pphead;
//	size_t cnt = 0;
//	while (cur)
//	{
//		++cnt;
//		cur = cur->next;
//	}
//	return cnt;
//}
//
//bool QueueEmpty(struct Queue** pphead)
//{
//	assert(pphead);
//	return *pphead == NULL;
//}

//数组结构的队列
//void QueueInit(struct Queue* q)
//{
//	q->p = NULL;
//	q->capacity = 0;
//	q->sz = 0;
//}
//
//void QueuePush(struct Queue* q, DataType x)
//{
//	assert(q);
//	if (q->capacity == q->sz)
//	{
//		int newcapacity = q->capacity == 0 ? 4 : 2 * q->capacity;
//		DataType* tmp = (DataType*)realloc(q->p, sizeof(DataType) * newcapacity);
//		if (tmp == NULL)
//		{
//			printf("%s", strerror(errno));
//			exit(-1);
//		}
//		q->p = tmp;
//		q->capacity = newcapacity;
//	}
//	q->p[q->sz] = x;
//	q->sz++;
//}
//
//void QueuePop(struct Queue* q)
//{
//	assert(q);
//	assert(q->sz > 0);
//	q->p++;
//	q->sz--;
//}
//
//DataType QueueFront(struct Queue* q)
//{
//	assert(q);
//	assert(q->sz > 0);
//	return q->p[0];
//}
//
//void QueueDestory(struct Queue* q)
//{
//	assert(q);
//	free(q->p);
//	q->sz = 0;
//	q->capacity = 0;
//}