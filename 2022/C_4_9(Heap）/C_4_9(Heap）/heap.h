#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int DataType;

typedef struct Heap
{
	DataType* a;
	int size;
	int capacity;
}Heap;


void swap(DataType* s1, DataType* s2);
void HeapInit(Heap* ph);
void HeapPush(Heap* ph, DataType x);
void AdjustDown(Heap* ph, size_t size, size_t root);
void HeapPop(Heap* ph);
size_t HeapSize(Heap* ph);
bool HeapEmpty(Heap* ph);
DataType HeapTop(Heap* ph);
