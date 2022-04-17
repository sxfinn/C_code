#pragma once
#include"queue.h"


void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = NULL;
	pq->tail = NULL;
}

void QueuePush(Queue* pq, DataType x)
{
	assert(pq);
	if (pq->head == NULL)
	{
		QNode* tmp = (QNode*)malloc(sizeof(QNode));
		if (tmp)
		{
			tmp->val = x;
			tmp->next = NULL;
			pq->head = tmp;
			pq->tail = tmp;
		}
		else
		{
			printf("%s", strerror(errno));
			exit(-1);
		}
	}
	else
	{
		QNode* next = (QNode*)malloc(sizeof(QNode));
		if (next)
		{
			next->next = NULL;
			next->val = x;
			pq->tail->next = next;
			pq->tail = next;
		}
		else
		{
			printf("%s", strerror(errno));
			exit(-1);
		}
	}
}

DataType QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	QNode* pre = pq->head;
	pq->head = pq->head->next;
	if (pq->head == NULL)
		pq->tail = NULL;
	DataType ret = pre->val;
	free(pre);
	return ret;
}

bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;
}

void QueueDestory(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
}