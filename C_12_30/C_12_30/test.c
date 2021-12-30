#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void shell_sort(int* arr, int sz)
{
	int gap = 0;
	for (gap = sz / 2; gap >= 1; gap /= 2)
	{
		int i = 0;
		for (i = gap; i < sz; i++)
		{
			int tmp = arr[i];
			int j = 0;
			for (j = i; j >= gap; j -= gap)
			{
				if (tmp < arr[j - gap])
					arr[j] = arr[j - gap];
				else
					break;
			}
			arr[j] = tmp;
		}
	}
}
//void buble_sort(int* arr, int sz)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				swap(arr + j + 1,arr + j);
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//}
//
//void insert_sort(int arr[], int sz)
//{
//	for (int i = 1; i < sz; i++)
//	{
//		int tmp = arr[i];
//		int left = 0;
//		int right = i - 1;
//		int mid = 0;
//		while (left <= right)
//		{
//			mid = (left + right) / 2;
//			if (tmp < arr[mid])
//				right = mid - 1;
//			else
//				left = mid + 1;
//		}
//		for (int j = i; j > left; j--)
//		{
//			arr[j] = arr[j - 1];
//		}
//		arr[left] = tmp;
//		
//	}
//}

//void insert_sort(int arr[], int sz)
//{
//	for (int i = 1; i < sz; i++)
//	{
//		int tmp = arr[i];
//		int j = 0;
//		for (j = i; j > 0; j--)
//		{
//			if (tmp < arr[j - 1])
//			{
//				arr[j] = arr[j - 1];
//			}
//			else
//				break;
//		}
//		arr[j] = tmp;
//	}
//}

int main()
{
	int arr[15] = {3,56,67,23,67,79,23,57,89,23,6,87,23,57,68 };
	
	int sz = sizeof(arr) / sizeof(arr[0]);
	//insert_sort(arr, sz);
	//buble_sort(arr, sz);
	shell_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}