#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int add(char* s, int n)
{
	int count = 0;
	while (n)
	{
		s[count++] = n % 10 + '0';
		n /= 10;
	}
	int left = 0;
	int right = count - 1;
	while (left < right)
	{
		char tmp = s[left];
		s[left] = s[right];
		s[right] = tmp;
		left++;
		right--;
	}
	return count;
}
char* compressString(char* S)
{
	int sz = strlen(S);
	char* ret = (char*)malloc(50001);
	memset(ret, 0, 50001);
	int slow = 0, fast = 0;
	int i = 0;
	int cnt = 0;
	int low = 0;
	
	if (sz == 0)
		return "";
	while (fast <= sz)
	{
		if (fast == 0)
		{
			ret[fast] = S[fast];
			fast++;
			cnt++;
		}
		if (S[fast] != ret[slow])
		{
			slow++;
			int tmp = add(&ret[slow], cnt);
			slow += tmp;
			cnt = 0;
			ret[slow] = S[fast];
		}
		fast++;
		cnt++;
	}
	int sz1 = strlen(ret);
	if (sz1 < sz)
		return ret;
	return S;
}
int main()
{
	
	char* ret = compressString("rrrrrrrrrrll");
	printf("%s", ret);
	return 0;
}