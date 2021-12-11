#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int* searchRange(int* nums, int numsSize, int target, int* returnSize)
{
    int* ret = (int*)malloc(sizeof(int) * 2);
    int left = 0, right = numsSize - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (nums[mid] < target)
            left = mid + 1;
        else if (nums[mid] > target)
            right = mid - 1;
        else
        {
            left = mid;
            right = mid;
            break;
        }
    }
    *returnSize = 2;
    if (left > right)
    {
        ret[0] = -1;
        ret[1] = -1;
        return ret;
    }
    while (nums[left - 1] == target && left > 0)left--;
    while (nums[right + 1] == target && right < numsSize - 1)right++;
    ret[0] = left;
    ret[1] = right;
    return ret;
}

int main()
{
    int sz = 0;
    int arr[] = { 1 };
    int* ret = searchRange(arr, 1, 1, &sz);
    printf("%d %d ", ret[0], ret[1]);
    return 0;
}
//void swap(int* a, int* b)
//{
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//int removeElement(int* nums, int numsSize, int val)
//{
//    int len = numsSize - 1;
//    int pre = 0;
//    int back = len;
//    while (pre <= back)
//    {
//        if (nums[pre] == val )
//        {
//            if (nums[back] != val)
//            {
//                swap(nums + pre, nums + back);
//                pre++;
//                back--;
//            }
//            else
//            {
//                back--;
//            }
//        }
//        else
//        {
//            pre++;
//        }
//    }
//    return back + 1;
//}
//int main()
//{
//    int arr[] = { 3,2,2,3 };
//    int sz = removeElement(arr, 4, 3);
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//int hash[100001];
//char** findRelativeRanks(int* score, int scoreSize, int* returnSize)
//{
//    int cnt = 0;
//    char* arr[] = { "Gold Medal","Silver Medal","Bronze Medal" };
//    char** ret = malloc(sizeof(char*) * scoreSize);
//    *returnSize = scoreSize;
//    memset(hash, 15, sizeof(int) * 1000001);
//    for (int i = 0; i < scoreSize; i++)
//    {
//        hash[score[i]] = i;
//    }
//    char arr[10000];
//    int p = 0;
//    for (int i = 100000; i >= 0; i--)
//    {
//        if (hash[i] >= 0)
//        {
//            itoa(hash[i], arr, 10);
//            if (cnt < 3)
//            {
//                
//                ret[hash[i]] = arr[cnt];
//            }
//            else
//            {
//                strcpy(ret[hash[i]], arr);
//            }
//            cnt++;
//        }
//    }
//}
//
//int main()
//{
//    char** ret = findRelativeRanks(int* score, int scoreSize, int* returnSize)
//    return 0;
//}
//
//int maxPower(char* s)
//{
//    int cnt = 0;
//    int max = 0;
//    int len = strlen(s);
//    for (int i = 0; i < len; i++)
//    {
//        cnt++;
//        if (cnt > max)
//            max = cnt;
//        if (s[i] != s[i + 1])
//            cnt = 0;
//    }
//    return cnt;
//}
//int main()
//{
//    int ret = maxPower("leetcode");
//    printf("%d ", ret);
//    return 0;
//}
//int insertBits(int N, int M, int i, int j)
//{
//    for (int x = i; x <= j; x++)
//    {
//        N = N & (~(1 << x));
//    }
//    return N | M;
//}
//int main()
//{
//    int ret = insertBits(1024, 19, 2, 6);
//    return 0;
//}