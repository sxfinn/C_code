#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
#include<stdlib.h>//system函数头文件
//#include<windows.h>//Sleep函数头文件
#include<time.h>//time函数头文件
void sss(int arr[][3])
{
	
	printf("%p\n", arr);
	printf("%p", arr[0]);
}
int main()
{
	int a[][3] = { 1,2,3,4,5,6,6,7,8, };
	sss(a);
	printf("\n%p", a);
	return 0;
}