#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<errno.h>
#include<string.h>

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s", strerror(errno));
	}

	return 0;
}