#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//创建结构体类型
struct student
{
	char name[20];
	int age;
	char sex[10];
	char id[10];
};
int main()
{
	struct student a = { "张三",20,"男","2020088" };//初始化结构体变量
	struct student* pa = &a;//将变量a的地址给结构体指针变量
	//使用.操作符访问结构成员，//打印结构体信息
	printf(" %s %d %s %s\n", a.name, a.age, a.sex, a.id);
	//->操作符，//打印结构体信息
	printf(" %s %d %s %s\n", pa->name, pa->age, pa->sex, pa->id);
	return 0;
}
//int main()
//{
//	int num = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	arr = &num;//不能赋值，数组名是指针常量
//	return 0;
//}
////指针变量的大小取决于地址的大小
//	//32为平台上地址的大小是32bit
//	//64位平台上地址的大小是64bit
//int main()
//{
//	printf(" int*大小=%d\n", sizeof(int*));
//	printf(" char*大小=%d\n", sizeof(char*));
//	printf(" double*大小=%d\n", sizeof(double*));
//	printf(" short*大小=%d\n", sizeof(short*));
//
//	return 0;
//}
//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	*pc = 'h';
//	printf("ch= %c ", ch);
//	printf("*pc= %c ", *pc);
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf(" num=%d ", num);
//	printf("*p=%d", *p);
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	int* p;//p为一个整型变量的指针
//	p = &num;//赋值
//	return 0;
//}
//int main()
//{
//	//创建变量
//	int i = 1;
//	//&是取地址操作符，&i就是i的地址
//	printf("%p", &i);
//	return 0;
//}
////#define定义标识符常量
//#define MAX 100
////#define定义宏
//# define BIG(x,y) (x>y?x:y)
//int main()
//{
//	int max = BIG(2, 3);
//	printf(" %d ", MAX);
//	printf(" %d ", max);
//	return 0;
//}
//extern n;
//int main()
//{
//	printf("%d", n);
//	return 0;
//}
//int main()
//{
//	int sum = Add(2, 3);
//	return 0;
//}
//static int i = 1;
//int main()
//{
//	int a = 0;
//	return 0;
//}
//int  Add(int x, int y);
//int main()
//{
//	int x = 3;
//	int y = 5;
//	int sum = Add(x, y);
//	printf(" %d", sum);
//	return 0;
//}
////代码3
//void test()
//{//这里将i用static修饰
//	static int i = 1;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}
////将unsigned重新命名为unsin，所以unsin也是一个类型名
//typedef unsigned int unsin;
//int main()
//{
//	//观察a和b，这两个变量的类型是一样的
//	unsigned int a = 0;
//	unsin b = 0;
//	return 0;
//}