#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	/*printf("%s", strerror(1));
	return 0;*/
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf(strerror(errno));
	}
	return 0;
}

//int main()
//{
//	char arr[] = "ajd&akndajkd&ajdn&ab";
//	char* p = "&";
//	char* tmp = arr;
//	for (tmp = strtok(arr, p); tmp;tmp = strtok(NULL, p))
//	{
//		printf("%s\n", tmp);
//	}
//	for (tmp = strstr(arr, p); tmp; tmp += 1, tmp = strstr(tmp, p))
//	{
//		printf("%s\n", tmp);
//	}
//	return 0;
//}