//#include<stdio.h>
//#include<stdlib.h>
//
//void swap(int* s1, int* s2)
//{
//	int tmp = *s1;
//	*s1 = *s2;
//	*s2 = tmp;
//}
//void AdjustUp(int* a, int pos)
//{
//	int child = pos;
//	int parent = (child - 1) / 2;
//	while (child > 0)
//	{
//		if (a[child] > a[parent])
//		{
//			swap(a + child, a + parent);
//			child = parent;
//			parent = (parent - 1) / 2;
//		}
//		else
//			break;
//	}
//}
//
//void AdjustDown(int* a, int size, int root)
//{
//	int parent = root;
//	int child = root * 2 + 1;
//	while (child < size)
//	{
//		if (child + 1 < size && a[child] > a[child + 1])
//			child++;
//		if (a[child] < a[parent])
//		{
//			swap(a + child, a + parent);
//			parent = child;
//			child = child * 2 + 1;
//		}
//		else
//			break;
//	}
//}
//
//void test(int* a, int sz)
//{
//	for (int i = sz - 1; i > 0; i--)
//	{
//		int pos = i;
//		while (pos > 0)
//		{
//			if (a[pos] < a[pos - 1])
//			{
//				swap(a + pos, a + pos - 1);				
//			}
//			pos--;
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
////错误写法
//void HeapSort(int* a, int sz)
//{
//	for (int i = sz - 1; i > 0; i--)
//	{
//		int child = i;
//		int parent = (i - 1) / 2;
//		while (child > 0)
//		{
//			if (a[child] < a[parent])
//			{
//				swap(a + child, a + parent);
//			}
//			child = parent;
//			parent = (parent - 1) / 2;
//		}
//	}
//	/*for (int i = sz - 1; i > 0; i--)
//	{
//		swap(a, a + i);
//		AdjustDown(a, i, 0);
//	}*/
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}

//w

//向上
//void HeapSort(int* a, int sz)
//{
//	for (int i = 1; i < sz; i++)
//	{
//		AdjustUp(a, i);
//	}
//	for (int i = sz - 1; i > 0; i--)
//	{
//		swap(a, a + i);
//		AdjustDown(a, i, 0);
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
////向下
//void HeapSort1(int* a, int sz)
//{
//	int i = 0;
//	for (i = sz - 2; i >= 0; i--)
//	{
//		AdjustDown(a, sz, i);
//	}
//	for (int i = sz - 1; i > 0; i--)
//	{
//		swap(a, a + i);
//		AdjustDown(a, i, 0);
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//
//void HeapSortTopK(int* a, int n, int k)
//{
//	int* ret = (int*)malloc(sizeof(int) * k);
//	for (int i = 0; i < k; i++)
//	{
//		ret[i] = a[i];
//	}
//	HeapSort1(ret, k);
//	for (int i = k; i < n; i++)
//	{
//		if (a[i] > ret[0])
//		{
//			ret[0] = a[i];
//			AdjustDown(ret, k, 0);
//		}
//	}
//	for (int i = 0; i < k; i++)
//	{
//		printf("%d ", ret[i]);
//	}
//
//}
//
//int main()
//{
//	//int arr[] = { 1,2,3,4,6,7,8,9,10,-1,0 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//HeapSort(arr, sz);
//	int* arr = (int*)malloc(sizeof(int) * 10000);
//	for (int i = 0; i < 10000; i++)
//	{
//		arr[i] = rand() % 100000;
//	}
//	for (int i = 0; i < 1000; i += 100)
//	{
//		arr[i] = 100000 + i;
//	}
//	HeapSortTopK(arr, 10000, 10);
//	return 0;
//}