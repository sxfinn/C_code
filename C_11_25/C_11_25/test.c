#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
char* compressString(char* S)
{
	int slow = 0, fast = 0;
	int i = 0;
	int cnt = 0;
	int sz = strlen(S);
	while (fast <= sz)
	{
		if (S[fast] != S[slow])
		{
			S[++slow] = cnt + '0';
			cnt = 0;
			S[++slow] = S[fast];
			
		}
		fast++;
		cnt++;
	}
	return S;
}
int main()
{
	char arr[] = "aaabbbcc";
	char* ret = compressString(arr);
	printf("%s", ret);
	return 0;
}