#define _CRT_SECURE_NO_WARNINGS 1
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cmp(const void* p1, const void* p2)
{
    return (*(int*)p1) - (*(int*)p2);
}
int** subsetsWithDup(int* nums, int numsSize, int* returnSize, int** returnColumnSizes)
{
    qsort(nums, numsSize, sizeof(int), cmp);
    int** ret = (int**)malloc(sizeof(int*) * (1 << numsSize));
    *returnColumnSizes = (int*)malloc(sizeof(int) * (1 << numsSize));
    *returnSize = 1 << numsSize;
    for (int i = 0; i < (1 << numsSize); i++)
        ret[i] = (int*)malloc(sizeof(int) * numsSize);
    memset(*returnColumnSizes, 0, sizeof(int) * (1 << numsSize));
    int p = 0;
    for (int i = 0; i < (1 << numsSize); i++)
    {
        int flag = 1;
        for (int j = 0; j < numsSize; j++)
        {
            if (i & (1 << j))
            {
                if (j > 0 && (i & (1 << (j - 1))) == 0 && nums[j - 1] == nums[j])
                {
                    flag = 0;
                    break;
                }
                else
                    ret[p][(*returnColumnSizes)[p]++] = nums[j];
            }
        }
        if (flag == 1)
        {
            p++;
        }
        else
        {
            (*returnColumnSizes)[p] = 0;
        }
    }
    *returnSize = p;
    return ret;
}
int main()
{
    int arr[] = { 1,2,2 };
    int sz = 3;
    int retsz = 0;
    int* colsz = NULL;
    int** colsz0 = &colsz;
    int** ret = subsetsWithDup(arr,sz, &retsz, colsz0);
    for (int i = 0; i < retsz; i++)
    {
        for (int j = 0; j < colsz[i]; j++)
        {
            printf("%d ", ret[i][j]);
        }
        printf("\n");
    }
	return 0;
}
//int factor(int n)
//{
//    int ans = 1;
//    while (n)
//    {
//        ans *= n;
//        n--;
//    }
//    return ans;
//}
//int onenum(int n)
//{
//    int cnt = 0;
//    while (n)
//    {
//        n &= (n - 1);
//        cnt++;
//    }
//    return cnt;
//}
//int** combine(int n, int k, int* returnSize, int** returnColumnSizes)
//{
//    int num = factor(n) / factor(k) / factor(n - k);
//    int** ret = malloc(sizeof(int*) * num);
//    *returnSize = num;
//    *returnColumnSizes = (int*)malloc(sizeof(int) * num);
//    for (int i = 0; i < num; i++)
//    {
//        ret[i] = (int*)malloc(sizeof(int) * k);
//        //(*returnColumnSizes)[i] = 0;
//    }
//    memset(*returnColumnSizes, 0, sizeof(int) * num);
//    int p = 0;
//    for (int i = 0; i < (1<<n); i++)
//    {
//        if (onenum(i) == k)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (i & (1 << j))
//                {
//                    ret[p][(*returnColumnSizes)[p]++] = j + 1;
//                }
//            }
//            p++;
//        }
//    }
//    return ret;
//}

//int cmp(const void* p1, const void* p2)
//{
//    return (*(int*)p1) - (*(int*)p2);
//}
//int** subsets(int* nums, int numsSize, int* returnSize, int** returnColumnSizes)
//{
//    qsort(nums, numsSize, sizeof(int), cmp);
//    int** ret = (int**)malloc(sizeof(int*) * (1 << numsSize));
//    *returnColumnSizes = (int*)malloc(sizeof(int) * (1 << numsSize));
//    *returnSize = 1 << numsSize;
//    for (int i = 0; i < (1 << numsSize); i++)
//        ret[i] = (int*)malloc(sizeof(int) * numsSize);        
//    memset(*returnColumnSizes, 0, sizeof(int) * (1<<numsSize));
//    int p = 0;
//    for (int i = 0; i < (1 << numsSize); i++)
//    {
//        for (int j = 0; j < numsSize; j++)
//        {
//            if (i & (1 << j))
//            {
//                if (j > 0 && (i & (1 << (j - 1))) == 0 && nums[j - 1] == nums[j])
//                    ret[p][(*returnColumnSizes)[p]++] = nums[j];
//            }
//        }
//    }
//    return ret;
//}



//int countMaxOrSubsets(int* nums, int numsSize)
//{
//    int cnt = 0;
//    int max = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        max |= nums[i];
//    }
//    for (int i = 1; i < (1 << numsSize); i++)
//    {
//        int ans = 0;
//        for (int j = 0; j < numsSize; j++)
//        {
//            if (i & (1 << j))
//            {
//                ans |= nums[j];
//            }
//        }
//        if (ans == max)
//            cnt++;
//    }
//    return cnt;
//}
//
//int main()
//{
//    int nums[] = { 1,3 };
//    int sz = sizeof(nums) / sizeof(nums[0]);
//    int ret = subsetXORSum(nums, sz);
//    printf("%d ", ret);
//    return 0;
//}
//int subsetXORSum(int* nums, int numsSize)
//{
//    int tmp = pow(2, numsSize);
//    int sum = 0;
//    for (int i = 1; i < tmp; i++)
//    {
//        int ans = 0;
//        for (int j = 0; j < numsSize; j++)
//        {
//            if (i & (1 << j))
//            {
//                ans ^= nums[j];
//            }
//        }
//        sum += ans;
//    }
//    return sum;
//}



//int* searchRange(int* nums, int numsSize, int target, int* returnSize)
//{
//    int* ret = (int*)malloc(sizeof(int) * 2);
//    int left = 0, right = numsSize - 1;
//    while (left <= right)
//    {
//        int mid = (left + right) / 2;
//        if (nums[mid] < target)
//            left = mid + 1;
//        else if (nums[mid] > target)
//            right = mid - 1;
//        else
//        {
//            left = mid;
//            right = mid;
//            break;
//        }
//    }
//    *returnSize = 2;
//    if (left > right)
//    {
//        ret[0] = -1;
//        ret[1] = -1;
//        return ret;
//    }
//    while (nums[left - 1] == target && left > 0)left--;
//    while (nums[right + 1] == target && right < numsSize - 1)right++;
//    ret[0] = left;
//    ret[1] = right;
//    return ret;
//}
//
//int main()
//{
//    int sz = 0;
//    int arr[] = { 1 };
//    int* ret = searchRange(arr, 1, 1, &sz);
//    printf("%d %d ", ret[0], ret[1]);
//    return 0;
//}
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