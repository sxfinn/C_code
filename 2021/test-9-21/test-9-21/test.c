#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	char a[10]="cao";
	scanf("%s", a);
	printf("%s\n", a);
	return 0;
}
//struct S
//{
//	char a;
//	int b[5];
//	int i;
//};
//int main()
//{
//	struct S s = { 0 };
//	printf("%d", sizeof(s));
//	return 0;
//}
//struct S
//{
//	 char _a : 2;
//	 char _b : 3;
//	 char _c : 2;
//	 char _f : 5;
//	//char _d : 15;
//};
//int main()
//{
//	struct S s = { 1,1,1,1, };
//	//printf("%d", );
//	return 0;
//}
//struct s
//{
//	int price;
//	char name;
//	struct s *p;
//};
//struct p
//{
//	/*int number;
//	double f;*/
//	struct s s;
//	
//};
//int main()
//{
//	struct p a = {22,'f'};
//	return 0;
//}
//typedef struct
//{
//	int a;
//
//}sss;
//int main()
//{
//	sss b = { 3 };
//	return 0;
//}
//int my_strlen(char* p)
//{
//	int num = 0;
//	while (num++, *p++);
//	return num-1;
//}
//int main()
//{
//	char a[] = "wocaonima";
//	int i = my_strlen(a);
//	printf("%d", i);
//	
//	return 0;
//}
////my_memmove(void* dest, void* source, int num)
////{
////	void* ret = dest;
////	assert(dest && source);
////	if (dest > source)
////	{
////		while (num--)
////		{
////			*((char*)dest + num) = *((char*)source + num);//从后到前
////		}														
////	}
////	else
////	{
////		while (num--)
////		{
////			*(char*)dest = *(char*)source;
//			((char*)dest)++;							//从前到后
//			((char*)source)++;
//		}													
//	}
//	return ret;
//}
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9, };
//	my_memmove(a, a + 1,12);
//	return 0;
//}
//void *my_memcpy(void* dest, void* source, int num)
//{
//	void* ret = dest;
//	char* tmp = (char*)dest;
//	char* tmp1 = (char*)source;
//	assert(dest && source);
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		//*(char*)dest = *(char*)source;
//		//((char*)dest)++;
//		//((char*)source)++;
//		*tmp++ = *tmp1++;
//	}
//	return ret;
//}
//int main()
//{
//	int a[] = { 1,2,256,4,5,6,7,8,9, };
//	int b[10] = { 0 };
//	my_memcpy(b, a, 10);
//	
//	return 0;
//}
//void my_strncpy(char*a,char*b,int count)
//{
//	assert(a && b);
//	while (count-- && (*a++ = *b++)!='\0');
//	while (count--)
//	{
//		*a++ = '\0';
//	}
//}
//char* my_strstr(char*str1,char*str2)
//{
//	if (str2 == NULL)
//	{
//		return str1;
//	}
//	char* s1= NULL;
//	char* s2= NULL;
//	while (*str1)
//	{
//		s1 = str1;
//		s2 = str2;
//		while(*s2&&*s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return str1;
//		}
//		str1++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "qweraabct";
//	char arr2[] = "";
//	char* ret=my_strstr(arr1, arr2);
//	if (ret)
//	{
//		printf("找到了 %s\n", ret);
//	}
//	else
//		printf("没找到\n");
//	return 0;
//}
//	
//int main()
//{
//	
//	/*perror("caonima");*/
//	char a =-128;
//	/*int ret=isdigit(a);*/
//	//printf("%d", ret);
//	return 0;
//}