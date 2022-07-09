#include"heap.h"

void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void HeapInit(Heap* ph)
{
	assert(ph);
	ph->a = NULL;
	ph->capacity = ph->size = 0;
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
			child = child + 1;
		}
		if (ph->a[parent] > ph->a[child])
		{
			swap(ph->a + parent, ph->a + child);
		}
		else
			break;
		parent = child;
		child = child * 2 + 1;
	}
}

void HeapPush(Heap* ph, HpDataType x)
{
	assert(ph);
	if (ph->size == ph->capacity)
	{
		int newcapacity = ph->capacity == 0 ? 4 : 2 * ph->capacity;
		HpDataType* tmp = (HpDataType*)realloc(ph->a,sizeof(HpDataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc failed\n");
			exit(-1);
		}
		else
		{
			ph->a = tmp;
		}
		ph->capacity = newcapacity;
	}
	ph->a[ph->size] = x;
	ph->size++;
	int child = ph->size - 1;
	while (child > 0)
	{
		int parent = (child - 1) / 2;
		if (ph->a[child] < ph->a[parent])
		{
			swap(ph->a + child, ph->a + parent);
		}
		else
			break;
		child = parent;
	}
}

int HeapPop(Heap* ph)
{
	assert(ph);
	assert(ph->size > 0);
	int ret = ph->a[0];	
	swap(ph->a + ph->size - 1, ph->a + 0);
	ph->size--;
	AdjustDown(ph, ph->size, 0);
	return ret;
}

void HeapDestory(Heap* ph)
{
	assert(ph);
	free(ph->a);
	ph->a = NULL;
	ph->size = 0;
	ph->capacity = 0;
}

void HeapPrint(Heap* ph)
{
	assert(ph);
	for (int i = 0; i < ph->size; i++)
	{
		printf("%d ", ph->a[i]);
	}
	printf("\n");
}

size_t HeapSize(Heap* ph)
{
	assert(ph);
	return ph->size;
}

bool HeapEmpty(Heap* ph)
{
	return ph->size == 0;
}

