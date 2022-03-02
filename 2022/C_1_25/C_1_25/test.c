#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

typedef unsigned int uint;


int* productExceptSelf(int* nums, int numsSize, int* returnSize)
{
	int* l = (int*)malloc(sizeof(int) * numsSize);
	int* r = (int*)malloc(sizeof(int) * numsSize);
	l[0] = 1, r[numsSize - 1] = 1;
	for (int i = 1; i < numsSize; i++)
	{
		l[i] = l[i - 1] * nums[i - 1];
	}
	for (int i = numsSize - 2; i >= 0; i++)
	{
		r[i] =  r[i + 1] * nums[i + 1];
	}
	for (int i = 0; i < numsSize; i++)
	{
		nums[i] = l[i] * r[i];
	}
	*returnSize = numsSize;
	return nums;
}


int is_div(int n)
{
	int tmp = n;
	int a = 0;
	while (tmp)
	{
		a = tmp % 10;
		if (n % a != 0 || a == 0)
			return 0;
		tmp /= 10;
	}
	return 1;
}

int* selfDividingNumbers(int left, int right, int* returnSize)
{
	int* ret = (int*)malloc(sizeof(int) * (right - left + 1));
	int p = 0;
	int i = 0;
	for (i = left; i <= right; i++)
	{
		if (is_div(i))
		{
			ret[p++] = i;
		}
	}
	return ret;
}


//int cmp(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//
//int majorityElement(int* nums, int numsSize)
//{
//	qsort(nums, numsSize, sizeof(int), cmp);
//	return nums[numsSize / 2];
//}
//
//int main()
//{
//	int a[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 }, * p[4], i;
//	for (i = 0; i < 4; i++)
//		p[i] = &a[i * 3];
//	printf("%d\n", p[3][2]);
//	return 0;
//}
//int a[10] = { 0 };
//bool hash[128];
//int main()
//{
//	memset(hash, 0, sizeof(bool) * 128);
//	char arr[501] = { 0 };
//	scanf("%s", arr);
//	int n = strlen(arr);
//	for (int i = 0; i < n; i++)
//	{
//		hash[arr[i]] = true;
//	}
//	int cnt = 0;
//	for (int i = 0; i < 128; i++)
//	{
//		if (hash[i])
//			cnt++;
//	}
//	printf("%d", cnt);
//	return 0;
//}
//
//int pivotIndex(int* nums, int numsSize)
//{
//	int sum = 0;
//	int tmp = 0;
//	for (int i = 0; i < numsSize; i++)
//		sum += nums[i];
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (2 * tmp + nums[i] == sum)
//			return i;
//		tmp += nums[i];
//	}
//	return -1;
//}


//int cmp(const void* a, const void* b)
//{
//	return *(char*)a - *(char*)b;
//}
//
//int main()
//{
//	char arr[1001] = { 0 };
//	while (~scanf("%s", arr))
//	{
//		int n = strlen(arr);
//		qsort(arr, n, sizeof(char), cmp);
//		printf("%s", arr);
//	}
//	return 0;
//}

//void print(char* s)
//{
//	if (*s)
//	{
//		print(++s);
//		printf("%c", *s);
//	}
//}


//int main()
//{
//	char arr[] = "gadsaf";
//	printf("%d", 3);
//	//printf(arr);
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,256,4 };
//	int arr2[] = { 1,2,1,4 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d", ret);
//	return 0;
//}
//
//void* my_memmove(void* dest, void* src, int num)
//{
//	char* a = (char*)dest;
//	char* b = (char*)src;
//	if (a < b)
//	{
//		for (int i = 0; i < num; i++)
//		{
//			a[i] = b[i];
//		}
//	}
//	else
//	{
//		for (int i = num - 1; i >= 0; i--)
//		{
//			a[i] = b[i];
//		}
//	}
//	return dest;
//}
////
//void* my_memcpy(void* dest, const void* source, uint num)
//{
//	char* a = (char*)dest;
//	char* b = (char*)source;
//	uint i = 0;
//
//	for (i = 0; i < num; i++)
//	{
//		a[i] = b[i];
//	}
//	return dest;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* ret = (int*)my_memcpy(arr + 2, arr, 20);
//	int* ret = (int*)my_memmove(arr + 2, arr, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}