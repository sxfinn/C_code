#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//函数回调
//void cal(int (*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入x，y\n");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", p(x, y));
//}
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int pow(int x, int y)
//{
//	return x * y;
//}
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			cal(add);
//			break;
//		case 2:
//			cal(sub);
//			break;
//		case 3:
//			cal(pow);
//			break;
//		case 0:
//			break;
//		default:
//			break;
//
//		}
//	} while (input);
//	return 0;
//}