#include"heap.h"
//两种原地构建堆的方法
void HeapSort(int* a, int sz)
{
	//向上排的堆
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int child = i;
		int parent = (i - 1) / 2;
		while (child > 0)
		{
			if (a[child] < a[parent])
				swap(a + child, a + parent);
			else
				break;
			child = parent;
			parent = (parent - 1) / 2;
		}
	}
}

void HeapSort1(int* a, int sz)
{
	//构建堆
	for (int i = (sz - 2) / 2; i >= 0; i--)
	{
		int parent = i;
		int child = 2 * parent + 1;
		while (child < sz)
		{
			if (child + 1 < sz && a[child] > a[child + 1])
			{
				child++;
			}
			if (a[parent] > a[child])
				swap(a + child, a + i);
			else
				break;
			parent = child;
			child = child * 2 + 1;
		}
	}
}
//void test1()
//{
//	Heap h;
//	HeapInit(&h);
//	int arr[] = { 2,5,8,2,2,7,90,34 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		HeapPush(&h, arr[i]);
//	}
//	/*for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", h.a[i]);
//	}*/
//	for (int i = 0; i < sz; i++)
//	{
//		int ret = HeapTop(&h);
//		arr[i] = ret;
//		HeapPop(&h);
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	test1();
//	return 0;
//}