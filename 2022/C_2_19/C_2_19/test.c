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
	fputc('b', pf);
	if (fclose(pf))
	{
		printf("πÿ±’ ß∞‹;");
	}
	pf = fopen("test.txt", "rt");
	if (pf == NULL)
	{
		printf("%s", strerror(errno));
	}
	char ret = fgetc(pf);
	printf("%c", ret);
	if (fclose(pf))
	{
		printf("πÿ±’ ß∞‹");
	}
	return 0;
}