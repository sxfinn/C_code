#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{

	return 0;
}

//int main()
//{
//	int n = 0;
//	int target = 0;
//	scanf("%d", &n);
//	int* ret = (int*)malloc(sizeof(int) * n);
//	int* arr = (int*)malloc(sizeof(int) * n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	scanf("%d", &target);
//	int p = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] != target)
//			ret[p++] = arr[i];
//	}
//	for (int i = 0; i < p; i++)
//	{
//		printf("%d ", ret[i]);
//	}
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
// 
// 
// 
//#include<stdio.h>
//#include<stdlib.h>
//
//int** my_malloc(int r, int c, int* returnSize, int** returncolsize)
//{
//	*returnSize = r;
//	*returncolsize = (int*)malloc(sizeof(int) * r);
// 	int** ret = (int**)malloc(sizeof(int*) * r);
//	for (int i = 0; i < r; i++)
//	{
//		ret[i] = (int*)malloc(sizeof(int) * c);
//		(*returncolsize)[i] = c;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int returnSize = 0;
//	int* retcolsz = NULL;
//	int returnSize1 = 0;
//	int* returncolsz1 = NULL;
//	scanf("%d %d", &n, &m);
//	int** ret = my_malloc(n, m, &returnSize, &retcolsz);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &ret[i][j]);
//		}
//	}
//	int** ret1 = my_malloc(m, n, &returnSize1, &returncolsz1);
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			ret1[i][j] = ret[j][i];
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", ret1[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", n / 12 * 4);
//	return 0;
//}

//void input(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", arr + i);
//	}
//}
//int cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1) - (*(int*)p2);
//}
//void output(int* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(sizeof(int) * n);
//	input(arr, n);
//	qsort(arr, n, sizeof(int), cmp);
//	int low = 0;
//	int fast = 0;
//	while (fast < n)
//	{
//		if (arr[fast] != arr[low])
//		{
//			low++;
//			arr[low] = arr[fast];
//		}
//		fast++;
//	}
//	output(arr, low + 1);
//	return 0;
//}