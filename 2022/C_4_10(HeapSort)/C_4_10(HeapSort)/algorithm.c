#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void AdjustDown(int* a, int size, int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child < size)
	{
		if (child + 1 < size && a[child] < a[child + 1])
			child++;
		if (a[parent] < a[child])
			swap(a + parent, a + child);
		else
			break;
		parent = child;
		child = child * 2 + 1;
	}
}

void HeapPop(int* a, int sz)
{
	swap(a, a + sz - 1);
	AdjustDown(a, sz - 1, 0);
}
void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int lastStoneWeight(int* stones, int stonesSize)
{
	for (int i = (stonesSize - 2) / 2; i >= 0; i--)
	{
		AdjustDown(stones, stonesSize, i);
	}
	while (stonesSize > 1)
	{
		int parent = 0;
		int child = parent * 2 + 1;
		if (child + 1 < stonesSize && stones[child] < stones[child + 1])
		{
			child++;
		}
		stones[parent] = stones[parent] - stones[child];
		stones[child] = 0;
		AdjustDown(stones, stonesSize, child);
		AdjustDown(stones, stonesSize, 0);
		//swap(stones + 0, stones + stonesSize - 1);
		stonesSize--;
		//AdjustDown(stones, stonesSize, 0);
	}
	return stones[0];
}

//int lastStoneWeight(int* stones, int stonesSize)
//{
//	int max1 = 0;
//	int max2 = 0;
//	for (int i = 0; i < stonesSize; i++)
//	{
//		if (stones[i] > max1)
//		{
//			max2 = max1;
//			max1 = stones[i];
//		}
//		else if (stones[i] > max2)
//			max2 = stones[i];
//		max1 = max1 - max2;
//		max2 = 0;
//	}
//	return max1;
//}



typedef struct
{
	int* a;
	int size;
	int capacity;
} KthLargest;

void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void AdjustDown(int* a, int size, int root)
{
	int parent = root;
	int child = parent * 2 + 1;
	while (child < size)
	{
		if (child + 1 < size && a[child] > a[child + 1])
			child++;
		if (a[parent] > a[child])
			swap(a + parent, a + child);
		else
			break;
		parent = child;
		child = child * 2 + 1;
	}
}

void HeapPop(int* a, int sz)
{
	swap(a, a + sz - 1);
	AdjustDown(a, sz - 1, 0);
}

KthLargest* kthLargestCreate(int k, int* nums, int numsSize)
{
	KthLargest* pk = (KthLargest*)malloc(sizeof(KthLargest));
	assert(pk);
	int capacity = 0;
	if (numsSize > k)
	{	
		capacity = numsSize;
	}
	else
	{
		nums = (int*)realloc(nums,sizeof(int) * k);
		for (int i = numsSize; i < k; i++)
		{
			nums[i] = -10001;
		}
		capacity = k;
	}
	for (int i = (capacity - 2) / 2; i >= 0; i--)
	{
		AdjustDown(nums, capacity, i);
	}
	int n = capacity;
	for (int i = 0; i < capacity - k; i++)
	{
		HeapPop(nums, n);
		n--;
	}
	pk->a = nums;
	pk->size = k;
	return pk;
}

int kthLargestAdd(KthLargest* obj, int val)
{
	if (obj->a[0] < val)
	{
		obj->a[0] = val;
		AdjustDown(obj->a, obj->size, 0);
	}
	return obj->a[0];
}

void kthLargestFree(KthLargest* obj) 
{
	free(obj->a);
	free(obj);
}

int main()
{
	int* arr = (int*)malloc(sizeof(int) * 4);
	arr[0] = 4;
	arr[1] = 5;
	arr[2] = 8;
	arr[3] = 2;
	KthLargest* ret = kthLargestCreate(3, arr, 4);
	int n = kthLargestAdd(ret, 3);
	printf("%d ", n);
	n = kthLargestAdd(ret, 5);
	printf("%d", n);
	return 0;
}