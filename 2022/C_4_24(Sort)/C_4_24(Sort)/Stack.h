#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
typedef int DataType;
typedef struct Stack
{
	DataType* a;
	int top;
	int capacity;
}Stack;

void StackInit(Stack* ps);
void StackPush(Stack* ps, DataType x);
void StackPop(Stack* ps);
DataType StackTop(Stack* ps);
void StackDestory(Stack* ps);
bool StackEmpty(Stack* ps);
void StackPrint(Stack* ps);