#pragma once
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int HpDataType;
typedef struct Heap
{
	HpDataType* a;
	size_t size;
	size_t capacity;
}Heap;
void swap(int* a, int* b);
void AdjustDown(Heap* ph, size_t size, size_t root);
void HeapPush(Heap* ph, HpDataType x);
int HeapPop(Heap* ph);
void HeapDestory(Heap* ph);
void HeapInit(Heap* ph);
void HeapPrint(Heap* ph);