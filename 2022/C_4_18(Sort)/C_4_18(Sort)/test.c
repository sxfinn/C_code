#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void print(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void swap(int* s1, int* s2)
{
	int tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}


void SelectionSort1(int* arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int minid = left;
		for (int i = left; i <= right; i++)
		{
			if (arr[i] < arr[minid])
				minid = i;
		}
		swap(arr + left, arr + minid);
		left++;
	}
}

void InsertSort(int* arr, int sz)
{
	int i = 0;
	for (i = 1; i < sz; i++)
	{
		int j = 0;
		int tmp = arr[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (arr[j] < tmp)//遇到了比目标小的数，不在向前遍历，break
				break;
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = tmp;//插入到最后一个比较数据的后面
	}
}

void BubbleSort(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 0;//flag来标记是否还需要继续排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 1;//
				swap(arr + j + 1, arr + j);
			}		
		}
		if (flag == 0)//如果if依次都没进去，说明数组已经有序，直接退出
			break;
	}
}

void SelectionSort(int* arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int i = 0;
		int minid = left;
		int maxid = left;
		for (i = left + 1; i <= right; i++)
		{
			if (arr[i] > arr[maxid])
				maxid = i;
			if (arr[i] < arr[minid])
				minid = i;
		}
		if (left == maxid)
			maxid = minid;
		swap(arr + minid, arr + left);
		swap(arr + maxid, arr + right);
		left++;
		right--;
	}
}

void AdjustDown(int* arr, int sz, int root)
{
	int parent = root;
	int child = root * 2 + 1;
	while (child < sz)
	{
		if (child + 1 < sz && arr[child] < arr[child + 1])
			child++;
		if (arr[child] > arr[parent])
			swap(arr + parent, arr + child);
		else
			break;
		parent = child;
		child = parent * 2 + 1;
	}
}

void HeapSort(int* arr, int sz)
{
	for (int i = (sz - 2) / 2; i >= 0; i--)//构建堆
	{
		AdjustDown(arr, sz, i);
	}
	while (sz > 1)//排序
	{
		swap(arr, arr + sz - 1);
		sz--;
		AdjustDown(arr, sz, 0);
	}
}

void ShellSort(int* arr, int sz)
{
	for (int gap = sz / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < sz; i++)
		{
			int tmp = arr[i];
			int j = 0;
			for (j = i - gap; j >= 0; j -= gap)
			{
				if (arr[j] > tmp)				
					arr[j + gap] = arr[j];				
				else
					break;
			}
			arr[j + gap] = tmp;
		}
	}
}

// 快速排序hoare版本
//int PartSort1(int* arr, int left, int right)
//{
//	int index = left;
//	while (left < right)
//	{
//		while (left < right && arr[index] <= arr[right])
//		{
//			right--;
//		}
//		while (left < right && arr[index] >= arr[left])
//		{
//			left++;
//		}		
//		swap(arr + left, arr + right);
//	}
//	swap(arr + index, arr + left);
//	return left;
//}
//// 快速排序挖坑法
//int PartSort2(int* arr, int left, int right)
//{
//	int index = left;
//	int key = arr[index];
//	int pos = left;
//	while (left < right)
//	{
//		while (left < right && arr[right] >= key)
//			right--;
//		arr[pos] = arr[right];
//		pos = right;
//		while (left < right && arr[left] <= key)
//			left++;
//		arr[pos] = arr[left];
//		pos = left;
//	}
//	arr[pos] = key;
//	return pos;
//}
//// 快速排序前后指针法
//int PartSort3(int* arr, int left, int right)
//{
//	int index = left;
//	int slow = left + 1;
//	int fast = slow;
//	while (fast <= right)
//	{
//		if (arr[fast] < arr[index])
//		{
//			swap(arr + slow, arr + fast);
//			slow++;
//		}
//		fast++;
//	}
//	swap(arr + index, arr + slow - 1);
//	return slow - 1;
//}

void MergeSort1(int* arr, int left, int right)
{
	if (left >= right)
		return;
	int mid = (left + right) / 2;
	MergeSort1(arr, left, mid);
	MergeSort1(arr, mid + 1, right);
	int* tmp = (int*)malloc(sizeof(int) * (right - left + 1));
	int i = 0;
	int p = left;
	for (i = 0; i < right - left + 1; i++)
		tmp[i] = arr[left + i];
	i = 0;
	int j = mid + 1 - left;
	while (i <= mid - left && j <= right - left)
	{
		if (tmp[i] < tmp[j])
			arr[p++] = tmp[i++];
		else
			arr[p++] = tmp[j++];
	}
	while (i <= mid - left)
		arr[p++] = tmp[i++];
	while (j <= right - left)
		arr[p++] = tmp[j++];
	free(tmp);
}
//归并排序
void MergeSort(int* arr, int left, int right)
{
	if (left >= right)
		return;
	int mid = (left + right) / 2;
	MergeSort(arr, left, mid);
	MergeSort(arr, mid + 1, right);
	int* tmp = (int*)malloc(sizeof(int) * (right - left + 1));
	int i = left;
	int j = mid + 1;
	int p = 0;
	while (i <= mid && j <= right)
	{
		if (arr[i] < arr[j])
		{
			tmp[p++] = arr[i++];
		}
		else
		{
			tmp[p++] = arr[j++];
		}
	}
	while (i <= mid)
	{
		tmp[p++] = arr[i++];
	}
	while (j <= right)
	{
		tmp[p++] = arr[j++];
	}
	for (int i = 0; i < right - left + 1; i++)
	{
		arr[left + i] = tmp[i];
	}
	free(tmp);
}


int GetMid(int* arr, int left, int right)
{
	int mid = left + (right - left) / 2;
	if (arr[left] < arr[mid])
		swap(arr + left, arr + mid);
	if (arr[left] < arr[right])
		swap(arr + left, arr + right);
	if (arr[mid] < arr[right])
		swap(arr + mid, arr + right);
	return mid;
}
int PartSort(int* arr, int left, int right)
{
	int keyi = left;
	int key = arr[keyi];
	while (left < right)
	{
		while (left < right && arr[right] >= key)
			--right;
		while (left < right && arr[left] <= key)
			++left;
		swap(arr + left, arr + right);
	}
	swap(arr + keyi, arr + left);
	return left;
}
int PartSort1(int* arr, int left, int right)
{
	int keyi = GetMid(arr, left, right);
	//int keyi = left + rand() % (right - left + 1);
	int key = arr[keyi];
	swap(arr + keyi, arr + left);
	keyi = left;
	while (left < right)
	{
		while (left < right && arr[right] >= key)
			--right;
		while (left < right && arr[left] <= key)
			++left;
		swap(arr + left, arr + right);
	}
	swap(arr + keyi, arr + left);
	return left;
}
int PartSort2(int* arr, int left, int right)
{
	//int keyi = rand() % (right - left + 1) + left;	
	int keyi = GetMid(arr, left, right);
	//int keyi = left;
	swap(arr + left, arr + keyi);
	int key = arr[left];
	int pit = left;
	while (left < right)
	{
		while (left < right && arr[right] >= key)
			right--;
		arr[pit] = arr[right];
		pit = right;
		while (left < right && arr[left] <= key)
			left++;
		arr[pit] = arr[left];
		pit = left;
	}
	arr[pit] = key;
	return pit;
}
int PartSort3(int* arr, int left, int right)
{
	//int keyi = rand() % (right - left + 1) + left;
	int keyi = GetMid(arr, left, right);
	swap(arr + left, arr + keyi);
	int prev = left;
	int cur = left + 1;
	int key = arr[left];
	while (cur <= right)
	{
		if (arr[cur] <= key && arr[++prev] != arr[cur])//这里也可以写成++prev != cur
			swap(arr + prev, arr + cur);
		++cur;
	}
	swap(arr + prev, arr + left);
	return prev;
}

void PartSort4(int* arr, int left, int right)
{

}
//快排



void QuickSort1(int* arr, int left, int right)
{
	if (left >= right)
		return;
	if (right - left + 1 <= 8)
	{
		InsertSort(arr + left, right - left + 1);
		return;
	}
	int pos = PartSort3(arr, left, right);
	QuickSort1(arr, left, pos - 1);
	QuickSort1(arr, pos + 1, right);
}

//void QuickSort(int* arr, int left, int right)
//{
//	if (left >= right)
//		return;
//	srand((unsigned int)0);
//	int pos = PartSort3(arr, left, right);
//	QuickSort(arr, left, pos - 1);
//	QuickSort(arr, pos + 1, right);
//}



//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//		swap(&a, &b);
//	if (a < c)
//		swap(&a, &c);
//	if (b < c)
//		swap(&b, &c);
//	printf("%d %d %d ", a, b, c);
//	return 0;
//}
int main()
{
	int arr[] = { 9,8,7,6,5,4,23,2,1,};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//BubbleSort(arr, sz);
	//SelectionSort1(arr, sz);
	HeapSort(arr,sz);
	//ShellSort(arr, sz);
	//QuickSort1(arr, 0, sz - 1);
	//MergeSort1(arr, 0, sz - 1);
	print(arr, sz);
	return 0;
}