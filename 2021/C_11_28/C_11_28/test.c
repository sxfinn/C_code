#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int isSubsequence(char* s, char* t)
{
    int sz1 = strlen(s);
    int sz2 = strlen(t);
    int tmp = -1;
    for (int i = 0; i < sz1; i++)
    {
        int j = 0;
        for (j = tmp + 1; j < sz2; j++)
        {
            if (s[i] == t[j])
            {
                tmp = j;
                break;
            }
        }
        if (j == sz2)
            return 0;
    }
    return 1;
}
int main()
{
    char arr1[] = "abc";
    char arr2[] = "aghbfc";
    int ret = isSubsequence(arr1, arr2);
    printf("%d", ret);
    return 0;
}
//int main()
//{
//	int cnt = 0;
//	int sum = 0;
//	int n = 0;
//	int max = 0, min = 100;
//	while (scanf("%d", &n)!=EOF)
//	{
//		sum += n;
//		min = min < n ? min : n;
//		max = max > n ? max : n;
//		cnt++;
//		if (cnt == 7)
//		{
//			printf("%.2f\n", (sum - max - min) / 5.0);
//			cnt = 0;
//			sum = 0;
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n)!=EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (i == n - 1)
//				for (int j = 0; j < n; j++)
//				{
//					printf("%c ", '*');
//				}
//			else
//			{
//				for (int j = 0; j < n; j++)
//				{
//					if (j == 0 || j == i)
//						printf("%c ", '*');
//					else
//						printf("%c ", ' ');
//				}
//			}
//			printf("\n");
//
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//
//	while ((scanf("%d", &n) | -1))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (j < n - i - 1)
//					printf("%c ", ' ');
//				else
//					printf("%c ", '*');
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	unsigned int a = 1;
//	int n = 0;
//	scanf("%d", &n);
//	a <<= n;
//	printf("%u", a);
//	return 0;
//}
//int numMusicPlaylists(int n, int goal, int k)
//{
//
//}
//
//int main()
//{
//
//	return 0;
//}
//typedef long long ll;
//int min(int a, int b)
//{
//    return a < b ? a : b;
//}
//int gcd(int a, int b)
//{
//    while (b)
//    {
//        int tmp = a % b;
//        a = b;
//        b = tmp;
//    }
//    return a;
//}
//ll lcm(int a, int b)
//{
//    return a / gcd(a, b) * b;
//}
//int nthUglyNumber(int n, int a, int b, int c)
//{
//    ll ab = lcm(a, b);
//    ll ac = lcm(a, c);
//    ll bc = lcm(b, c);
//    ll abc = lcm(lcm(a, b), c);
//    ll lo = min(min(a, b), c);
//    ll hi = n * lo;
//    ll mid = 0;
//    while (lo <= hi)
//    {
//        mid = (lo + hi) / 2;
//        ll tmp = mid / a + mid / b + mid / c - mid / ab - mid / bc - mid / ac + mid / abc;
//        if (tmp > n)
//        {
//            hi = mid - 1;
//        }
//        else if (tmp < n)
//        {
//            lo = mid + 1;
//        }
//        else
//            break;
//    }
//    if (mid % a == 0 || mid % b == 0 || mid % c == 0)
//    {
//        return mid;
//    }
//}
//int main()
//{
//    int ret = nthUglyNumber(3, 2, 3, 5);
//    printf("%d", ret);
//    return 0;
//}
//int nthUglyNumber(int n, int a, int b, int c)
//{
//    int ia = 1;
//    int ib = 1;
//    int ic = 1;
//    int ret = 0;
//    while (n--)
//    {
//        ret = min((a * ia), (ib * b), (ic * c));
//        if (ret == a * ia)
//            ia++;
//        if (ret == b * ib)
//            ib++;
//        if (ret == c * ic)
//            ic++;
//    }
//    return ret;
//}

//int uniquePaths(int m, int n)
//{
//    int arr[10][10];
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < m; i++)
//        arr[i][0] = 1;
//    for (j = 0; j < n; j++)
//        arr[0][j] = 1;
//    for (i = 1; i < m; i++)
//    {
//        for (j = 1; j < n; j++)
//        {
//            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
//        }
//    }
//    return arr[m - 1][n - 1];
//}
//int main()
//{
//    int ret = uniquePaths(3, 3);
//    printf("%d", ret);
//}

//int minFlipsMonoIncr(char* s)
//{
//	
//	int min = 0;
//	int cnt = 0;
//	int i = 0;
//	int sz = strlen(s);
//	if (sz <= 1)
//		return 0;
//	for (i = 0; i < sz; i++)
//		if (s[i] == '0' && ++cnt);
//	min = cnt;
//	for (i = 0; i < sz; i++)
//	{
//		if (s[i] == '0')
//		{
//			--cnt;
//			min = cnt;
//		}
//		++cnt;
//	}
//	return min;
//}
//void reverse(char* s)
//{
//    int sz = strlen(s);
//    int left = 0;
//    int right = sz - 1;
//    while (left < right)
//    {
//        char tmp = s[left];
//        s[left] = s[right];
//        s[right] = tmp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char arr[101] = { 0 };
//    gets(arr);
//    reverse(arr);
//    int sz = strlen(arr);
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        if (arr[i] == ' ')
//            arr[i] = 0;
//    }
//    reverse(arr);
//    for (i = 0; i < sz; i++)
//    {
//        if (arr[i] == 0)
//        {
//            reverse(arr + i + 1);
//        }
//    }
//    for (i = 0; i < sz; i++)
//    {
//        if (arr[i] == 0)
//            arr[i] = ' ';
//    }
//    printf("%s", arr);
//    return 0;
//}
//int main()
//{
//    
//    int a = 0;
//    int b = 0;  
//    int tmp = 0;
//    scanf("%d %d", &a, &b);
//    int mul = a * b;
//    while (b)
//    {
//        tmp = a % b;
//        a = b;
//        b = tmp;
//    }
//    printf("%d", mul / a);
//    return 0;
//}