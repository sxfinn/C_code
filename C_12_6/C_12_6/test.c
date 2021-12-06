#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>

#include<stdio.h>

#include<string.h>
int singleNumber(int* nums, int numsSize)
{

}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int hash[1001];
int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize)
{
    int* ret = (int*)malloc(sizeof(int) * arr1Size);
    memset(ret, 0, sizeof(int) * arr1Size);
    int i = 0;
    int p = 0;
    for (i = 0; i < arr1Size; i++)
    {
        hash[arr1[i]]++;
    }
    for (i = 0; i < arr2Size; i++)
    {
        while (hash[arr2[i]])
        {
            ret[p++] = arr2[i];
            hash[arr2[i]]--;
        }
    }
    for (i = 0; i < 1001; i++)
    {
        while (hash[i])
        {
            ret[p++] = i;
            hash[i]--;
            if (p == arr1Size)
                break;
        }
    }
    *returnSize = arr1Size;
    return ret;
}


//int* findErrorNums(int* nums, int numsSize, int* returnSize) 
//{
//	int* ret = (int*)malloc(sizeof(int) * 2);
//	int i = 0;
//	int xorSum = 0;
//	for (i = 1; i <= numsSize; i++)
//	{
//		xorSum ^= i;
//		xorSum ^= nums[i - 1];
//	}
//	int tmp = xorSum & (xorSum - 1);
//	int lowbit = xorSum - tmp;
//	int num1 = 0, num2 = 0;
//	for (i = 1; i <= numsSize; i++)
//	{
//		if ((i & lowbit) == 0)
//		{
//			num1 ^= i;
//		}
//		else
//		{
//			num2 ^= i;
//		}
//		if ((nums[i - 1] & lowbit) == 0)
//		{
//			num1 ^= nums[i - 1];
//		}
//		else
//		{
//			num2 ^= nums[i - 1];
//		}
//	}
//	for (i = 0; i < numsSize; i++)
//	{
//		if (nums[i] == num1)
//		{
//			ret[0] = num1;
//			ret[1] = num2;
//			return ret;
//		}
//	}
//	ret[0] = num2;
//	ret[1] = num1;
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,2,4 };
//	int* ret = findErrorNums(arr, 4, 0);
//	for (int i = 0; i < 2; i++)
//	{
//		printf("%d ", ret[i]);
//	}
//	return 0;
//}
//int cnt[10001];
//int missingNumber(int* nums, int numsSize)
//{
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        cnt[nums[i]] = 1;
//    }
//    for (i = 0; i <= numsSize; i++)
//    {
//        if (cnt[i] != 1)
//            break;
//    }
//    return i;
//}
//
//int main()
//{
//    int arr[] = { 0 };
//    int ret = missingNumber(arr, 1);
//    printf("%d ", ret);
//    return 0;
//}
//int count[1000];
////¼ÆÊýÅÅÐò
//int main()
//{
//	memset(count, 0, sizeof(int) * 1000);
//	int arr[] = { 3,4,456,7,2,42,78,79,13,1,1,1,1 };
//	int arrSize = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < arrSize; i++)
//	{
//		count[arr[i]]++;
//	}
//	int p = 0;
//	for (int i = 0; i < 1000; i++)
//	{
//		while (count[i])
//		{
//			arr[p++] = i;
//			count[i]--;
//		}
//		if (p == arrSize)
//			break;
//	}
//	for (int i = 0; i < arrSize; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int* sortArray(int* nums, int numsSize, int* returnSize)
//{
//
//}
//
////Ï£¶ûÅÅÐò
//void shellsort(int arr[], int numsSize)
//{
//	int gap = 0;
//	int i = 0;
//	int j = 0;
//	for (gap = numsSize; gap > 0; gap /= 2)
//	{
//		for (i = gap; i < numsSize; i++)
//		{
//			int tmp = arr[i];
//			for (j = i; j >= gap; j -= gap)
//			{
//				if (arr[j - gap] > tmp)
//				{
//					arr[j] = arr[j - gap];
//				}
//				else
//					break;
//			}
//			arr[j] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3,56,3,11,4,57,8,9,13, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	shellsort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1) - (*(int*)p2);
//}
//
//int minIncrementForUnique(int* nums, int numsSize)
//{
//	int cnt = 0;
//	qsort(nums, numsSize, sizeof(int), cmp);
//	int i = 0;
//	for (i = 0; i < numsSize - 2; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j < numsSize - 1; j++)
//		{
//			int l = j + 1;
//			int r = numsSize - 1;
//			int k = j;
//			while (l <= r)
//			{
//				int mid = (l + r) / 2;
//				if (nums[mid] < nums[i] + nums[j])
//				{
//					k = mid;
//					l = mid + 1;
//				}
//				else
//				{
//					r = mid - 1;
//				}
//			}
//			cnt += k - j;
//		}
//	}
//	return cnt;
//}

//int cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1) - (*(int*)p2);
//}
//int minIncrementForUnique(int* nums, int numsSize)
//{
//	int cnt = 0;
//	qsort(nums, numsSize, sizeof(int), cmp);
//	for (int i = 0; i < numsSize - 1; ++i)
//	{
//		if (nums[i] >= nums[i + 1])
//		{
//			cnt += nums[i] - nums[i + 1] + 1;
//			nums[i + 1] = nums[i] + 1;
//		}
//	}
//	return cnt;
//}
//int minOperations(int* nums, int numsSize)
//{
//    int i = 0;
//    int cnt = 0;
//    for (i = 0; i < numsSize - 1; i++)
//    {
//        if (nums[i] >= nums[i + 1])
//        {
//            cnt += nums[i] - nums[i + 1] + 1;
//            nums[i + 1] = nums[i] + 1;
//        }
//    }
//    return cnt;
//}
//int main()
//{
//    int nums[] = { 1,2,2 };
//    int ret = minOperations(nums, 3);
//    printf("%d ", ret);
//    
//    return 0;
//}
//int cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1) - (*(int*)p2);
//}
//int findContentChildren(int* g, int gSize, int* s, int sSize)
//{
//	qsort(g, gSize, sizeof(int), cmp);
//	qsort(s, sSize, sizeof(int), cmp);
//	int i = gSize - 1;
//	int cnt = 0;
//	int j = sSize - 1;
//	while (j >= 0 && i >= 0)
//	{
//		if (g[i] <= s[i])
//		{
//			cnt++;
//			j--;
//			i--
//		}
//		i--;
//	}
//	return cnt;
//}
//int cmp(const void* a, const void* b) {
//	return *(int*)a - *(int*)b;
//}
//
//int findContentChildren(int* g, int gSize, int* s, int sSize) {
//	int i, j, ans;
//	qsort(g, gSize, sizeof(int), cmp);    // (1)
//	qsort(s, sSize, sizeof(int), cmp);
//	i = gSize - 1, j = sSize - 1;         // (2)
//	ans = 0;
//	while (i >= 0 && j >= 0) {
//		if (s[j] >= g[i]) {                // (3)
//			--i, --j;
//			++ans;
//		}
//		else
//			--i;                          // (4)
//	}
//	return ans;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3 };
//	int arr1[] = { 1,1, };
//	int ret = findContentChildren(arr, 3, arr1, 2);
//	printf("%d ", ret);
//	return 0;
//}
//void mergesort(int arr[], int l, int r)
//{
//    if (l >= r)
//        return;
//    int* tmp = (int*)malloc(sizeof(int) * (r - l + 1));
//    int mid = (l + r) >> 1;
//    mergesort(arr, l, mid);
//    mergesort(arr, mid + 1, r);
//    int p = 0;
//    int pl = l, pr = mid + 1;
//    while (pl <= mid || pr <= r)
//    {
//        if (pl > mid)
//            tmp[p++] = arr[pr++];
//        else if (pr > r)
//            tmp[p++] = arr[pl++];
//        else
//        {
//            if (arr[pl] > arr[pr])
//                tmp[p++] = arr[pr++];
//            else
//                tmp[p++] = arr[pl++];
//        }
//    }
//    for (int i = 0; i < r - l + 1; i++)
//    {
//        arr[l + i] = tmp[i];
//    }
//    free(tmp);
//}
//int main()
//{
//    int arr[] = { 3,5,7, };
//    int sz = sizeof(arr) / sizeof(int);
//    mergesort(arr, 0, sz - 1);
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//int maxProductDifference(int* nums, int numsSize)
//{
//    int max1 = 0, max2 = 0;
//    int min1 = 10000, min2 = 10000;
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (nums[i] > max1)
//        {
//            max2 = max1;
//            max1 = nums[i];
//        }
//        else if(nums[i] <= max1 && nums[i] > max2)
//        {
//            max2 = nums[i];
//        }
//        if (nums[i] < min1)
//        {
//            min2 = min1;
//            min1 = nums[i];
//        }
//        else if (nums[i] >= min1 && nums[i] < min2)
//        {
//            min2 = nums[i];
//        }
//        
//    }
//    return max1 * max2 - min1 * min2;
//}
//
//int main()
//{
//    int arr[] = { 10,10,10,10 };
//    int ret = maxProductDifference(arr, 4);
//    printf("%d ", ret);
//    return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9};
//	printf("%p\n", arr + 1);
//	printf("%p\n", *(arr + 1));
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	printf("%d ", p[1]);
//	return 0;
//}