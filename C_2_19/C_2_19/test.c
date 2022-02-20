#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<errno.h>
#include<string.h>

int main()
{
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		printf("%s", strerror(errno));
	}
	fputc('a', pf);
	if (fclose(pf))
	{
		printf("πÿ±’ ß∞‹;");
	}
	FILE* pf
	return 0;
}