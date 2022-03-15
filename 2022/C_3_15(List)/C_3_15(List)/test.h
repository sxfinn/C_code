#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int DataType;
typedef struct SListNode
{
	DataType val;
	struct SListNode* next;
}SListNode;
