#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int numSteps(char* s)
{
    int cnt = 0;
    int sz = strlen(s);
    int now = 0;
    int pre = 1;
    int flag = 0;
    while (sz != 1)
    {
        if (s[sz - 1] % 2)
        {
            pre = 1;
            cnt++;
            for (int i = sz - 1; i >= 0; i--)
            {
                now = s[i] - '0' + pre;
                s[i] = now % 2 + '0';
                pre = now / 2;
                if (i == 0 && pre)  //最高位进位
                {
                    flag = 1;
                    cnt += sz;
                    break;
                }
            }
            if (flag)
                break;
            cnt++;
            sz--;
        }
        else
        {
            cnt++;
            sz--;
        }
    }
    return cnt;
}
//int integerReplacement(int n)
//{
//    int cnt = 0;
//    while (n != 1)
//    {
//        if ((n & 1) == 0)
//        {
//            n /= 2;
//        }
//        else
//        {
//            n -= 1;
//        }
//        cnt++;
//    }
//    return cnt;
//}
int numSteps(char* s)
{
    int cnt = 0;
    int sz = strlen(s);
    int now = 0;
    int pre = 1;
    int flag = 0;
    int tmp = sz;
    while (sz != 1)
    {
        if (s[sz - 1] % 2)
        {
            pre = 1;
            cnt++;
            for (int i = sz - 1; i >= 0; i--)
            {
                now = s[i] - '0' + pre;
                s[i] = now % 2 + '0';
                pre = now / 2;
                if (i == 0 && pre)
                {
                    flag = 1;
                    cnt += sz;
                    break;
                }
            }
            if (flag)
                break;
            cnt++;
            sz--;
        }
        else
        {
            cnt++;
            sz--;
        }

    }
    return cnt;
}
int main()
{
    char arr[] = "11000";
    int ret = numSteps(arr);
    printf("%d ", ret);
    return 0;
}

//#define MAXN  100001//排序的最大个数
//				
//#define MAXT  8		//排序的数的最大位数
//
//#define BASE  10		//十进制数
//
//int powofbase[MAXT];	//权重位数组
//
//radix_bucket[BASE][MAXN];
//
//radix_bucketcount[BASE];
//
//void init_powofbase()
//{
//	powofbase[0] = 1;
//	for (int i = 1; i < MAXT; i++)
//	{
//		powofbase[i] = powofbase[i - 1] * BASE;
//	}
//}
//int get_radix(int n,int pos)
//{
//	return n / powofbase[pos] % 10;
//}
//void radixsort(int arr[], int sz)
//{
//	int pos = 0;
//	while (pos < MAXT)			//入队次数，即最大数的位数
//	{
//		memset(radix_bucketcount, 0, sizeof(radix_bucketcount));
//		//入队
//		for (int i = 0; i < sz; i++)
//		{
//			int rdx = get_radix(arr[i], pos);
//			radix_bucket[rdx][radix_bucketcount[rdx]++] = arr[i];
//		}
//		int p = 0;
//		//出队
//		for (int i = BASE -1; i >= 0 ; i--)
//		{
//			for (int j = 0; j < radix_bucketcount[i]; j++)
//			{
//				arr[p++] = radix_bucket[i][j];
//			}
//		}
//		pos++;
//	}
//}
//int main()
//{
//	init_powofbase();
//	int arr[] = { 1,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	radixsort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int check(int** mat, int sz, int col, int i, int j)
//{
//    for (int y = 0; y < sz; y++)
//    {
//        if (y == i)
//            continue;
//        if (mat[y][j] == 1)
//            return 0;
//    }
//    for (int x = 0; x < col; x++)
//    {
//        if (x == j)
//            continue;
//        if (mat[i][x] == 1)
//            return 0;
//    }
//    return 1;
//}
//int numSpecial(int** mat, int matSize, int* matColSize)
//{
//    int cnt = 0;
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < matSize; i++)
//    {
//        for (j = 0; j < matColSize[i]; j++)
//        {
//
//            if (mat[i][j])
//            {
//                if (check(mat, matSize, matColSize, i, j))
//                    cnt++;
//            }
//        }
//    }
//    return cnt;
//}
//
//

//在同一行的所有元素中最小
//在同一列的所有元素中最大
//int* luckyNumbers(int** matrix, int matrixSize, int* matrixColSize, int* returnSize)
//{
//	
//}
//int maximumWealth(int** accounts, int accountsSize, int* accountsColSize)
//{
//	
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int max = 0;
//	for (i = 0; i < accountsSize; i++)
//	{
//		sum = 0;
//		for (j = 0; j < accountsColSize[i]; j++)
//		{
//			sum += accounts[i][j];
//		}
//		if (sum > max)
//			max = sum;;
//	}
//	return max;
//}
//int diagonalSum(int** mat, int matSize, int* matColSize)
//{
//	int ans = 0;
//	int i = 0;
//	for (i = 0; i < matSize; i++)
//	{
//		ans += mat[i][i];
//	}
//	for (i = 0; i < matSize; i++)
//	{
//		ans += mat[i][matSize - 1 - i];
//	}
//	if (matSize % 2)
//		ans -= mat[matSize / 2][matSize / 2];
//	return ans;
//}
//int countNegatives(int** grid, int gridSize, int* gridColSize)
//{
//	int cnt = 0;
//	int r = gridSize;
//	int c = *gridColSize;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			if (grid[i][j] < 0)
//				cnt++;
//		}
//	}
//	return cnt;
//}
//int main()
//{
//
//	return 0;
//}