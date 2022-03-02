#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 100; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d", i);
		}
	}
	return 0;
}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	while (x)
//	{
//		printf("%d", x % 10);
//		x /=10;
//	}
//	return 0;
//}
//int main()
//{
//	printf("Name Age Gender\n");
//	int i = 0;
//	for (i = 0; i < 21; i++)
//	{
//		printf("-");
//	}
//	printf("\nJack 18 man");
//	return 0;
//}
//int main()
//{
//	int q = 0;
//	int w = 0;
//	int e = 0;
//	int r = 0;
//	int t = 0;
//	scanf("%d %d %d %d %d", &q, &w, &e, &r, &t);
//	double num = (q + w + e + r + t) / 5.0;
//	printf("%0.1lf", num);
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int h = x / 3600;
//	int m = (x - 3600 * h) / 60;
//	int s = (x - 3600 * h) % 60;
//	printf("%d %d %d", h, m, s);
//	return 0;
//}
//int test(int x)
//{
//	if (x < 0)
//		return 1;
//	else if (x > 0)
//		return -1;
//	else
//		return 0;
//
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	printf("%d",test(x));
//}
//int main()
//{
//	printf("test");
//	return 0;
//}