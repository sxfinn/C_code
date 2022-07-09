#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>

int my_strcmp(const char* s1, const char* s2)
{
	while (*s1 == *s2 && *s1)
		s1++, s2++;
	
	return *s1 - *s2;
}

char* my_strcat(char* dest, const char* source)
{
	assert(dest && source);
	char* ret = dest;
	while (*dest)
		dest++;
	while (*dest++ = *source++);
	return dest;
}

char* my_strcpy(char* s1, const char* s2)
{
	assert(s1 && s2);
	char* ret = s1;
	while (*s1++ = *s2++);
	return ret;
}

int my_strlen(const char* s)
{
	assert(s);
	int len = 0;
	while (*s++ && ++len);
	return len;
}
int main()
{
	char* s = "abc";
	char arr[5] = { 0 };
	//int ret = my_strlen(s);
	char* ret = my_strcpy(arr, s);
	printf("%s\n", arr);
	printf("%s", ret);
	//printf("%d", ret);
	return 0;
}
//int minNumberInRotateArray(int* rotateArray, int rotateArrayLen)
//{
//    int left = 0;
//    int right = rotateArrayLen - 1;
//    while (left < right)
//    {
//        int mid = (left + right) / 2;
//        if (rotateArray[mid] > rotateArray[right])
//        {
//            left = mid + 1;
//        }
//        else if(rotateArray[mid] < rotateArray[right])
//        {
//            right = mid;
//        }
//        else
//        {
//            right--;;
//        }
//    }
//    return rotateArray[left];
//}

//int main()
//{
//	int n = 0;
//	
//	int tmp = 0;
//	int cnt = 0;
//	double ret = 0;
//	int cnt0 = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &tmp);
//			if (tmp < 0)
//				cnt++;
//			else if (tmp > 0)
//			{
//				ret += tmp;
//			}
//			else
//				cnt0++;
//		}
//		printf("%d %.1lf\n", cnt, ret / (n - cnt - cnt0));
//	}
//	
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a1 = 2;
//	int d = 3;
//	int sum = n * a1 + n * (n - 1) * 3 / 2;
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	while (scanf("%d", &m) != EOF)
//	{
//		int sum = (int)pow(m, 3);
//		int a1 = sum / m - m + 1;
//		for (int i = 0; i < m; i++)
//		{
//			printf("%d", a1);
//			if (i < m - 1)
//				printf("+");
//			a1 += 2;
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int f(int n)
//{
//	static i = 1;
//	if (n >= 5)
//		return n;
//	n += i;
//	i++;
//	return f(n);
//}


//int main()
//{
//	/*double a = 0.8;
//	return 0;*/
//	/*char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//	int ret = f(1);
//	printf("%d", ret);
//	return 0;*/
//}

//int isleap_year(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		return 1;
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int m = 0;
//	int day = 0;
//	scanf("%d %d %d", &year, &m, &day);
//	int month[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int ret = 0;
//	for (int i = 0; i < m; i++)
//	{
//		ret += month[i];
//	}
//	if (isleap_year(year) && m > 2)
//		ret += 1;
//	printf("%d", ret + day);
//	return 0;
//}

//int main()
//{
//	
//	/*printf("%d", sizeof(int(*)[3]));*/
//	/*char arr[10] = { 0 };
//	int arr1[10] = { 0 };
//	scanf("%s", &arr);
//	printf("%s\n", arr);
//	printf("%s", &arr);*/
//	return 0;
//}
//int* printNumbers(int n, int* returnSize) 
//{
//	// write code here
//	int* ret = (int*)malloc(sizeof(int) * pow(10,n));
//	for (int i = 1; i < pow(10,n); i++)
//	{
//		ret[i - 1] = i;
//	}
//	*returnSize = n;
//	return ret;
//}
//int main()
//{
//	
//	int returnSize = 0;
//	int* ret = printNumbers(5, &returnSize);
//	for (int i = 0; i < returnSize; i++)
//	{
//		printf("%d", ret[i]);
//	}
//	return 0;
//}