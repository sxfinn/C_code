#include"test.h"


void QueueInit(Queue* pq)
{
	assert(pq);
	pq->phead = NULL;
	pq->tail = NULL;
}

void QueuePush(Queue* pq, DataType val)
{
	assert(pq);
	QNode* tmp = (QNode*)malloc(sizeof(QNode));
	if (tmp)
	{
		tmp->val = val;
		tmp->next = NULL;
	}
	else
		exit(-1);
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

bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->phead == NULL;
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

void QueuePop(Queue* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));
	QNode* cur = pq->phead;
	if (pq->phead == pq->tail)
	{
		pq->phead = NULL;
		pq->tail = NULL;
	}
	else
	{
		pq->phead = pq->phead->next;
	}
	free(cur);
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
}

DataType QueueFront(Queue* pq)
{
	assert(pq);
	if (!QueueEmpty(pq))
	{
		return pq->phead->val;
	}
	else
		exit(-1);
}

DataType QueueBack(Queue* pq)
{
	assert(pq);
	if (!QueueEmpty(pq))
	{
		return pq->tail->val;
	}
	else
		exit(-1);
}


//
void StackInit(Stack* ps)
{
	assert(ps);
	ps->capacity = 0;
	ps->phead = NULL;
	ps->size = 0;
}

void StackPush(Stack* ps, DataType val)
{
	assert(ps);
	if (ps->capacity == ps->size)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		DataType* tmp = (DataType*)realloc(ps->phead, sizeof(DataType) * newcapacity);
		if (tmp)
		{
			ps->phead = tmp;
			ps->capacity = newcapacity;
		}
		else
		{
			printf("%s", strerror(errno));
			exit(-1);
		}
	}
	ps->phead[ps->size] = val;
	++(ps->size);
}

void StackPop(Stack* ps)
{
	assert(ps);
	assert(ps->size > 0);
	ps->size--;
}

DataType StackTop(Stack* ps)
{
	assert(ps);
	if (ps->size > 0)
	{
		return ps->phead[ps->size - 1];
	}
	else
		exit(-1);
}

size_t StackSize(Stack* ps)
{
	assert(ps);
	return ps->size;
}

void StackDestory(Stack* ps)
{
	assert(ps);
	free(ps->phead);
	ps->capacity = 0;
	ps->size = 0;
}

bool StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->size == 0;
}
