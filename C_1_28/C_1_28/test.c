#include<stdio.h>

union S
{
	int i;
	char c;
};

int main()
{
	union S s;
	s.i = 1;
	if (s.c == 1)
		printf("Ð¡¶Î");
	else
		printf("´ó¶Ë");
	return 0;
}
//typedef struct S
//{
//	int _a : 8;
//	int _b : 10;
//	int _c : 30;
//}S;
//
//enum E
//{
//	DE,
//	RE
//};
//int main()
//{
//	S s = { 1 ,2 ,1 };
//	int a = DE;
//	printf("hello msi\n");
//	printf("%d", a);
//	return 0;
//}