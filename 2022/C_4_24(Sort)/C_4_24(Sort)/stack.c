#include"Stack.h"
void StackInit(Stack* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;
}

void StackPush(Stack* ps, DataType x)
{
	assert(ps);
	if (ps->capacity == ps->top)
	{
		int newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		DataType* tmp = (DataType*)realloc(ps->a, sizeof(DataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc failed\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
	ps->a[ps->top++] = x;
}

void StackPop(Stack* ps)
{
	assert(ps);
	assert(ps->top > 0);
	ps->top--;
}

DataType StackTop(Stack* ps)
{
	assert(ps);
	return ps->a[ps->top - 1];
}

void StackDestory(Stack* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;
}

bool StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->top == 0;
}

void StackPrint(Stack* ps)
{
	assert(ps);
	for (int i = 0; i < ps->top; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}