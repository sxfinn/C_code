#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

//int cmp(const void* p1, const void* p2)
//{
//    return (*(int*)p1) - (*(int*)p2);
//}
//int numRescueBoats(int* people, int peopleSize, int limit)
//{
//    int cnt = 0;
//    qsort(people, peopleSize, sizeof(int), cmp);
//    int i = 0;
//    int j = 0;
//    for (i = 0, j = peopleSize - 1; i < j; )
//    {
//        if (people[j] < limit)
//        {
//            if (people[i] + people[j] <= limit)
//                i++;
//            cnt++;
//            j--;
//        }
//        else
//        {
//            j--, cnt++;
//        }       
//    }
//    if (i == j)
//        cnt++;
//    return cnt;
//}
//int main()
//{
//    int arr[] = { 1,2,2,3 };
//    int ret = numRescueBoats(arr, 4, 3);
//    printf("%d ", ret);
//    return 0;
//}
//void merge(int* A, int ASize, int m, int* B, int BSize, int n)
//{
//    if (m == 0)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            A[i] = B[i];
//        }
//        return;
//    }
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int k = B[i];
//        int j = 0;
//        for (j = m - 1; j >= 0; j--)
//        {
//            if (B[i] < A[j])
//            {
//                A[j + 1] = A[j];
//            }
//            else
//                break;
//        }
//        A[j + 1] = k;
//        m++;
//    }
//}
//int main()
//{
//    int arr1[] = { 1,2,3,0,0,0 };
//    int arr2[] = { 2,5,6 };
//    merge(arr1, 0, 3, arr2, 0, 3);
//    for (int i = 0; i < 6; i++)
//    {
//        printf("%d ", arr1[i]);
//    }
//    return 0;
//}
//void merge_sort(int arr[], int l, int r)
//{
//	if (l >= r)
//		return;
//	int* tmp = (int*)malloc(sizeof(int) * (r - l + 1));
//	int mid = (l + r) / 2;
//	merge_sort(arr, l, mid);
//	merge_sort(arr, mid + 1, r);
//	int p = 0;
//	int pl = l, pr = mid + 1;
//	while (pl <= mid || pr <= r)
//	{
//		if (pl > mid)
//			tmp[p++] = arr[pr++];
//		else if (pr > r)
//			tmp[p++] = arr[pl++];
//		else
//		{
//			if (arr[pl] > arr[pr])
//				tmp[p++] = arr[pr++];
//			else
//				tmp[p++] = arr[pl++];
//		}
//	}
//	for (int i = 0; i < r - l + 1; i++)
//	{
//		arr[l + i] = tmp[i];
//	}
//	free(tmp);
//}
//int containsDuplicate(int* nums, int numsSize)
//{
//	int l = 0, r = numsSize - 1;
//	merge_sort(nums, l, r);
//	for (int i = 0; i < numsSize - 1; i++)
//	{
//		if (nums[i] == nums[i + 1])
//			return 1;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr[] = { 1,4,6,7,0,7,42,23,13,78 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = containsDuplicate(arr, sz);
//	printf("%d ", ret);
//	return 0;
//}
//void merge_sort(int arr[], int l, int r)
//{
//	if (l >= r)
//		return;
//	int* tmp = (int*)malloc(sizeof(int) * (r - l + 1));
//	int mid = (l + r) >> 1;
//	merge_sort(arr, l, mid);
//	merge_sort(arr, mid + 1, r);
//	int p = 0;
//	int pl = l;
//	int pr = mid + 1;
//	while (pl <= mid || pr <= r)
//	{
//		if (pl > mid)
//			tmp[p++] = arr[pr++];
//		else if (pr > r)
//			tmp[p++] = arr[pl++];
//		else
//		{
//			if (arr[pr] > arr[pl])
//				tmp[p++] = arr[pl++];
//			else
//				tmp[p++] = arr[pr++];
//		}
//	}
//	for (int i = 0; i < r - l + 1; i++)
//	{
//		arr[l + i] = tmp[i];
//	}
//}
//int maximumGap(int* nums, int numsSize)
//{
//	if (numsSize < 2)
//		return 0;
//	int max = -1;
//	int l = 0, r = numsSize - 1;
//	merge_sort(nums, l, r);
//	for (int i = 1; i < numsSize; i++)
//	{
//		if (nums[i] - nums[i - 1] > max)
//		{
//			max = nums[i] - nums[i - 1];
//		}
//	}
//	return max;
//}


//¹é²¢ÅÅÐò
//void merge_sort(int arr[], int l ,int r)
//{
//	if (l >= r)
//		return;
//	int* tmp = (int*)malloc(sizeof(int) * (r - l + 1));
//	int mid = (l + r) / 2;
//	merge_sort(arr, l, mid);
//	merge_sort(arr, mid + 1, r);
//	int p = 0;
//	int pl = l;
//	int pr = mid + 1;
//	while (pl <= mid || pr <= r)
//	{
//		if (pl > mid)
//		{
//			tmp[p++] = arr[pr++];
//		}
//		else if (pr > r)
//		{
//			tmp[p++] = arr[pl++];
//		}
//		else
//		{
//			if (arr[pl] > arr[pr])
//			{
//				tmp[p++] = arr[pr++];
//			}
//			else
//			{
//				tmp[p++] = arr[pl++];
//			}
//		}
//		
//	}
//	for (int i = 0; i < r - l + 1; i++)
//	{
//		arr[l + i] = tmp[i];
//	}
//	free(tmp);
//}
//int main()
//{
//	int arr[] = { 2,6,8,3,7,0,1,3,7,5,68, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int l = 0;
//	int r = sz - 1;
//	merge_sort(arr,l, r );
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}