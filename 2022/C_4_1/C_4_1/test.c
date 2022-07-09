#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; ++i)
	{
		int flag = 0;
		int j = 0;
		for (j = 0; j < sz - 1 - i; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 1;
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		if (flag == 0)
			break;
	}
}

int main()
{
	int arr[][3] = { {1},{3},{5,6},{2,3} };
	printf("%p %p %p", arr, arr[0], &arr[0][0]);
	return 0;
}
//int main()
//{
//	size_t a = 0;
//	int b = -1;
//	if (b < a)
//	{
//		printf("<");
//	}
//	else
//	{
//		printf(">");
//	}
//	return 0;
//}
//void test(int arr[10])
//{
//	printf("传参后：%d\n", sizeof(arr));
//}
////int main()
////{
////	int a = 0, b = 2, c = 3;
////	int i = 0;
////	i = a++ && b++ && ++c;
////	printf("i==%d a==%d c==%d d==%d\n", i,a,b,c);
////	a = 0, b = 2, c = 3;
////	i = a++ || b++ || ++c;
////	printf("i==%d a==%d c==%d d==%d\n",i,a,b,c);
////	return 0;
////}
////int main()
////{
////	/*int arr[10] = { 0 };
////	printf("传参前：%d\n", sizeof(arr));
////	test(arr);*/
////	return 0;
////}
////typedef struct
////{
////	int a;
////}Type[10];
////
////int main()
////{
////	Type a;
////	printf("%d", sizeof(a));
////	return 0;
////}
//
//void swap(int* n1, int* n2)
//{
//	*n1 = *n1 ^ *n2;
//	*n2 = *n1 ^ *n2;
//	*n1 = *n1 ^ *n2;
//}
//
//int numof1(int k)
//{
//	int cnt = 0;
//	while (k)
//	{
//		k = k & (k - 1);
//		++cnt;
//	}
//	return cnt;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d", sizeof(arr));
//	return 0;
//}

//void swap(int* num1, int* num2)
//{
//	int tmp = *num1;
//	*num1 = *num2;
//	*num2 = tmp;
//}

//int main()
//{
//	int a = -1;
//	a >>= 1;
//	printf("%d", a);
//	return 0;
//}

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









typedef struct 
{
	Queue q;
	QNode* front;
	QNode* back;
	QNode* backprev;
	int cnt;
} MyCircularQueue;

bool myCircularQueueIsEmpty(MyCircularQueue* obj);


bool myCircularQueueIsFull(MyCircularQueue* obj);


MyCircularQueue* myCircularQueueCreate(int k) 
{
	MyCircularQueue* ret = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
	ret->cnt = 0;
	QInit(&(ret->q));
	while (--k)
	{
		QPush(&(ret->q), 0);
	}
	ret->front = ret->back = ret->q.phead->next;
	ret->backprev = ret->q.phead;
	return ret;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) 
{
	if (!myCircularQueueIsFull(obj))
	{
		obj->back->val = value;
		(obj->cnt)++;
		obj->back = obj->back->next;
		return true;
	}
	else
		return false;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) 
{
	if (!myCircularQueueIsEmpty(obj))
	{
		obj->front = obj->front->next;
		(obj->cnt)--;
		return true;
	}
	else
		return false;
}

int myCircularQueueFront(MyCircularQueue* obj) 
{
	if (!myCircularQueueIsEmpty(obj))
	{
		return obj->front->val;
	}
	else
		return -1;
}

int myCircularQueueRear(MyCircularQueue* obj) 
{
	if (!myCircularQueueIsEmpty(obj))
	{
		return obj->backprev->val;
	}
	else
		return -1;
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) 
{
	return obj->back == obj->front && obj->cnt == 0;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) 
{
	return obj->back == obj->front && obj->cnt;
}

void myCircularQueueFree(MyCircularQueue* obj) 
{
	QDestory(&(obj->q));
	free(obj);
}


