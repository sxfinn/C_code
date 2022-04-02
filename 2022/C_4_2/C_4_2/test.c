#include<stdio.h>


enum Day//星期
{
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};
enum Sex//性别
{
	MALE,
	FEMALE,
	SECRET
};
enum Color//颜色
{
	RED,
	GREEN,
	BLUE
};

union Un
{
	int i;
	char c;
};
int main()
{
	int a = 1;
	char* pc = (char*)&a;
	if (*pc == 1)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}

//int main()
//{
//	enum Sex a = FEMALE;
//	printf("%d ", a);
//	//a = 10;
//	int b = MALE;
//	b = a;
//	printf("%d ", b);
//	printf("%d", a);
//	return 0;
//}
//#define offsetof(S,m) &(((S*)0)->m)
//typedef struct S
//{
//	int i;
//	char c;
//	float f;
//}S;
//
//
//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4}, 1000 };
////结构体传参
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
////结构体地址传参
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	print1(s); 
//	print2(&s); //传地址
//	return 0;
//}
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//}A;

//一个例子
struct S
{
	int a : 3;
	int b : 4;
	int c : 5;
	int d : 4;
};


//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	//空间是如何开辟的？
//	return 0;
//}











//#include <stdio.h>
//#pragma pack(8)//设置默认对齐数为8
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//#pragma pack(1)//设置默认对齐数为1
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//int main()
//{
//	//输出的结果是什么？
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2)); 
//	return 0;
//}
//
////例如：
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//////练习1
//struct S1 
//{
//	char c1;
//	int i;
//	char c2;
//};
//printf("%d\n", sizeof(struct S1));
////练习2
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//printf("%d\n", sizeof(struct S2));
////练习3
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//printf("%d\n", sizeof(struct S3));
////练习4-结构体嵌套问题
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//printf("%d\n", sizeof(struct S4));
//typedef struct
//{
//	int data;
//	Node* next;
//}Node;
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//
//struct Point
//{
//	int x;
//	int y;
//}p1; //声明类型的同时定义变量p1
//struct Point p2; //定义结构体变量p2
////初始化：定义变量的同时赋初值。
//struct Point p3 = { x ,y };
//struct Stu     //类型声明
//{
//	char name[15];//名字
//	int age;    //年龄
//};
//struct Stu s = { "zhangsan", 20 };//初始化
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, {4,5}, NULL }; //结构体嵌套初始化
//struct Node n2 = { 20, {5, 6}, NULL };//结构体嵌套初始化
//int main()
//{
//	Node n;
//	return 0;
//}
//struct A
//{
//	int a;
//};
//struct S
//{
//	char c;
//	int i;
//	struct A;
//	long long l;
//};
//
//

//int int_cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//void _swap(void* p1, void* p2, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		char tmp = *((char*)p1 + i);
//		*((char*)p1 + i) = *((char*)p2 + i);
//		*((char*)p2 + i) = tmp;
//	}
//}
//void bubble(void* base, int count, int size, int(*cmp)(void*, void*))
//{
//	int i = 0;
//	int j = 0; for (i = 0; i < count - 1; i++)
//	{
//		for (j = 0; j < count - i - 1; j++)
//		{
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				_swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	//char *arr[] = {"aaaa","dddd","cccc","bbbb"};
//	int i = 0;
//	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), int_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}














//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	return 0;
//}
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//void test(int  const arr[])
//{
//	int const * * a;
//	a = NULL;
//	**a = 1;
//}
//int main()
//{
//	 int const arr[10];
//	arr[1] = 1;
//	int num = 10;
//	int* pa = &num;
//	int** ppa = &pa;
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = arr; 
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p <====> p+%d = %p\n", i, &arr[i], i, p + i);
//	}
//	return 0;
//}
//int main()
//{
//	int* p;
//	int a = *p;
//	return 0;
//}

//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	*pc = 0; 
//	*pi = 0; 
//	return 0;
//}