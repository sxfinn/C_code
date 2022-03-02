#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	scanf("%d %d %d", &x, &y, &z);
	if (y < z)
	{
		int tmp = 0;
		tmp = y;
		y = z;
		z = tmp;
	}
	if (x < y)
	{
		int tmp = x;
		x = y;
		y = tmp;
	}
	printf("%d %d %d", x, y, z);
	return 0;
}
//int main()//求素数
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		int ret = 1;
//		for (j = 2; j < i; j++)
//		{
//			int tmp = i % j;
//			if (!tmp)
//			{
//				ret = 0;
//				break;
//			}
//		}
//		if (ret)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()//求闰年
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d\n", i);
//		}
//		else if (i % 100 == 0 && i % 400 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//		return 0;
//}

//int main()//求最大公约数
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	while (y)
//	{
//		int tmp = x % y;
//		x = y;
//		y = tmp;
//	}
//	printf("%d", x);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	scanf("%d %d %d", &x, &y, &z);
//	if (x > y)
//	{
//		if (z > y)
//		{
//			if (x > z)
//			{
//				printf("%d %d %d", x, z, y);
//			}
//			else
//				printf("%d %d %d", z, x, y);
//		}
//		else if (y > z)
//		{
//			printf("%d %d %d", x, y, z);
//		}
//	}
//	else
//	{
//		if (y > z)
//		{
//			if (x > z)
//			{
//				printf("%d %d %d", y, x, z);
//			}
//			else
//				printf("%d %d %d", y, z, x);
//		}
//		else
//			printf("%d %d %d", z, y, x);
//	}
//	return 0;
//}
//