#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<assert.h>
typedef int DataType;

struct Stack
{
	DataType* p;
	int capacity;
	int sz;
};
