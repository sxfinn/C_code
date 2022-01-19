#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int judge(char* s1, char* s2)
{
	int sz1 = strlen(s1);
	int sz2 = strlen(s2);
	if (sz1 != sz2)
		return 0;
	for (int i = 0; i < sz1; i++)
	{
		char tmp = s1[0];
		for (int j = 0; j < sz1 - 1; j++)
		{
			s1[j] = s1[j + 1];
		}
		s1[sz1 - 1] = tmp;
		if (strcmp(s1, s2) == 0)
			return 1;
	}
	return 0;
}

int main()
{
	char arr1[] = "abcde";
	char arr2[] = "bcdel";
	int ret = judge(arr1, arr2);
	printf("%d", ret);
	return 0;
}
//int search(int(*p)[3], int sz, int* colsize, int target)
//{
//	int r = 0;
//	int c = colsize[0] - 1;
//	while (r < sz && c >= 0)
//	{
//		if (p[r][c] > target)
//			c--;
//		else if (p[r][c] < target)
//			r++;
//		else
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//	int len[3] = { 3,3,3 };
//	int sz = 3;
//	int ret = search(arr, sz, len, 10);
//	printf("%d", ret);
//	return 0;
//}
//void lefthand(char* s, int k)
//{
//	int sz = strlen(s);
//	while (k--)
//	{
//		char tmp = s[sz - 1];
//		for (int i = sz - 1; i > 0; i--)
//		{
//			s[i] = s[i - 1];
//		}
//		s[0] = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	int k = 2;
//	lefthand(arr, k);
//	printf("%s", arr);
//	return 0;
//}
//typedef long long*  z;
//int main()
//{
//	z a, * b;
//	printf("%d %d %d %d", sizeof(a), sizeof(*a), sizeof(b), sizeof(*b));
//	printf("\n");
//	printf("hello");
//	printf("return");
//	return 0;
//}