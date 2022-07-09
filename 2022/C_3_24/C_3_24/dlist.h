#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int DataType;

typedef struct DListNode
{
	DataType val;
	struct DListNode* next;
	struct DListNode* prev;
}DListNode;