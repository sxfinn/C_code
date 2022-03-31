#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<errno.h>
#include<stdbool.h>
typedef int DataType;
typedef struct Stack
{
	DataType* phead;
	int size;
	int capacity;
}Stack;

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
void QueueInit(Queue* pq);
void QueuePush(Queue* pq, DataType val);
bool QueueEmpty(Queue* pq);
size_t QueueSize(Queue* pq);
void QueuePop(Queue* pq);
void QueueDestory(Queue* pq);
DataType QueueFront(Queue* pq);
DataType QueueBack(Queue* pq);


//
void StackInit(Stack* ps);
void StackPush(Stack* ps, DataType val);
void StackPop(Stack* ps);
DataType StackTop(Stack* ps);
size_t StackSize(Stack* ps);
void StackDestory(Stack* ps);

