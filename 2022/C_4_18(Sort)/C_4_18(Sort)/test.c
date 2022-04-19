#include<stdio.h>

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
		if (child + 1 < sz && arr[child] > arr[child + 1])
			child++;
		if (arr[child] < arr[parent])
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
int PartSort1(int* arr, int left, int right)
{
	int index = left;
	while (left < right)
	{
		while (left < right && arr[index] <= arr[right])
		{
			right--;
		}
		while (left < right && arr[index] >= arr[left])
		{
			left++;
		}		
		swap(arr + left, arr + right);
	}
	swap(arr + index, arr + left);
	return left;
}
// 快速排序挖坑法
int PartSort2(int* arr, int left, int right)
{
	int index = left;
	int key = arr[index];
	int pos = left;
	while (left < right)
	{
		while (left < right && arr[right] >= key)
			right--;
		arr[pos] = arr[right];
		pos = right;
		while (left < right && arr[left] <= key)
			left++;
		arr[pos] = arr[left];
		pos = left;
	}
	arr[pos] = key;
	return pos;
}
// 快速排序前后指针法
int PartSort3(int* arr, int left, int right)
{
	int index = left;
	int slow = left + 1;
	int fast = slow;
	while (fast <= right)
	{
		if (arr[fast] < arr[index])
		{
			swap(arr + slow, arr + fast);
			slow++;
		}
		fast++;
	}
	swap(arr + index, arr + slow - 1);
	return slow - 1;
}

//快排
void QuickSort(int* arr, int left, int right)
{
	if (left >= right)
		return;
	int index = left;
	int start = left;
	int end = right;
	int pos = PartSort2(arr, left, right);
	QuickSort(arr, start, pos - 1);
	QuickSort(arr, pos + 1, end);
}

void SelectionSort(int* arr, int sz)
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

int main()
{
	int arr[] = { 3, 5, 3, 0, 8, 6, 1, 5, 8, 6, 2, 4, 9, 4, 7, 0, 1, 8, 9, 7, 3, 1, 2, 5, 9, 7, 4, 0, 2, 6};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//BubbleSort(arr, sz);
	SelectionSort1(arr, sz);
	//HeapSort(arr,sz);
	//ShellSort(arr, sz);
	//QuickSort(arr, 0, sz - 1);
	print(arr, sz);
	return 0;
}