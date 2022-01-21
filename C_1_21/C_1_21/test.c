#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	float a = 8.2f;
	printf("%lf\n", a);
	int arr[3] = { 0 };
	int arr2[4] = { 0 };
	int* p[] = { arr, arr2 };
	printf("%d\n", sizeof(p[0]));
	printf("%d", sizeof(arr));
	return 0;
}
//int main()
//{
//	int arr[3][4] = { 0 };
//	int a[3] = { 0 };
//	int(*p)[3] = &a;
//	printf("%d\n", sizeof(*p));
//	printf("%d", sizeof(&arr[0]));
//	return 0;
//}
//int cmp_int(const void* a, const void* b)
//{
//	return (*(int*)a) - (*(int*)b);
//}
//int cmp_char(const void* a, const void* b)
//{
//	return (*(char*)a) - (*(char*)b);
//}
//int cmp_float(const void* a, const void* b)
//{
//	if ((*(float*)a) > (*(float*)b) > 0)
//		return 1;
//	else if ((*(float*)a) > (*(float*)b) < 0)
//		return -1;
//	else
//		return 0;
//}
//int cmp_string(const void* a, const void* b)
//{
//	return strcmp((*(char**)a), (*(char**)b));
//}
//int main()
//{
//	int arr1[] = { 2,5,67,3,24,47,2,4,547,658,8 };
//	char arr2[] = "jwaeanjnadjd";
//	float arr3[] = { 2.4535f,54.6456f,653635.356f };
//	char* arr4[] = { "aana", "ajwejae", "kjjhdhaud" };
//
//	int sz1 = sizeof(arr1) / sizeof(int);
//	int sz2 = strlen(arr2);
//	int sz3 = sizeof(arr3) / sizeof(arr3[0]);
//	int sz4 = sizeof(arr4) / sizeof(arr4[0]);
//
//	qsort(arr1, sz1, sizeof(int), cmp_int);
//	qsort(arr2, sz2, sizeof(char), cmp_char);
//	qsort(arr3, sz3, sizeof(float), cmp_float);
//	qsort(arr4, sz4, sizeof(char*), cmp_string);
//	for (int i = 0; i < sz1; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	printf("%s\n", arr2);
//	for (int i = 0; i < sz3; i++)
//	{
//		printf("%f ", arr3[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sz4; i++)
//	{
//		printf("%s\n", arr4[i]);
//	}
//	return 0;
//}
//int cmp(void* a, void* b)
//{
//	return -((*(int*)a) % 2 - (*(int*)b) % 2);
//}
//int main()
//{
//	int arr[] = { 3,6,7,2,5,7,22,56,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(int), cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//Ä£Äâ¿âº¯Êýqsort

//int cmp(void* a, void* b)
//{
//	return (*(char*)a) - (*(char*)b);
//}
//void swap(void* x, void* y, int sz)
//{
//	char* a = (char*)x;
//	char* b = (char*)y;
//	for (int i = 0; i < sz; i++)
//	{
//		char tmp = a[i];
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//}
//void my_qsort(void* arr, int len, int sz, int (*cmp)(void*, void*))
//{
//	int i = 0;
//	for (i = 0; i < len - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (cmp((void*)((char*)arr + j * sz), (void*)((char*)arr + (j + 1) * sz)) > 0)
//			{
//				swap((void*)((char*)arr + j * sz), (void*)((char*)arr + (j + 1) * sz), sz);
//			}
//		}
//	}
//}
//int main()
//{
//	printf("hello\n");
//	int arr[] = { 4,6,1,2,3,0,8,7,4,9 };
//	char arr1[] = "cwajeanen";
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int len1 = strlen(arr1);
//	my_qsort(arr1, len1, sizeof(arr1[0]), cmp);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	printf("%s\n", arr1);
//	printf(arr1);
//	return 0;
//}