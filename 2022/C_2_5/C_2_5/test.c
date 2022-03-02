#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	char arr[101] = { 0 };
	int k = 0;
	while (scanf("%s", arr) != EOF && scanf("%d", &k) != EOF)
	{
		for (int i = 0; i < k; i++)
		{
			printf("%c", arr[i]);
		}
		printf("\n");
	}
	return 0;
}

//int main()
//{
//	long long  n = 0;
//	int k = 0;
//	long long cnt = 0;
//	scanf("%lld %d", &n, &k);
//
//	int i = 0;
//	for (i = k + 1; i <= n; i++)
//	{
//		long long nums = (n + 1) / i;
//		cnt += nums * (i - k);
//		cnt += (n + 1) % i - k > 0 ? (n + 1) % i - k : 0;
//	}
//	printf("%lld\n", cnt);
//	return 0;
//}
//int main()
//{
//	long long a = 1;
//	printf("%lld", a);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int cnt = 0;
//	scanf("%d %d", &n, &k);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		if (i < k)
//			continue;
//		for (j = 1; j <= n; j++)
//		{
//			if (j <= k)
//				continue;
//			if (i % j >= k)
//				cnt++;
//		}
//	}
//	printf("%d\n", cnt);
//	return 0;
//}
//#define MAX 255
//int main()
//{
//	unsigned char A[MAX], i;
//	for (i = 0; i <= MAX; i++)
//		A[i] = i;
//	return 0;
//}
//int findPeakElement(int* nums, int numsLen)
//{
//	int l = 0;
//	int r = numsLen - 1;
//	while (l < r)
//	{
//		int mid = (l + r) / 2;
//		if (nums[mid] > nums[mid + 1])
//			r = mid;
//		else if (nums[mid] < nums[mid + 1])
//			l = mid + 1;
//	}
//	return r;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int tmp = 0;
//	int ret = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &tmp);
//		ret ^= tmp;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//typedef struct hash
//{
//	int val;
//	int key;
//}hash;
//int* twoSum(int* numbers, int numbersLen, int target, int* returnSize)
//{
//	hash* arr = (hash*)malloc(sizeof(hash) * numbersLen);
//	int p = 0;
//	for (int i = 0; i < numbersLen; i++)
//	{
//		arr[i].key = 1;
//	}
//	for (int i = 0; i < numbersLen; i++)
//	{
//
//	}
//
//}
//int* twoSum(int* numbers, int numbersLen, int target, int* returnSize) 
//{
//	int* ret = (int*)malloc(sizeof(int) * 2);
//	int i = 0, j = 0;
//	for (i = 0; i < numbersLen; i++)
//	{
//		if (numbers[i] - 10 > target)
//			continue;
//		for (j = i + 1; j < numbersLen; j++)
//		{
//			if (numbers[i] + numbers[j] == target)
//			{
//				ret[0] = i + 1, ret[1] = j + 1;
//				break;
//			}
//		}
//	}
//	*returnSize = 2;
//	return ret;
//}

//int* masterMind(char* solution, char* guess, int* returnSize)
//{
//	int hash[26] = { 0 };
//	int* ret = (int*)calloc(2, sizeof(int));
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		if (guess[i] == solution[i])
//			ret[0]++;
//		else
//			hash[solution[i] - 'A']++;
//	}
//	
//	for (i = 0; i < 4; i++)
//	{
//		if (hash[guess[i] - 'A'])
//		{
//			ret[1]++;
//			hash[guess[i] - 'A']--;
//		}
//	}
//	*returnSize = 2;
//	return ret;
//}
//
//int main()
//{
//	int* p = 0;
//	*p = 1;
//	printf("%d", *p);
//	return 0;
//}
//int main()
//{
//	float a[3] = { 1.5,2.5,3.5 }, * pa = a; *(pa++) *= 3;
//	printf("%lf", *pa);
//	return 0;
//}
//int main()
//{
//	int* arr = (int*)malloc(sizeof(int) * 10);
//	for (int i = 0; i < 12; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	for (int i = 0; i < 12; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//struct S
//{
//	char n;
//	int arr[];
//};
//
//int main()
//{
//	struct S* tmp = (struct S*)malloc(sizeof(struct S) + 40);
//	struct S* ps = NULL;
//	if (tmp != NULL)
//	{
//		ps = tmp;
//	}
//	else
//	{
//		return 0;
//	}
//	ps->n = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i + 1;
//	}
//	return 0;
//}
