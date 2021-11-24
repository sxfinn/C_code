#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char* compressString(char* S)
{
	int slow = 0, fast = 0;
	int i = 0;
	int cnt = 0;
	int sz = strlen(S);
	while (S[fast])
	{
		if (S[fast] != S[slow])
		{
			slow++;
			S[slow] = S[fast];
		}
		fast++;
	}
}
int main()
{

	return 0;
}
//int main()
//{
//	printf("hello world");
//}