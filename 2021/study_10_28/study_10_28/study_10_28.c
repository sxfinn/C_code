#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int k = 0;
	scanf("%d", &k);//要查找的数	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了！下标为 %d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到");
	}
	return 0;
}
//int main()//9 9 乘法表
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		printf("%2d ", i);
//	}
//	printf("\n");
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			if (i * j != 1)				
//			printf("%2d ", i * j);
//		}
//		if (i * j != 2)
//		printf("\n");
//	}
//
//	return 0;
//}
//int main()
//{// 求最大值
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int maxid = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > arr[maxid])
//		{
//			maxid = i;
//		}
//	}
//	printf("%d", arr[maxid]);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	double n = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		double ret = n / i;
//		sum += ret;
//		n *= -1;
//	}
//	printf("%lf", sum);
//	return 0;
//}