#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

int my_strcmp(const char* a, const char* b)
{
	assert(a && b);
	int ret = 0;
	while (*a||*b)
	{
		if (*a < *b)
		{
			ret = -1;
		}
		else if (*a > *b)
		{
			ret = 1;
		}
		a++;
		b++;
	}
	return ret;
}
int main()
{	
	int a=my_strcmp("abcgg", "abcg");
	printf("%d", a);
	return 0;
}