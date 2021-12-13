#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

int maxSubArray(int* nums, int numsSize)
{
    int max = -100000;
    int* sum = (int*)malloc(sizeof(int) * (numsSize + 1));
    sum[0] = 0;
    for (int i = 1; i <= numsSize; i++)
    {
        sum[i] = nums[i] + sum[i - 1];
    }
    for (int i = 1; i <= numsSize; i++)
    {
        for (int j = i; j <= numsSize; j++)
        {
            if (sum[j] - sum[i] > max)
                max = sum[j] - sum[i];
        }
    }
    return max;
}
//bool isPalindrome(int x)
//{
//	if (x < 0)
//		return 0;
//	if (x % 10 == 0 && x != 0)	
//		return 0;
//	
//	int reverse = 0;
//	while (x > reverse)
//	{
//		reverse = reverse * 10 + x % 10;
//		x /= 10;
//	}
//	if (reverse / 10 == x || reverse == x)
//		return 1;
//	return 0;
//}


//int isPalindrome(int x)
//{
//    char arr[25] = { 0 };
//    sprintf(arr, "%d", x);
//    int r = strlen(arr) - 1;
//    int l = 0;
//    while (l < r)
//    {
//        if (arr[l] != arr[r])
//            return 0;
//    }
//    return 1;
//}

//int hash[1000001];
//int* twoSum(int* nums, int numsSize, int target, int* returnSize)
//{
//    memset(hash, 0, sizeof(int) * 1000001);
//    int p = 0;
//    int* ret = (int*)malloc(sizeof(int) * 2);
//    for (int i = 0; i < numsSize; i++)
//    {
//        hash[nums[i]]++;
//    }
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (hash[target - nums[i]]&&target!=nums[i]*2)
//        {
//            ret[0] = i;
//            ret[1] = 
//            break;
//        }
//    }
//    *returnSize = 2;
//    return ret;
//}
//
//int main()
//{
//    int arr[] = { 3,2,4 };
//    int sz = 0;
//    int* ret = twoSum(arr, 3, 6, &sz);
//    printf("%d %d", ret[0],ret[1]);
//    return 0;
//}
//char** summaryRanges(int* nums, int numsSize, int* returnSize)
//{
//    char** ret = (char**)malloc(sizeof(char*) * numsSize);
//    for (int i = 0; i < numsSize; i++)
//    {
//        ret[i] = (char*)malloc(sizeof(char) * 30);
//    }
//    int slo = 0;
//    int fast = 0;
//    int p = 0;
//    while (slo < numsSize)
//    {
//        if (fast == numsSize - 1 || nums[fast + 1] - 1 != nums[fast])
//        {
//            if (fast - slo > 0)
//            {
//                sprintf(ret[p], "%d", nums[slo]);
//                sprintf(ret[p] + strlen(ret[p]), "->");
//                sprintf(ret[p] + strlen(ret[p]), "%d", nums[fast]);
//            }
//            else
//                sprintf(ret[p], "%d", nums[fast]);          
//            p++;
//            fast++;
//            slo = fast;
//        }
//        else
//            fast++;
//    }
//    *returnSize = p;
//    return ret;
//}
//int main()
//{
//    int nums[] = { -1};
//    int retsz = 0;
//    char** ret = summaryRanges(nums, 1, &retsz);
//    for (int i = 0; i < retsz; i++)
//    {
//        printf("%s\n", ret[i]);
//    }
//    return 0;
//}
//int findMin(int* nums, int numsSize)
//{
//    int lo = 1;
//    int hi = numsSize - 2;
//    while (lo < hi)
//    {
//        int mid = (lo + hi) / 2;
//        if (nums[mid] > nums[lo])
//        {
//            lo = mid;
//        }
//        else if (nums[mid] < nums[lo])
//        {
//            hi = mid;
//        }
//        else
//        {
//            lo = mid + 1;
//        }
//    }
//    return nums[hi];
//}
//
//int main()
//{
//    int arr[] = {4,5,6,7,0,1,2 };
//    int ret = findMin(arr, 7);
//    printf("%d ", ret);
//	return 0;
//}