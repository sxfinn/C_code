#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stddef.h>
#include<math.h>
int main()
{
	int m = 0, n = 0;
	while (~scanf("%d %d", &n, &m))
	{
		//int* ret = (int*)malloc(sizeof(int) * 1000);
		double tmp = n;
		double sum = 0;
		while (m--)
		{
			sum += tmp;
			tmp = sqrt(tmp);
		}
		printf("%.2lf\n", sum);
	}
	return 0;
}

//int f(int n)
//{
//
//}
//
//int main()
//{
//	int m = 0;
//	while (~scanf("%d", &m))
//	{
//		int k1 = 1;
//		int k2 = 0;
//		int k3 = 0;
//		for (int i = 0; i < m; i++)
//		{
//			k3 += k2;
//			k2 = k1;
//			if (k3 == 0 && k2 == 0)
//				k1 = 1;
//			else if (k3 == 0 && k2 == 1)
//				k1 = 0;
//			else
//				k1 = k3;
//		}
//		printf("%d\n", k1 + k2 + k3);
//
//	}
//	return 0;
//}

//int main()
//{
//
//	int arr[] = { 1,2,3,4 };
//	printf("%p\n", arr);
//	printf("%p\n", (arr[0]++));
//	int x = 2014;
//	int n = 0;
//	while (x + 1)
//	{
//		n++;
//		x = x | x + 1;
//	}
//	printf("%d", n);
//	return 0;
//}
//#define setof(p1,p2) p2 - p1
//
//struct S
//{
//	char a;
//	int b;
//	char c;
//};
//
//int main()
//{
//	struct S h;
//	printf("%d", setof((int)h, (int)h.a));
//	return 0;
//}