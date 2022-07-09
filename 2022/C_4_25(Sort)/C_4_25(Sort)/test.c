#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
void print(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void _MergeSort(int* arr, int left, int right, int* tmp)
{
	if (left >= right)
		return;
	int mid = left + (right - left) / 2;
	_MergeSort(arr, left, mid, tmp);
	_MergeSort(arr, mid + 1, right, tmp);
	int begin1 = left;
	int begin2 = mid + 1;
	int index = left;
	while (begin1 <= mid && begin2 <= right)
	{
		if (arr[begin1] < arr[begin2])
		{
			tmp[index++] = arr[begin1++];
		}
		else
		{
			tmp[index++] = arr[begin2++];
		}
	}
	while (begin1 <= mid)
	{
		tmp[index++] = arr[begin1++];
	}
	while (begin2 <= right)
	{
		tmp[index++] = arr[begin2++];
	}
	for (int i = left; i < index; i++)
	{
		arr[i] = tmp[i];
	}
}

void MergeSort(int* arr, int sz)
{
	int* tmp = (int*)malloc(sizeof(int) * sz);
	if (!tmp)
		return;
	_MergeSort(arr, 0, sz - 1, tmp);
}

void MergeSortNonR(int* arr, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	assert(tmp);
	int gap = 1;
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2 * gap)
		{
			int begin1 = i;
			int end1 = begin1 + gap - 1;
			int begin2 = end1 + 1;
			int end2 = begin2 + gap - 1;
			int index = i;
			if (end1 >= n)
			{
				end1 = n - 1;
				begin2 = n;
				end2 = n - 1;
			}
			else if (begin2 >= n)
			{
				begin2 = n;
				end2 = n - 1;
			}
			else if (end2 >= n)
			{
				end2 = n - 1;
			}
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (arr[begin1] < arr[begin2])
					tmp[index++] = arr[begin1++];
				else
					tmp[index++] = arr[begin2++];
			}
			while(begin1 <= end1)
				tmp[index++] = arr[begin1++];
			while (begin2 <= end2)
				tmp[index++] = arr[begin2++];		
		}
		memcpy(arr, tmp, sizeof(int) * n);
		gap *= 2;
	}
}

void CountSort(int* a, int n)
{
	int min = a[0];
	int max = min;
	for (int i = 0; i < n; i++)
	{
		if (min > a[i])
			min = a[i];
		if (max < a[i])
			min = a[i];
	}
	int sz = max - min + 1;
	int* countarry = (int*)malloc(sizeof(int) * sz);
	assert(countarry);
	memset(countarry, 0, sizeof(int) * sz);
	for (int i = 0; i < n; i++)
	{
		countarry[a[i] - min]++;
	}
	int index = 0;
	for (int i = 0; i < sz; i++)
	{
		while (countarry[i] > 0)
		{
			a[index++] = i + min;
			countarry[i]--;
		}
	}
	free(countarry);
}

#include <stdio.h>
#include <string.h>

#define MAXN  100005
#define MAXT 8
#define BASE 10
//const int MAXN = 100005;          // (1) 排序数组的元素最大个数
//const int MAXT = 8;               // (2) 排序元素的数字的最大位数
//const int BASE = 10;              // (3) 排序元素的进制，这里为十进制；
int PowOfBase[MAXT];              // (4) Powofbase[i]代表BASE的主次幂
int RadixBucket[BASE][MAXN];      // (5) Radixbucket[i]代表第i个队列
int RadixBucketTop[BASE];         // (6) Radixbuckettop[i]代表第i个队列的尾指针

void InitPowOfBase()
{
	int i;
	PowOfBase[0] = 1;
	for (i = 1; i < MAXT; ++i)
	{
		PowOfBase[i] = PowOfBase[i - 1] * BASE;   // (7)初始化BASE的主次幂
	}
}

int getRadix(int value, int pos)
{
	return value / PowOfBase[pos] % BASE;            // (8)计算 value 的pos位的值
}

void RadixSort(int n, int* a)
{                                   // (9)void Radixsort(intn,int*a)为基数排序的实
									//现，代表对a[]数组进行升序排序
	int i, j, top = 0, pos = 0;
	while (pos < MAXT)
	{                                           // (10)进行MAXT轮迭代；
		memset(RadixBucketTop, 0, sizeof(RadixBucketTop));
		// (11)迭代前清空队列，只需要将队                                                         //列尾指针置零即可
		for (i = 0; i < n; ++i)
		{
			int rdx = getRadix(a[i], pos);
			RadixBucket[rdx][RadixBucketTop[rdx]++] = a[i];// (12)入队操作
		}
		top = 0;
		for (i = 0; i < BASE; ++i)
		{
			for (j = 0; j < RadixBucketTop[i]; ++j)
			{
				a[top++] = RadixBucket[i][j];        // (13)将队列中的元素按顺序塞回原数组
			}
		}
		++pos;
	}
}

int a[MAXN];

int main()
{
	InitPowOfBase();
	int a[] = { 98,7,6,5,3,3,1,678,23,6,78,32,3,65,};
	int n = sizeof(a) / sizeof(int);
	
	
		//Input(n, a);
		RadixSort(n, a);
		//Output(n, a);
	
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}