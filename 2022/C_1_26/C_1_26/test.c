#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stddef.h>
#include<stdbool.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void reverse(char* s)
{
	int sz = strlen(s);
	int l = 0;
	int r = sz - 1;
	while (l < r)
	{
		char tmp = s[l];
		s[l] = s[r];
		s[r] = tmp;
		l++;
		r--;
	}
}

int main()
{
	char arr[10001] = { 0 };
	gets_s(arr, 10000);
	int sz = strlen(arr);
	int pre = 0;
	int lo = 0;
	reverse(arr);
	while (pre < sz)
	{
		if (arr[pre] <= 'z' && arr[pre] >= 'a' || arr[pre] <= 'Z' && arr[pre] >= 'A')
		{
			arr[lo] = arr[pre];
			lo++;
			pre++;
		}
		else if (arr[pre + 1] <= 'z' && arr[pre + 1] >= 'a' || arr[pre + 1] <= 'Z' && arr[pre + 1] >= 'A')
		{
			arr[lo] = '\0';
			lo++;
			pre++;
		}
		else
		{
			pre++;
		}
	}
	arr[lo] = '\0';
	for (int i = 0; i < sz; i++)
	{
		if (i == 0)
			reverse(arr + i);
		else if (arr[i] == '\0')
			reverse(arr + i + 1);
	}
	for (int i = 0; i < sz; i++)
	{
		if (arr[i] == '\0')
			arr[i] = ' ';
	}
	printf("%s", arr);
		return 0;
}

//int main()
//{
//	int k = 1 ^ (1 << 31 >> 31);
//	printf("%d\n", k);
//	int a = 1;
//	sizeof(a++);
//	printf("%d", a);
//} 

//int main()
//{
//	char* ret = (char*)malloc(sizeof(int) * 11);
//	int p = 0;
//	int n = 0;
//	scanf("%d", &n);
//	if (n == 0)
//	{
//		printf("0");
//		return 0;
//	}
//		
//	while (n)
//	{
//		ret[p++] = n % 10 + '0';
//		n /= 10;
//	}
//	ret[p] = '\0';
//	printf("%s", ret);
//	return 0;
//}

//bool is_perfect(int n)
//{
//	int sum = 0;
//	for (int i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			sum += i;
//			sum += n / i;
//			/*if (i == n / i)
//				sum -= i;*/
//		}
//	}
//	return sum + 1 == n;
//}
//
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int cnt = 0;
//		for (int i = 2; i <= n; i++)
//		{
//			if (is_perfect(i))
//				cnt++;
//		}
//		printf("%d\n", cnt);
//	}
//	return 0;
//}
int findMaxConsecutiveOnes(int* nums, int numsSize)
{
	int max = 0;
	int cnt = 0;
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] == 1)
		{
			cnt++;
			if (cnt > max)
				max = cnt;
		}
		else
			cnt = 0;
	}
	return max;
}
//int main()
//{
//	int a = -1;
//	size_t b = 2;
//	if (a > b)
//	{
//		printf("x is greater");
//
//	}
//	else
//	{
//		printf("y is greater");
//	}
//	return 0;
//}

//int main()
//{
//	char ch = 2;
//	int i = 1;
//	float f = 1;
//	double d = 1;
//	
//	printf("%d", sizeof(ch / i + (f * d - i)));
//	return 0;
//}
//


//int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize)
//{
//	int* ret = (int*)malloc(sizeof(int) * numsSize);
//	*returnSize = 0;
//	int* cnt = (int*)malloc(sizeof(int) * (numsSize + 1));
//	memset(cnt, 0, sizeof(int) * (numsSize + 1));
//	for (int i = 0; i < numsSize; i++)
//	{
//		cnt[nums[i]]++;
//	}
//	for (int i = 1; i < numsSize + 1; i++)
//	{
//		if (cnt[i])
//		{
//			ret[(*returnSize)++] = i;
//		}
//	}
//	return ret;
//}
//
//int Add(int num1, int num2) 
//{
//	int a = num1;
//	int b = num2;
//	while (num2)
//	{
//		a = num1 ^ num2;
//		b = (num1 & num2) << 1;
//		num1 = a;
//		num2 = b;
//	}
//	return a;
//}
//
//
//int main()
//{
//	int ret = Add(2, 2);
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int a = 1, b = 2, m = 0, n = 0, k;
//	k = (n = b < a) && (m = a);
//	printf("%d,%d\n", k, m);
//	return 0;
//}

//int main()
//{
//	int cnt = 0;
//	int n = -1;
//	while (n)
//	{
//		n = n >> 1;
//		cnt++;
//	}
//	printf("%d", cnt);
//	return 0;
//}

//struct stu
//{
//	char a;
//	int data;
//	int hi;
//};
//int main()
//{
//	printf("%d", offsetof(struct stu, data));
//	return 0;
//}