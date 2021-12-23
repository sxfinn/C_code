#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char** fizzBuzz(int n, int* returnSize)
{
    *returnSize = 0;
    char** ret = (char**)malloc(sizeof(char*) * n);
    for (int i = 0; i < n; i++)
    {
        ret[i] = (char*)malloc(sizeof(char) * 9);
    }
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            strcpy(ret[i - 1], "FizzBuzz");
        }
        else if (i % 3 == 0)
            strcpy(ret[i - 1], "Fizz");
        else if (i % 5 == 0)
            strcpy(ret[i - 1], "Buzz");
        else
            sprintf(ret[i - 1], "%d", i);
        (*returnSize)++;
    }
    return ret;
}

int main()
{
    int sz = 1;
    char** ret = fizzBuzz(3, &sz);
    for (int i = 0; i < 3; i++)
    {
        printf("%s", ret[i]);
    }
    return 0;
}
//int maxScore(int* cardPoints, int cardPointsSize, int k)
//{
//	int sum = 0;
//	int len = cardPointsSize - k;
//	int sumlen = 0;
//	for (int i = 0; i < cardPointsSize; i++)
//	{
//		sum += cardPoints[i];
//	}
//	for (int i = 0; i < len; i++)
//	{
//		sumlen += cardPoints[i];
//	}
//	if (len == 0)
//		return sum;
//	int min = sumlen;
//	int l = 0;
//	int r = len;
//	while (r < cardPointsSize)
//	{
//		sumlen += cardPoints[r];
//		sumlen -= cardPoints[l];
//		r++;
//		l++;
//		if (min > sumlen)
//			min = sumlen;
//	}
//	return sum - min;
//}
//int main()
//{
//	int arr[] = { 1, 79, 80, 1, 1, 1, 200, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = maxScore(arr, sz, 3);
//	printf("%d", ret);
//	return 0;
//}
//int maxScore(int* cardPoints, int cardPointsSize, int k)
//{
//	int sum = 0;
//	int sumpre = 0;
//	int sumback = 0;
//	int i = 0, j = 0;
//	int p = 0;
//	for (i = 0, j = cardPointsSize - 1; i < k && j > cardPointsSize - 1 - k; i++,j--)
//	{
//		sumpre += cardPoints[i];
//		sumback += cardPoints[j];
//	}
//	int maxn = 0;
//	for (i = 0, j = cardPointsSize - 1; i < k && j > cardPointsSize - 1 - k;)
//	{
//		if (cardPoints[i] != cardPoints[j])
//		{
//			maxn = max(cardPoints[i], cardPoints[j]);
//			sum += maxn;
//			if (maxn == cardPoints[i])
//				i++;
//			else
//				j--;
//		}
//		else
//		{
//			if (sumpre < sumback)
//			{
//				sum += cardPoints[j];
//				sumback -= cardPoints[j];
//				sumpre -= cardPoints[k - 1 - p];
//				j--;
//			}
//			else
//			{
//				sum += cardPoints[i];
//				sumpre -= cardPoints[i];
//				sumback -= cardPoints[cardPointsSize - k - p];
//				i++;
//			}
//		}
//		p++;
//		if (p == k)
//			break;
//	}
//	return sum;
//}


//int hash[101];
//int rangeSum(int* nums, int numsSize, int n, int left, int right)
//{
//	int* sum = (int*)malloc(sizeof(int) * (numsSize + 1));
//	memset(hash, 0, sizeof(hash));
//	int i = 0;
//	int p = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		hash[nums[i]]++;
//	}
//	for (int i = 1; i < 101; i++)
//	{
//		while (hash[i])
//		{
//			nums[p++] = i;
//			hash[i]--;
//		}
//	}
//	sum[0] = 0;
//	for (i = 1; i <= numsSize; i++)
//	{
//		sum[i] = sum[i - 1] + nums[i - 1];
//	}
//	
//	
//}

