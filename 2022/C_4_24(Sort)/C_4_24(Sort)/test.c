#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Stack.h"


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
void _MergeSort(int* arr, int left, int right, int* tmp)
{
	if (left >= right)
		return;
	int mid = left + (right - left) / 2;
	_MergeSort(arr, left, mid, tmp);
	_MergeSort(arr, mid + 1, right, tmp);
	int begin1 = left;
	int end1 = mid;
	int begin2 = mid + 1;
	int end2 = right;
	int p = left;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (arr[begin1] < arr[begin2])
		{
			tmp[p++] = arr[begin1++];
		}
		else
		{
			tmp[p++] = arr[begin2++];
		}
	}
	while(begin1 <= end1)
		tmp[p++] = arr[begin1++];
	while (begin2 <= end2)
	{
		tmp[p++] = arr[begin2++];
	}
	for (int i = left; i <= right; i++)
	{
		arr[i] = tmp[i];
	}
}
void MergeSort(int* arr, int sz)
{
	int* tmp = (int*)malloc(sizeof(int) * sz);
	_MergeSort(arr, 0, sz - 1, tmp);
	free(tmp);
}
void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int PartSort(int* arr, int left, int right)
{
	int keyi = left + rand() % (right - left + 1);
	swap(arr + left, arr + keyi);
	int key = arr[left];
	int prev = left;
	int cur = prev + 1;
	while (cur <= right)
	{
		if (arr[cur] < key && arr[++prev] != arr[cur])
			swap(arr + prev, arr + cur);
		cur++;
	}
	swap(arr + left, arr + prev);
	return prev;
}

void QuickSort(int* arr, int left, int right)
{
	if (left >= right)
		return;
	Queue q;
	QueueInit(&q);
	QueuePush(&q, left);
	QueuePush(&q, right);
	while (!QueueEmpty(&q))
	{
		int begin = QueueFront(&q);
		QueuePop(&q);
		int end = QueueFront(&q);
		QueuePop(&q);
		int keyi = PartSort(arr, begin, end);
		if (begin < keyi - 1)
		{
			QueuePush(&q, begin);
			QueuePush(&q, keyi);
		}
		if (keyi + 1 < end)
		{
			QueuePush(&q, keyi + 1);
			QueuePush(&q, end);
		}
	}
	QueueDestory(&q);
}
//快排非递归
void QuickSort1(int* arr, int left, int right)
{
	if (left >= right)
		return;
	//PartSort(arr, left, right);
	Stack s;
	StackInit(&s);
	StackPush(&s, left);
	StackPush(&s, right);
	while (!StackEmpty(&s))
	{
		int end = StackTop(&s);
		StackPop(&s);
		int begin = StackTop(&s);
		StackPop(&s);
		
		int pos = PartSort(arr, begin, end);
		if (begin < pos - 1)
		{
			StackPush(&s, begin);
			StackPush(&s, pos - 1);
		}
		if (pos + 1 < end)
		{
			StackPush(&s, pos + 1);
			StackPush(&s, end);
		}
	}
	StackDestory(&s);
}


void MergeSort1(int* arr, int sz)
{
	int* tmp = (int*)malloc(sizeof(int) * sz);
	int gap = 1;
	while (gap < sz)
	{
		for (int i = 0; i < sz; i += 2 * gap)
		{
			int begin1 = i;
			int end1 = begin1 + gap - 1;
			int begin2 = end1 + 1;
			int end2 = begin2 + gap - 1;
			int index = begin1;
			if (end1 >= sz)
				end1 = sz - 1;

			// begin2 越界，第二个区间不存在
			if (begin2 >= sz)
			{
				begin2 = sz;
				end2 = sz - 1;
			}
			// begin2 ok， end2越界，修正end2即可
			if (begin2 < sz && end2 >= sz)
				end2 = sz - 1;
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (arr[begin1] < arr[begin2])
					tmp[index++] = arr[begin1++];
				else
					tmp[index++] = arr[begin2++];
			}
			while(begin1 <= end1)
				tmp[index++] = arr[begin1++];
			while(begin2 <= end2)
				tmp[index++] = arr[begin2++];
			for (int j = i; j < index; j++)
			{
				arr[j] = tmp[j];
			}
		}
		//memcpy(arr, tmp, sizeof(int) * sz);//copy到arr也可以直接这样
		gap *= 2;
	}
}
int main()
{
	int arr[] = { -4,0,7,4};
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	MergeSort1(arr,sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
//void test()
//{
//	Stack s;
//	StackInit(&s);
//	StackPush(&s, 1);
//	StackPush(&s, 2);
//	StackPush(&s, 3);
//	StackPop(&s);
//	StackPop(&s);
//	StackPop(&s);
//	StackPop(&s);
//	StackPrint(&s);
//}
//int main()
//{
//	test();
//	return 0;
//}

void CountSort(int* arr, int sz)
{
	if (sz <= 0)
		return;
	int min = arr[0];
	int max = min;
	for (int i = 0; i < sz; i++)
	{
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	int* hash = (int*)malloc(sizeof(int) * (max - min + 1));
	if (!hash)
		return;
	memset(hash, 0, sizeof(int) * (max - min + 1));
	for (int i = 0; i < sz; i++)
	{
		hash[arr[i]]++;
	}
	int p = 0;
	for (int i = 0; i < max - min + 1; i++)
	{
		while (hash[i] > 0)
		{
			arr[p++] = i;
			--hash[i];
		}
	}
}

//int main()
//{
//	int arr[] = { 2,4,6,10,7,9,1,3,5,7,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	CountSort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}