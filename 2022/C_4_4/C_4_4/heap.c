#include"heap.h"

void HeapInit(Heap* ph)
{
	assert(ph);
	ph->a = NULL;
	ph->capacity = ph->size = 0;
}

void HeapPush(Heap* ph, HpDataType x)
{
	assert(ph);
	if (ph->size >= ph->capacity)
	{
		int newcapacity = ph->capacity == 0 ? 4 : 2 * ph->size + 3;
		HpDataType* tmp = (HpDataType*)realloc(ph->a,sizeof(HpDataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ph->a = tmp;
		}
		ph->capacity = newcapacity;
		ph->a[ph->size] = x;
		if (ph->size % 2)
			ph->size = 2 * ph->size + 1;
		else
			ph->size = 2 * ph->size + 2;
	}
}

void HeapPop(Heap* ph)
{
	assert(ph);
	ph->size = (ph->size - 1) / 2;
}

void HeapDestory(Heap* ph)
{
	assert(ph);
	free(ph->a);
	ph->a = NULL;
	ph->size = 0;
	ph->capacity = 0;
}