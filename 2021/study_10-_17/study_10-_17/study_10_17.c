#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr[] = "hello";
	char arr1[] = { 'h','e','l','l','o'};
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr1));
	return 0;
}
//enum sex
//{
//	MALE,
//	FEMALE=2,
//	neutrality
//};
//int main()
//{
//	enum sex a = MALE;
//	enum sex b = FEMALE;
//	enum sex c = neutrality;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}
//#include<stdio.h>
//int a = 0;
//int b = 0;
//int main()
//{
//
//	int x = 0;
//	int y = 0;
//	return 0;
//}
//int main()
//{
//	int count = 0;									//除去数组中重复的数据
//	int arr[] = { 1,1,2,2,2,3,3,4,5,5,6,7,7,8,9,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] != arr[i + 1])
//		{
//			*p = arr[i];
//			p++;
//			count++;
//		}
//		else
//		{
//			;
//		}
//	}
//	for (i = 0; i < count; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//int main()//找零问题
//{
//    double price = 0;
//    int month = 0;
//    int day = 0;
//    int judge = 0;
//    scanf("%lf %d %d %d", &price, &month, &day, &judge);
//    
//    if (month==11&&day==11)
//    {
//        if (judge == 1)
//        {
//            if (price * 0.7 - 50 > 0)
//                printf("%0.2lf", price * 0.7 - 50);
//            else
//                printf("%0.2lf", 0);
//        }
//        else if (judge == 0)
//        {
//            if (price * 0.7 > 0)
//                printf("%0.2lf", price * 0.7);
//            else
//                printf("%0.2lf", 0);
//        }
//    }
//    else if (month == 12&&day == 12)
//    {
//        if (judge == 1)
//        {
//            if (price * 0.8 - 50 > 0)
//                printf("%0.2lf", price * 0.8 - 50);
//            else
//                printf("%0.2lf", 0);
//        }
//        else if (judge == 0)
//        {
//            if (price * 0.8 > 0)
//                printf("%0.2lf", price * 0.8);
//            else
//                printf("%0.2lf", 0);
//        }
//    }
//    else
//        if (judge == 1)
//        {
//            if (price - 50)
//                printf("%0.2lf", price - 50);
//            else
//                printf("%0.2lf", 0);
//        }
//        else if (judge == 0)
//        {
//            printf("%0.2lf", price);
//        }
//    return 0;
//}
//int main()//发布信息
//{
//    int i = printf("Hello world!\n");
//    printf("%d", i);
//    return 0;
//}
//int main()
//{
//	printf("I lost my cellphone!");
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x > 0 && x <= 100000)
//	{
//		if (x % 5 == 0)
//		{
//			printf("YES");
//		}
//		else
//			printf("NO");
//	}
//	else 
//		return 1;
//		
//	
//	return 0;
//}
//int main()//打印小飞机
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 6; i++)
//	{
//		if (i < 2)
//		{
//			for (j = 0; j < 12; j++)
//			{
//				if (j < 5)
//				{
//					printf(" ");
//				}
//				else if (j == 5 || j == 6)
//				{
//					printf("*");
//				}
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//		else if (i == 2 || i == 3)
//		{
//			for (j = 0; j < 12; j++)
//			{
//					printf("*");
//			}
//			printf("\n");
//		}
//		else
//		{
//			for (j = 0; j < 12; j++)
//			{
//				if (j < 4||j==6||j==5||j>7)
//				{
//					printf(" ");
//				}
//				else
//					printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
