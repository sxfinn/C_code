#include"queue.h"


typedef struct 
{
	Queue q1;
	Queue q2;
} MyStack;


MyStack* myStackCreate()
{
	MyStack* s = (MyStack*)malloc(sizeof(MyStack));
	QueueInit(&(s->q1));
	QueueInit(&(s->q2));
}

void myStackPush(MyStack* obj, int x)
{
	if (QueueEmpty(&(obj->q1)))
	{
		QueuePush(&(obj->q2), x);
	}
	else
	{
		QueuePush(&(obj->q1), x);
	}
}

int myStackPop(MyStack* obj) 
{
	Queue* empty = &(obj->q1);
	Queue* nonempty = &(obj->q2);
	if (!QueueEmpty(empty))
	{
		empty = &(obj->q2);
		nonempty = &(obj->q1);
	}
	while (QueueSize(nonempty) > 1)
	{
		int ret = QueueFront(nonempty);
		QueuePop(nonempty);
		QueuePush(empty, ret);
	}
	int ret = QueueFront(nonempty);
	QueuePop(nonempty);
	return ret;
}

int myStackTop(MyStack* obj) 
{
	int ret = 0;
	if (QueueEmpty(&(obj->q1)))
	{
		ret = QueueBack(&(obj->q2));
	}
	else
	{
		ret = QueueBack(&(obj->q1));
	}
	return ret;
}

bool myStackEmpty(MyStack* obj) 
{
	return QueueEmpty(&(obj->q1)) && QueueEmpty(&(obj->q2));
}

void myStackFree(MyStack* obj)
{
	QueueDestory(&(obj->q1));
	QueueDestory(&(obj->q2));
	free(obj);
}


void test2()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	int ret = 0;
	ret = QueueFront(&q);
	printf("%d ", ret);
	QueuePop(&q);
	ret = QueueFront(&q);
	printf("%d ", ret);
	QueuePop(&q);
	ret = QueueFront(&q);
	printf("%d ", ret);
	QueuePop(&q);
	ret = QueueFront(&q);
}

int main()
{
	test2();
	//test1();
	return 0;
}
// 错误示范
//void test1()
//{
//	int ret = 0;
//	struct Queue* q = NULL;
//	QueuePushBack(&q, 1);
//	QueuePushBack(&q, 2);
//	QueuePushBack(&q, 3);
//	ret = QueueFront(&q);
//	printf("%d ", ret);
//	QueuePop(&q);
//	ret = QueueFront(&q);
//	printf("%d ", ret);
//	QueuePop(&q);
//	ret = QueueFront(&q);
//	printf("%d ", ret);
//	QueuePop(&q);
//	//QueuePop(&q);
//}


//数组结构的队列
//#include"queue.h"
//void test1()
//{
//	struct Queue q;
//	QueueInit(&q);
//	QueuePush(&q, 1);
//	QueuePush(&q, 2);
//	QueuePush(&q, 3);
//	QueuePush(&q, 4);
//	QueuePush(&q, 5);
//
//	int ret = 0;
//	ret = QueueFront(&q);
//	printf("%d ", ret);
//	QueuePop(&q);
//	ret = QueueFront(&q);
//	printf("%d ", ret);
//	QueuePop(&q);
//	ret = QueueFront(&q);
//	printf("%d ", ret);
//	QueuePop(&q);
//	ret = QueueFront(&q);
//	printf("%d ", ret);
//	QueuePop(&q);
//	ret = QueueFront(&q);
//	printf("%d ", ret);
//	//QueuePop(&q);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}