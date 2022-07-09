#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
typedef unsigned int uint;

int cmp(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{
	qsort(nums1, nums1Size, sizeof(int), cmp);
	qsort(nums2, nums2Size, sizeof(int), cmp);
	int len = nums1Size > nums2Size ? nums2Size : nums1Size;
	int* ret = (int*)malloc(sizeof(int) * (len + 1));
	*returnSize = 0;
	int p1 = 0;
	int p2 = 0;
	while (p1 < nums1Size && p2 < nums2Size)
	{
		if (nums1[p1] < nums2[p2])
			p1++;
		else if (nums1[p1] > nums2[p2])
			p2++;
		else
		{
			if (nums1[p1] != ret[*returnSize])
			{
				(*returnSize)++;
				ret[*returnSize] = nums1[p1];
			}
			p1++, p2++;
		}
	}
	return ret + 1;
}

//int dominantIndex(int* nums, int numsSize)
//{
//	int max1id = 0;
//	int max2id = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] > nums[max1id])
//		{
//			max2id = max1id;
//			max1id = i;
//		}
//		else if (nums[i] < nums[max1id] && nums[i] > nums[max2id])
//		{
//			max2id = i;
//		}
//	}
//	if (nums[max1id] >= nums[max2id])
//		return max1id;
//	return -1;
//}
//int dominantIndex(int* nums, int numsSize)
//{
//	if (numsSize == 1)
//		return 0;
//	int max1id = 0;
//	int max2id = 0;
//	nums[0] < nums[1] ? (max1id = 1, max2id = 0) : (max1id = 0, max2id = 1);
//	for (int i = 0; i < numsSize; i++)
//	{
//		if (nums[i] > nums[max1id])
//		{
//			max2id = max1id;
//			max1id = i;
//		}
//		else if (nums[i] < nums[max1id] && nums[i] > nums[max2id])
//		{
//			max2id = i;
//		}
//	}
//	if (nums[max1id] >= 2 * nums[max2id])
//		return max1id;
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,0 };
//	int ret = dominantIndex(arr, 2);
//	printf("%d", ret);
//	return 0;
//}
//int GetNumberOfK(int* data, int dataLen, int k) 
//{
//	int cnt = 0;
//	if (dataLen == 0)
//		return cnt;
//	int left = 0;
//	int right = dataLen - 1;
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//		if (data[mid] > k)
//			right = mid - 1;
//		else if (data[mid] < k)
//			left = mid + 1;
//		else
//			right = mid;
//	}
//	while (data[left++] == k)
//		cnt++;
//	return cnt;
//}

//#include <stdio.h>
//int main()
//{
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch % 2 != 0 && (ch >= 'a' && ch <= 'z'))
//			ch = ch - 'a' + 'A';
//		putchar(ch);
//	} 
//		printf("\n");
//		return 0;
//}
	/*while (printf("*"))
	{
		printf("hehe\n");
	}
	return 0;*/


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char arr[101] = { 0 };
//	while (n--)
//	{
//		scanf("%s", arr);
//		int sz = strlen(arr);
//		int flag = 1;
//		int key1 = 0;
//		int key2 = 0;
//		int key3 = 0;
//		if (*arr >= '0' && *arr < '9')
//			flag = 0;
//		if (sz < 8)
//			flag = 0;
//		for (int i = 0; i < sz; i++)
//		{
//			if (arr[i] >= '0' && arr[i] <= '9')
//				key1 = 1;
//			else if (arr[i] >= 'a' && arr[i] <= 'z')
//				key2 = 1;
//			else if (arr[i] >= 'A' && arr[i] <= 'Z')
//				key3 = 1;
//			if (key1 + key2 + key3 >= 2)
//				break;
//		}
//		if (key1 + key2 + key3 < 2)
//			flag = 0;
//		if (flag)
//			printf("YES");
//		else
//			printf("NO");
//	}
//	return 0;
//}

//int* findErrorNums(int* nums, int numsSize, int* returnSize)
//{
//	int i = 0;
//	int xorsum = 0;
//	for (i = 1; i <= numsSize; i++)
//	{
//		xorsum ^= i;
//		xorsum ^= nums[i - 1];
//	}
//	int bit = xorsum - (xorsum & (xorsum - 1));
//	int num1 = 0;
//	int num2 = 0;
//	for (i = 1; i <= numsSize; i++)
//	{
//		if (nums[i - 1] & bit)
//			num1 ^= nums[i - 1];
//		else
//			num2 ^= nums[i - 1];
//		if (i & bit)
//			num1 ^= i;
//		else
//			num2 ^= i;
//	}
//	int* ret = (int*)malloc(sizeof(int) * 2);
//	*returnSize = 2;
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

//int hash[100001];
//int* findErrorNums(int* nums, int numsSize, int* returnSize)
//{
//	memset(hash, 0, sizeof(hash));
//	int* ret = (int*)malloc(sizeof(int*) * 2);
//	*returnSize = 0;
//	for (int i = 1; i <= numsSize; i++)
//	{
//		hash[nums[i - 1]]++;
//		hash[i]++;
//	}
//	int tmp = 0;
//	for (int i = 1; i <= numsSize; i++)
//	{
//		if (hash[i] == 3)
//			ret[(*returnSize)++] = i;
//		else if (hash[i] == 1)
//			tmp = i;
//	}
//	ret[(*returnSize)++] = tmp;
//	return ret;
//}

//int main()
//{
//	char c;
//	int v0 = 0, v1 = 0, v2 = 0;
//		do
//		{
//			switch (c = getchar())
//			{
//			case'a':
//			case'A':
//			case'e':
//			case'E':
//			case'i':
//			case'I':
//			case'o':
//			case'O':
//			case'u':
//			case'U':v1 += 1;
//			default:v0 += 1; v2 += 1;
//			}
//		} while (c != '\n');
//		printf("v0=%d,v1=%d,v2=%d\n", v0, v1, v2);
//		return 0;
//}

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	if (strlen(p2) == 0)
//		return p1;
//	char* s1 = p1;
//	char* tmp = p1;
//	char* s2 = p2;
//	while (*s1)
//	{
//		while (*s1 != *s2)
//			s1++;
//		s2 = p2;
//		tmp = s1;
//		while (*tmp == *s2 && *s2)
//			tmp++, s2++;
//		if (*s2 == '\0')
//			return s1;
//		else if (*s1 == '\0')
//			return NULL;
//		p1++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char* arr = "abcdf";
//	char* arr1 = "bc";
//	char* ret = my_strstr(arr, arr1);
//	printf("%s", ret);
//	return 0;
//}
//char* strcat(char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	char* ret = s1;
//	while (*s1)
//		s1++;
//	while (*s1++ = *s2++);
//	return ret;
//}
//
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2 && *s1);
//	return *s1 - *s2;
//}
//
//char* my_strcpy(char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	char* ret = s1;
//	while (*s1++ = *s2++);
//	return ret;
//}
//
//uint my_strlen(char* s)
//{
//	assert(s);
//	int cnt = 0;
//	while (*s++ && ++cnt);
//	return cnt;
//}
//int main()
//{
//	char* p = "abcd";
//	int ret = my_strlen(p);
//	printf("%d", ret);
//	return 0;
//}
//char* my_strstr(char* s1, char* s2)
//{
//	int sz1 = strlen(s1);
//	int sz2 = strlen(s2);
//	for (int i = 0; i <= sz1 - sz2;)
//	{
//		int j = 0;
//		for (j = 0; j < sz2; j++)
//		{
//			if (s1[i + j] != s2[j])
//				break;
//		}
//		if (j == sz2)
//			return s1 + i;
//	}
//	return NULL;
//}

//int main()
//{
//	char arr[] = "abcdabcd";
//	char* p = "bc";
//	int len = 3;
//	int sz = strlen(p);
//	char* ret = NULL;
//	for (ret = arr; ret = my_strstr(ret, p); ret += sz)
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	char* s1 = "abc";
//	char* s2 = "abc";
//	int ret = mystrncmp(s1, s2, 4);
//	printf("%d", ret);
//	return 0;
//}
//int mystrncmp(const char* s1, const char* s2, int n)
//{
//	while (n-- && (*s1 == *s2) && *s1)
//		s1++, s2++;
//	if (n != -1)
//		return *s1 - *s2;
//	return 0;
//}
//char* mystrncat(char* s1, const char* s2, int n)
//{
//	char* ret = s1;
//	while (*s1)
//		s1++;
//	while (n-- && (*s1++ = *s2++));
//	if (n == -1)
//		*s1 = '\0';
//	return ret;
//}
//char* my_strncpy(char* s1, const char* s2, int cnt)
//{
//	char* ret = s1;
//	while (cnt-- && (*s1++ = *s2++));
//	while (cnt--)
//		*s1++ = '\0';
//	return ret;
//}
//int main()
//{
//	int cnt = 2;
//	char arr[10] = "xxxxxxxxx";
//	char* arr2 = "qwerdadnadnj";
//	char* ret = my_strncpy(arr, arr2, 10);
//	printf("%s", ret);
//	return 0;
//}