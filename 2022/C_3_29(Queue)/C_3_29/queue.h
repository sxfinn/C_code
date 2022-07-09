#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
#include<errno.h>

typedef int DataType;
typedef struct QNode
{
	DataType val;
	struct QNode* next;

}QNode;

typedef struct Queue
{
	QNode* phead;
	QNode* tail;
}Queue;
//链表结构
void QueueInit(Queue* pq);
void QueuePush(Queue* pq, DataType val);
void QueuePop(Queue* pq);
size_t QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);
void QueueDestory(Queue* pq);
DataType QueueFront(Queue* pq);
DataType QueueBack(Queue* pq);

// 错误示范
//struct Queue* getnode(DataType val); 
//void QueuePushBack(struct Queue** pphead, DataType val);
//void QueuePop(struct Queue** pphead);
//DataType QueueFront(struct Queue** pphead);
//void QueueDestory(struct Queue** pphead);
//size_t QueueSize(struct Queue** pphead);
//bool QueueEmpty(struct Queue** pphead);


//数组结构
//void QueueInit(struct Queue* q);
//void QueuePush(struct Queue* q, DataType x);
//void QueuePop(struct Queue* q);
//DataType QueueFront(struct Queue* q);
//void QueueDestory(struct Queue* q);
