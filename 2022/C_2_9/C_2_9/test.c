#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>


//int* findsingle(int* p, int sz, int* returnSize)
//{
//	int* ret = (int*)malloc(sizeof(int) * 2);
//	int i = 0;
//	int ans = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ans ^= p[i];
//	}
//	int pos = ans - (ans & (ans - 1));
//	int num1 = 0;
//	int num2 = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (p[i] & pos)
//		{
//			num1 ^= p[i];
//		}
//		else
//		{
//			num2 ^= p[i];
//		}
//	}
//	ret[0] = num1;
//	ret[1] = num2;
//	*returnSize = 2;
//	return ret;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,5,8,9 };
//	int sz = 0;
//	int* ret = findsingle(arr, sizeof(arr) / sizeof(int), &sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", ret[i]);
//	}
//	return 0;
//}
//char* my_strncpy(char* dest, const char* src, size_t n)
//{
//	assert(dest && src);
//	char* tmp = dest;
//	while (n-- && *src)
//		*tmp++ = *src++;
//	
//	while (n--)
//		*tmp++ = '\0';
//	return dest;
//}
//int main()
//{
//	char arr[10] = "abc";
//	char* ret = strncpy(arr, "qwer", 10);
//	printf("%s", ret);
//	return 0;
//}
//char* my_strncat(char* p1, const char* p2,size_t n)
//{
//	assert(p1 && p2);
//	char* ret = p1;
//	int sz = (int)strlen(p1);
//	p1 += sz;
//	while (n-- && *p2)
//		*p1++ = *p2++;
//	*p1 = '\0';
//	return ret;
//}
//int main()
//{
//	char arr[20] = "abc";
//	char* p = "efg";
//	char* ret = my_strncat(arr, p, 4);
//	printf(ret);
//	return 0;
//}
//int my_atoi(const char* p)
//{
//	assert(p);
//	int ret = 0;
//	char c = *p;
//	int symbol = 1;
//	while (*p == ' ')
//		p++;
//	if (c == '-')
//	{
//		p++;
//		symbol = -1;
//	}
//	else if (c == '+')
//	{
//		p++;
//		symbol = 1;
//	}
//	if (*p <= '9' && *p >= '0')
//	{
//		while (*p && *p <= '9' && *p >= '0')
//		{
//			ret = ret * 10 + *p - '0';
//			p++;
//		}
//	}
//	else
//		;
//	return ret * symbol;
//}
//int main()
//{
//	int ret = my_atoi("145612");
//	printf("%d", ret);
//	return 0;
//}
//bool isLinum(int i)
//{
//	int right = 0;
//	int left = i;
//	int ans = 0;
//	int p = 1;
//	while (left)
//	{
//		int tmp = left % 10 * p;
//		right = tmp + right;
//		left /= 10;
//		ans += right * left;
//		p *= 10;
//	}
//	return ans == i;
//}
//
//int main()
//{
//	for (int i = 10000; i < 100000; i++)
//	{
//		if (isLinum(i))
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	printf("%d",isLinum(1461));
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int sz1 = 0;
//	int sz2 = 0;
//	int* arr1 = (int*)malloc(sizeof(int) * n);
//	int* arr2 = (int*)malloc(sizeof(int) * m);
//	int* ret = (int*)malloc(sizeof(int) * (m + n));
//	int sz = 0;
//	while (n--)
//	{
//		scanf("%d", arr1 + sz1);
//		sz1++;
//	}
//	while (m--)
//	{
//		scanf("%d", arr2 + sz2);
//		sz2++;
//	}
//	m = n = 0;
//	while (n < sz1 || m < sz2)
//	{
//		if (n >= sz1)
//		{
//			ret[sz++] = arr2[m++];
//		}
//		else if (m >= sz2)
//		{
//			ret[sz++] = arr1[n++];
//		}
//		else
//		{
//			if (arr1[n] > arr2[m])
//			{
//				ret[sz++] = arr2[m++];
//			}
//			else
//			{
//				ret[sz++] = arr1[n++];
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", ret[i]);
//	}
//	return 0;
//}

//int main()
//{
//	printf("%zd", sizeof(long));
//	return 0;
//}