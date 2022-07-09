#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int cmpr(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;//强制类型转换：只有转换成该数组里的类型，才能通过解引用正确访问其中的元素并比较大小
}
void reverse(char* a, char* b, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *a;
		*a = *b;
		*b = tmp;
		a++;
		b++;
	}
}
void bubble_sort(void* base, int sz, int width,int (*cmpr)(void*,void*) )
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmpr((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				reverse((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
int main()
{
	int i = 0;
	int arr[] = { 9,4,56,76,2,57, };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmpr);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}