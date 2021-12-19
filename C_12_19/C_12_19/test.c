#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int hash[10001];
int checkSubarraySum(int* nums, int numsSize, int k)
{
	memset(hash, 0, sizeof(hash));
	if (numsSize < 2)
		return 0;
	int* tmp = (int*)malloc(sizeof(int) * (numsSize + 1));
	tmp[0] = 0;
	for (int i = 1; i <= numsSize; i++)
	{
		tmp[i] = nums[i - 1] + tmp[i - 1];
	}
	for (int i = 2; i <= numsSize; i++)
	{
		hash[tmp[i - 2] % k]++;
		if (hash[tmp[i] % k])
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[] = {23,2,6,4,7 };
	int sz = 5;
	int ret = checkSubarraySum(arr, sz, 13);
	printf("%d ", ret);

}

//int checkSubarraySum(int* nums, int numsSize, int k)
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int tmp = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		sum += nums[i];
//		tmp = sum;
//		for (j = 0; j < i; j++)
//		{
//			
//			if (tmp % k == 0)
//				return 1;
//			tmp -= nums[j];
//		}
//	}
//	return 0;
//}

//int pivotIndex(int* nums, int numsSize)
//{
//	for (int i = 1; i < numsSize; i++)
//	{
//		nums[i] += nums[i - 1];
//	}
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] + nums[i - 1] == nums[numsSize - 1])
//			return i;
//	}
//	return -1;
//}
//
//
//int* runningSum(int* nums, int numsSize, int* returnSize)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i < numsSize; i++)
//	{
//		nums[i] += nums[i - 1];
//	}	
//	*returnSize = numsSize;
//	return nums;
//}
//
//
//int* getMaximumXor(int* nums, int numsSize, int maximumBit, int* returnSize) 
//{
//	int max = (1 << maximumBit) - 1;
//	int* ans = (int*)malloc(sizeof(int) * numsSize);
//	ans[numsSize - 1] = max - nums[0];
//	for (int i = 1; i < numsSize; i++)
//	{
//		nums[i] ^= nums[i - 1];
//		ans[numsSize - 1 - i] = max - nums[i];
//	}
//	*returnSize = numsSize;
//	return ans;
//}

//int* getMaximumXor(int* nums, int numsSize, int maximumBit, int* returnSize)
//{
//	int max = (1 << maximumBit) - 1;
//	int* ans = (int*)malloc(sizeof(int) * numsSize);
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (i == 0)
//		{
//			ans[numsSize - i - 1] = max ^ nums[i];
//			continue;
//		}
//		nums[i] = nums[i] ^ nums[i - 1];
//		ans[numsSize - i - 1] = max ^ nums[i];
//	}
//	*returnSize = numsSize;
//	return ans;
//}

//int* getMaximumXor(int* nums, int numsSize, int maximumBit, int* returnSize)
//{
//	int max = (1 << maximumBit) - 1;
//	int* ans = (int*)malloc(sizeof(int) * numsSize);
//	int p = numsSize - 1;
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (i == 0)
//			ans[i] = nums[i];
//		else
//		ans[i] = ans[i - 1] ^ nums[i];
//	}
//	for (int i = numsSize - 1; i >= 0; i--)
//	{
//		nums[i] = arr[i] ^ max;
//	}
//	*returnSize = numsSize;
//	return nums;
//}

//int* xorQueries(int* arr, int arrSize, int** queries, int queriesSize, int* queriesColSize, int* returnSize)
//{
//	int i = 0;
//	for (i = 1; i < arrSize; i++)
//		arr[i] ^= arr[i - 1];
//	int* ret = (int*)malloc(sizeof(int) * queriesSize);
//	for (i = 0; i < queriesSize; i++)
//	{
//		if (queries[i][0] < 1)
//			ret[i] = arr[queries[i][1]];	
//		else	
//			ret[i] = arr[queries[i][0] - 1] ^ arr[queries[i][1]];
//	}
//	*returnSize = queriesSize;
//	return ret;
//}

//int main()
//{
//	int arr[] = { 1,3,4,8 };
//	int a[] = { 0 ,1 };
//	int b[] = { 1,2 };
//	int c[] = { 0,3 };
//	int d[] = { 3,3 };
//	int* arr1[] = { a,b,c,d };
//	int col[] = { 2,2,2,2 };
//	int sz = 0;
//	int* ret = xorQueries(arr, 4, arr1, 4, col, &sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", ret[i]);
//	}
//	return 0;
//}
//
//int* constructArr(int* a, int aSize, int* returnSize)
//{
//	int* ret = (int*)malloc(sizeof(int) * aSize);
//	*returnSize = aSize;
//	int tmp = 1;
//	ret[0] = 1;
//	for (int i = 1; i < aSize; i++)
//	{
//		ret[i] = ret[i - 1] * a[i - 1];
//
//	}
//	for (int i = aSize - 1; i >= 0; i--)
//	{
//		ret[i] *= tmp;
//		tmp *= a[i];
//	}
//	return ret;
//}

//int* productExceptSelf(int* nums, int numsSize, int* returnSize)
//{
//    int* l = (int*)malloc(sizeof(int) * numsSize);
//    int* r = (int*)malloc(sizeof(int) * numsSize);
//    int i = 0;
//    l[0] = 1, r[numsSize - 1] = 1;
//    for (i = 1; i < numsSize; i++)
//    {
//        l[i] = l[i - 1] * nums[i - 1];
//    }
//    for (i = numsSize - 1; i >= 0; i++)
//    {
//        r[i] = r[i - 1] * nums[i - 1];
//    }
//    for (i = 0; i < numsSize; i++)
//    {
//        nums[i] = l[i] * r[i];
//    }
//    *returnSize = numsSize;
//    return nums;
//}
//
//int* productExceptSelf(int* nums, int numsSize, int* returnSize)
//{
//    *returnSize = numsSize;
//    int cnt = 0;
//    int pow = 1;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == 0)
//        {
//            cnt++;
//            continue;
//        }
//        pow *= nums[i];
//    }
//
//    if (cnt > 1)
//    {
//        memset(nums, 0, sizeof(int) * numsSize);
//        return nums;
//    }
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == 0)
//        {
//            memset(nums, 0, sizeof(int) * numsSize);
//            nums[i] = pow;
//            return nums;
//        }
//        nums[i] = pow / nums[i];
//    }
//
//    return nums;
//}
//
//int main()
//{
//	int arr[] = { 1,2,34,5 };
//	int* arr1 = arr;
//	int* arr2[] = { arr };
//	printf("%d ", sizeof(arr));
//	int arr4[3][4] = { 0 };
//	printf("%d ", sizeof(arr4[0]));
//	return 0;
//}