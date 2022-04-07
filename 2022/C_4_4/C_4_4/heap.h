#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef int HpDataType;
typedef struct Heap
{
	HpDataType* a;
	size_t size;
	size_t capacity;
}Heap;