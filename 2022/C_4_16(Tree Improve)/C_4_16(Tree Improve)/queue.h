#pragma once
#include"tree.h"

typedef BTNode* DataType;
typedef struct QueueNode
{
	DataType val;
	struct QueueNode* next;
}QNode;

typedef struct Queue 
{
	QNode* head;
	QNode* tail;
}Queue;


void QueueInit(Queue* pq);
void QueuePush(Queue* pq, DataType x);
bool QueueEmpty(Queue* pq);
DataType QueuePop(Queue* pq);
void QueueDestory(Queue* pq);