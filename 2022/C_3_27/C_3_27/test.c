#include"stack.h"

void StackInit(struct Stack* s)
{
	s->p = NULL;
	s->sz = 0;
	s->capacity = 0;
}

void StackPush(struct Stack* s, DataType x)
{
	assert(s);
	if (s->sz == s->capacity)
	{
		int newcapacity = s->capacity == 0 ? 2 : 2 * s->capacity;
		DataType* tmp = (DataType*)realloc(s->p, sizeof(DataType) * newcapacity);
		if (tmp)
		{
			s->p = tmp;
			s->capacity = newcapacity;
		}
		else
		{
			printf("realloc fail\n");
			exit(-1);
		}
	}			
	s->p[(s->sz)++] = x;
}

void StackPop(struct Stack* s)
{
	assert(s);
	assert(s->p);
	if (s->sz > 0)
	{
		--s->sz;
	}
}

DataType StackTop(struct Stack* s)
{
	assert(s);
	assert(s->sz > 0);
	return s->p[s->sz - 1];
}

int StackSize(struct Stack* s)
{
	assert(s);
	return s->sz;
}

void StackDestory(struct Stack* s)
{
	assert(s);
	s->capacity = 0;
	s->sz = 0;
	free(s->p);
	s->p = NULL;
}

bool StackEmpty(struct Stack* s)
{
	assert(s);
	return s->sz == 0;
}


typedef struct 
{
	struct Stack s1;
	struct Stack s2;
}MyQueue;


MyQueue* myQueueCreate() 
{
	MyQueue* queue = (MyQueue*)malloc(sizeof(MyQueue));
	StackInit(&(queue->s1));
	StackInit(&(queue->s2));
	return queue;
}

void myQueuePush(MyQueue* obj, int x) 
{
	StackPush(&(obj->s1), x);
}

int myQueuePop(MyQueue* obj) 
{
	if (StackEmpty(&(obj->s2)))
	{
		while (!StackEmpty(&(obj->s1)))
		{
			int tmp = StackTop(&(obj->s1));
			StackPush(&(obj->s2), tmp);
			StackPop(&(obj->s1));
		}
	}
	int ret = StackTop(&(obj->s2));
	StackPop(&(obj->s2));
	return ret;
}

int myQueuePeek(MyQueue* obj) 
{
	if (StackEmpty(&(obj->s2)))
	{
		while (!StackEmpty(&(obj->s1)))
		{
			int tmp = StackTop(&(obj->s1));
			StackPush(&(obj->s2), tmp);
		}
	}
	int ret = StackTop(&(obj->s2));
	return ret;
}

bool myQueueEmpty(MyQueue* obj) 
{
	return StackEmpty(&(obj->s1)) && StackEmpty(&(obj->s2));
}

void myQueueFree(MyQueue* obj) 
{
	StackDestory(&(obj->s1));
	StackDestory(&(obj->s2));
}


//void StackInit(struct Stack* s)
//{
//	s->p = NULL;
//	s->sz = 0;
//	s->capacity = 0;
//}
//
//void StackPush(struct Stack* s, DataType x)
//{
//	assert(s);
//	if (s->sz == s->capacity)
//	{
//		int newcapacity = s->capacity == 0 ? 2 : 2 * s->capacity;
//		DataType* tmp = (DataType*)realloc(s->p, sizeof(DataType) * newcapacity);
//		if (tmp)
//		{
//			s->p = tmp;
//			s->capacity = newcapacity;
//		}
//		else
//		{
//			printf("realloc fail\n");
//			exit(-1);
//		}
//	}			
//	s->p[(s->sz)++] = x;
//}
//
//void StackPop(struct Stack* s)
//{
//	assert(s);
//	assert(s->p);
//	if (s->sz > 0)
//	{
//		--s->sz;
//	}
//}
//
//DataType StackTop(struct Stack* s)
//{
//	assert(s);
//	assert(s->sz > 0);
//	return s->p[s->sz - 1];
//}
//
//int StackSize(struct Stack* s)
//{
//	assert(s);
//	return s->sz;
//}
//
//void StackDestory(struct Stack* s)
//{
//	assert(s);
//	s->capacity = 0;
//	s->sz = 0;
//	free(s->p);
//	s->p = NULL;
//}
//
//bool StackEmpty(struct Stack* s)
//{
//	assert(s);
//	return s->sz == 0;
//}
//
//bool isValid(char* s)
//{
//	struct Stack t;
//	StackInit(&t);
//	while (*s)
//	{
//		if (*s == '(' || *s == '[' || *s == '{')
//		{
//			StackPush(&t, *s);
//		}
//		else
//		{
//			if (StackEmpty(&t))
//				return false;
//			char tmp = StackTop(&t);
//			if (*s == '}' && tmp != '{' || *s == ')' && tmp != '(' || *s == ']' && tmp != '[')
//				return false;
//			else
//				StackPop(&t);
//		}
//		++s;
//	}
//
//	return StackEmpty(&t);
//}

//void test1()
//{
//	struct Stack s;
//	StackInit(&s);
//	StackPush(&s, 1);
//	StackPush(&s, 2);
//	StackPush(&s, 3);
//
//	printf("%d ", StackTop(&s));
//	StackPop(&s);
//	printf("%d ", StackTop(&s));
//	StackPop(&s);
//	printf("%d ", StackTop(&s));
//	StackPop(&s);
//	//printf("%d ", StackTop(&s));
//	//StackPop(&s);
//	//struct Stack s1 = s;
//	//printf("hehe");
//}
int main()
{
	int ret = isValid("({{{{}}}))");
	printf("%d", ret);
	//test1();
	return 0;
}
//bool isValid(char* s)
//{
//	char* stack = (char*)malloc(sizeof(char) * 4000);
//	int p = 0;
//	while (*s)
//	{
//		if (*s == '(' || *s == '[' || *s == '{')
//		{
//			stack[p++] = *s;
//		}
//		else
//		{
//			if (*s == ')')
//			{
//				if (p > 0 && stack[p - 1] == '(')
//					--p;
//				else
//					return false;
//			}
//			else if (*s == '}')
//			{
//				if (p > 0 && stack[p - 1] == '{')
//					--p;
//				else
//					return false;
//			}
//			else if (*s == ']')
//			{
//				if (p > 0 && stack[p - 1] == '[')
//					--p;
//				else
//					return false;
//			}
//		}
//		++s;
//	}
//	return p == 0;
//}

