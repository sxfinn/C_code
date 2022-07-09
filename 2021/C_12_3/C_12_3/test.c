#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int tribonacci(int n)
//{
//	if (n < 2)
//		return n;
//	if (n == 2)
//		return 1;
//	int t0, t1 = 1, t2 = 1;
//	int ret = 0;
//	while (n > 2)
//	{
//		ret = t0 + t1 + t2;
//		t0 = t1;
//		t1 = t2;
//		t2 = ret;
//		n--;
//	}
//	return ret;
//}
//int findMin(int* nums, int numsSize)
//{
//	int lo = 0;
//	int hi = numsSize - 1;
//	while (lo < hi)
//	{
//		int mid = (hi + lo) / 2;
//		if (nums[mid] < nums[hi])
//		{
//			hi = mid;
//		}
//		else if (nums[mid] > nums[hi])
//		{
//			lo = mid + 1;
//		}
//	}
//	return nums[hi];
//}
//bool search(int* nums, int numsSize, int target)
//{
//    if (numsSize == 0)
//        return 0;
//    if (numsSize == 1)
//        return nums[0] == target;
//    int lo = 0;
//    int hi = numsSize - 1;
//    while (lo <= hi)
//    {
//        int mid = (lo + hi) / 2;
//        if (nums[mid] == target)
//            return 1;
//        if (nums[mid] == nums[lo] && nums[mid] == nums[hi])
//        {
//            lo++;
//            hi--;
//        }
//        else if (nums[mid] >= nums[lo])
//        {
//            if (nums[lo] <= target && target < nums[mid])
//            {
//                hi = mid - 1;
//            }
//            else
//            {
//                lo = mid + 1;
//            }
//        }
//        else
//        {
//            if (nums[mid] < target && target <= nums[hi])
//            {
//                lo = mid + 1;
//            }
//            else
//            {
//                hi = mid - 1;
//            }
//        }
//    }
//    return 0;
//}
//int search(int* nums, int numsSize, int target)
//{
//    int lo = 0;
//    int hi = numsSize - 1;
//    while (lo <= hi)
//    {
//        int mid = (lo + hi) / 2;
//        if (nums[mid] == target)
//            return mid;
//        if (nums[mid] > nums[lo])
//        {
//            if (nums[lo] < target && target < nums[mid])
//            {
//                hi = mid - 1;
//            }
//            else
//            {
//                lo = mid + 1;
//            }
//        }
//        else
//        {
//            if (nums[mid] < target && target < nums[hi])
//            {
//                lo = mid + 1;
//            }
//            else
//            {
//                hi = mid - 1;
//            }
//        }
//    }
//    return -1;
//}
//int main()
//{
//
//	rerurn 0;
//}