#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int triangleNumber(int* nums, int numsSize)
{
    int i = 0;
    int j = 0;
    int minid = 0;
    for (i = 0; i < numsSize; i++)
    {
        minid = i;
        for (j = i; j < numsSize; j++)
        {
            if (nums[j] < nums[minid])
                minid = j;
        }
        swap(nums + i, nums + minid);
        
    }
}
int main()
{
    int arr[] = { 1,3,2,7,4,5,6,9,7,8,0 };
    int ret = triangleNumber(arr, 11);
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
//void sortColors(int* nums, int numsSize)
//{
//	for (int i = 0; i < numsSize - 1; ++i)
//	{
//		for (int j = 0; j < numsSize - 1 - i; ++j)
//		{
//			int tmp = 0;
//			if (nums[j] > nums[j + 1])
//			{
//				tmp = nums[j];
//				nums[j] = nums[j + 1];
//				nums[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//
//	return 0;
//}
//int containsPattern(int* arr, int arrSize, int m, int k)
//{
//    int cnt = 0;
//    for (int i = 0, j = m; j < arrSize ;i++,j++ )
//    {
//        
//        if (arr[i] == arr[j])
//        {
//            cnt++;
//            if (cnt == m * k - m)
//                return 1;
//        }
//        else
//        {
//            cnt = 0;
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int arr[] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
//    int ret = containsPattern(arr, sizeof(arr) / sizeof(arr[0]), 1, 100);
//    printf("%d", ret);
//	return 0;
//}
//int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
//{
//    int cnt = 0;
//    int* ret = (int*)malloc(sizeof(int) * nums1Size);
//    int len = nums1Size > nums2Size ? nums1Size : nums2Size;
//    int i = 0, j = 0;
//    for (i = 0; i < nums1Size; i++)
//    {
//        for (j = 0; j < nums2Size; j++)
//        {
//            if (nums1[i] == nums2[j])
//            {
//                ret[cnt++] = nums1[i];
//                break;
//            }
//        }
//    }
//    for (i = 0; i < cnt - 1; i++)
//    {
//        for (j = 0; j < cnt - i - 1; j++)
//        {
//            int tmp = 0;
//            if (ret[j] > ret[j + 1])
//            {
//                tmp = ret[j];
//                ret[j] = ret[j + 1];
//                ret[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < cnt - 1; i++)
//    {
//        while (ret[i] == ret[i + 1]&&i+1<cnt)
//        {
//            for (j = i + 1; j < cnt - 1; j++)
//            {
//                ret[j] = ret[j + 1];
//            }
//            cnt--;
//        }
//    }
//    *returnSize = cnt;
//    return ret;
//}
//int main()
//{
//    int arr1[] = { 1,2,2,2,1 };
//    int arr2[] = { 2,2 };
//    int i = 0;
//    int cnt = 0;
//    int* ret = intersection(arr1, 5, arr2, 2, &cnt);
//    for (i = 0; i < cnt; i++)
//    {
//        printf("%d", ret[i]);
//    }
//	return 0;
//}
//int hash[10];
//int nextBeautifulNumber(int n)
//{
//    int flag = 0;
//    while (n <= 1224444)
//    {
//        memset(hash, 0, 40);
//        n++;
//        flag = 0;
//        int tmp = n;
//        while (tmp)
//        {
//            hash[tmp % 10]++;
//            tmp /= 10;
//        }
//        int i = 0;
//        for ( i = 1; i < 10; i++)
//        {
//            if (hash[0] != 0 || hash[i] != i && hash[i] != 0)
//                break;
//        }
//        if (i == 10)
//            break;
//        
//    }
//    return n;
//}
//int main()
//{
//    int ret = nextBeautifulNumber(1);
//    printf("%d", ret);
//	return 0;
//}
//int* sequentialDigits(int low, int high, int* returnSize)
//{
//    int* ans = (int*)malloc(sizeof(int) * 300);
//    
//    int cnt = 0;
//    int ret = 0;
//    int i = 0;
//    int j = 0;
//    for (i = 1; i < 10; i++)
//    {
//        for (j = i; j < 10; j++)
//        {
//            if (ret < high)
//                ret = ret * 10 + j;
//            else
//            {
//                break;
//            }
//            if (ret >= low && ret <= high)
//            {
//                ans[cnt++] = ret;
//            }
//        }
//        ret = 0;
//    }
//    for (i = 0; i < cnt - 1; i++)
//    {
//        for (j = 0; j < cnt - i - 1; j++)
//        {
//            int tmp = 0;
//            if (ans[j] > ans[j + 1])
//            {
//                tmp = ans[j];
//                ans[j] = ans[j + 1];
//                ans[j + 1] = tmp;
//            }
//        }
//    }
//    *returnSize = cnt;
//    return ans;
//}
//int main()
//{
//    int low = 58;
//    int high = 155;
//    int size = 0;
//    int*ret =  sequentialDigits(low, high,&size);
//    for (int i = 0; i < size; i++)
//    {
//        printf("%d ", ret[i]);
//    }
//
//	return 0;
//}
//int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size, int d)
//{
//    int i = 0;
//    int j = 0;
//    int cnt = 0;
//    for (i = 0; i < arr1Size; i++)
//    {
//        for (j = 0; j < arr2Size; j++)
//        {
//            if (abs(arr1[i] - arr2[j]) <= d)
//                break;
//        }
//        if (j == arr2Size)
//            cnt++;
//    }
//    return cnt;
//}