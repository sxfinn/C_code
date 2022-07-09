#include"heap.h"

void swap(DataType* s1, DataType* s2)
{
	DataType tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void HeapInit(Heap* ph)
{
	assert(ph);
	ph->a = NULL;
	ph->size = 0;
	ph->capacity = 0;
}

void AdjustUp(Heap* ph, size_t child)
{
	while (child > 0)
	{
		int parent = (child - 1) / 2;
		if (ph->a[parent] > ph->a[child])
			swap(ph->a + child, ph->a + parent);
		else
			break;
		child = parent;
	}
}

void HeapPush(Heap* ph, DataType x)
{
	assert(ph);
	if (ph->capacity == ph->size)
	{
		int newcapacity = ph->capacity == 0 ? 4 : 2 * ph->capacity;
		DataType* tmp = (DataType*)realloc(ph->a, sizeof(DataType) * newcapacity);
		if (tmp)
		{
			ph->a = tmp;
			ph->capacity = newcapacity;
		}
		else
		{
			printf("realloc failed\n");
			exit(-1);
		}
	}
	ph->a[ph->size] = x;
	++ph->size;
	int child = ph->size - 1;
	AdjustUp(ph, child);
}

void AdjustDown(Heap* ph, size_t size, size_t root)
{
	assert(ph);
	int parent = root;
	int child = parent * 2 + 1;
	while (child < size)
	{
		if (child + 1 < size && ph->a[child] > ph->a[child + 1])
		{
			child++;
		}
		if (ph->a[parent] > ph->a[child])
		{
			swap(ph->a + parent, ph->a + child);
		}
		parent = child;
		child = child * 2 + 1;
	}
}

void HeapPop(Heap* ph)
{
	assert(ph);
	swap(ph->a + ph->size - 1, ph->a + 0);
	ph->size--;
	AdjustDown(ph, ph->size, 0);
}

size_t HeapSize(Heap* ph)
{
	assert(ph);
	return ph->size;
}

bool HeapEmpty(Heap* ph)
{
	assert(ph);
	return ph->size == 0;
}

DataType HeapTop(Heap* ph)
{
	assert(ph);
	assert(ph->size > 0);
	return ph->a[0];
}