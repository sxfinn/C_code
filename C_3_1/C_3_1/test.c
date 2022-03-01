#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//#define OFFSETOF(A,B) (size_t)&(((A*)0)->B)
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//int main()
//{
//	int pos = OFFSETOF(struct S, c);
//	printf("%d", pos);
//	return 0;
//}
//#include<stdio.h>
//#define A 0b10101010101010101010101010101010
//#define B 0b01010101010101010101010101010101
//#define REVERSE(n) ((n<<1)&A) | ((n >> 1)&B)
//int main() 
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", n);
//	int ret = REVERSE(n);
//	printf("%d\n", ret);
//	return 0;
//}