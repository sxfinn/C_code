#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int countTriples(int n)
{
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j+1; k <= n; k++)
            {
                if (i * i + j * j == k * k)
                    cnt += 2;
            }
        }
    }
    return cnt;
}
int main()
{
    int ret = countTriples(5);
    printf("%d", ret);
    return 0;
}
//char* longestCommonPrefix(char** strs, int strsSize)
//{
//    char* ret = (char*)malloc(sizeof(char) * 210);
//    if(ret!=NULL)
//        memset(ret, 0, sizeof(char) * 210);
//    int i = 0;
//    int cnt = 0;
//    int minsz = 200;
//    for (i = 0; i < strsSize; i++)
//    {
//        if ((int)strlen(strs[i]) < minsz)
//            minsz = strlen(strs[i]);
//    }
//    for (int j = 0; j < minsz; j++)
//    {
//        for (i = 1; i < strsSize; i++)
//        {
//            if (strs[i][j] != strs[i - 1][j])
//                break;
//        }
//        if (i == strsSize)
//            ret[cnt++] = strs[0][j];
//        else
//            break;
//    }
//    return ret;
//}
//int main()
//{
//    char* arr[] = { "cir","car" };
//    char* ret = longestCommonPrefix(arr, 2);
//    printf("%s", ret);
//    return 0;
//}
//void pushback( int* s )
//{
//    int cnt = 0;
//    while (s[cnt] != 16843009)
//        cnt++;
//    for (int i = cnt; i > 0; i--)
//    {
//        s[i] = s[i - 1];
//    }
//}
//int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize)
//{
//    int cnt = 0;
//    int* ret = (int*)malloc(sizeof(int) * indexSize );
//    memset(ret, 1, sizeof(int) * indexSize );
//    for (int i = 0; i < indexSize; i++)
//    {
//        if (ret[index[i]] != 16843009)
//            pushback(ret + index[i]);
//        ret[index[i]] = nums[i];
//        cnt++;
//    }
//    *returnSize = indexSize;
//    return ret;
//}
//int main()
//{
//    int size = 0;
//    int arr[] = { 0,1,2,3,4 };
//    int arr2[] = { 0,1,2,2,1 };
//    int* ret = createTargetArray(arr, 5, arr2, 5, &size);
//    for (int i = 0; i < size; i++)
//    {
//        printf("%d", ret[i]);
//    }
//    return 0;
//}
//int sumOddLengthSubarrays(int* arr, int arrSize)
//{
//    int fosum[6];
//    fosum[0] = 0;
//    int i = 0;
//    int ret = 0;
//    for (i = 1; i <= arrSize; i++)
//        fosum[i] = fosum[i - 1] + arr[i-1];
//    for (i = 1; i <= arrSize; i += 2)
//    {
//        for (int j = 0; j < arrSize; j++)
//        {
//            int end = j + i;
//            if (j + i <= arrSize)
//            {
//                ret = ret + fosum[end] - fosum[j];
//            }
//            else
//                break;
//        }
//    }
//    return ret;
//}
//int countGoodTriplets(int* arr, int arrSize, int a, int b, int c)
//{
//    int cnt = 0;
//    for (int i = 0; i < arrSize; i++)
//    {
//        for (int j = i + 1;j<arrSize;i++)
//        {
//            for (int k = j + 1; k < arrSize; k++)
//            {
//                if (abs(arr[i] - arr[j]) < a && abs(arr[j] - arr[k]) < b && abs(arr[i] - arr[k]) < c)
//                    cnt++;
//            }
//        }
//    }
//    return cnt;
//}
//int main()
//{
//    int arr[] = { 1,4,2,5,3 };
//    printf("%d", sumOddLengthSubarrays(arr, 5));
//    return 0;
//}
//int* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize)
//{
//    int* ret = (int*)malloc(sizeof(int) * candiesSize);
//    int max = -1;
//    for (int i = 0; i < candiesSize; i++)
//    {
//        if (candies[i] > max)
//            max = candies[i];
//    }
//    for (int i = 0; i < candiesSize; i++)
//    {
//        if (candies[i] + extraCandies >= max)
//            ret[i] = 1;
//        else
//            ret[i] = 0;
//    }
//    *returnSize = candiesSize;
//    return ret;
//}
//int main()
//{
//    int arr[] = { 2,3,5,1,3 };
//    int ex = 3;
//    int size = 0;
//    int* ret = kidsWithCandies(arr, 5, 3, &size);
//    for (int i = 0; i < size; i++)
//    {
//        printf("%d ", ret[i]);
//    }
//	return 0;
//}
//char findTheDifference(char* s, char* t)
//{
//    int hash[26] = { 0 };
//    int sz1 = strlen(s);
//    int sz2 = strlen(t);
//    int i = 0;
//    while (i < sz1 || i < sz2)
//    {
//        if (i < sz1)
//            hash[s[i] - 'a']++;
//        if (i < sz2)
//            hash[t[i] - 'a']--;
//        i++;
//    }
//    i = 0;
//    while (i < 26)
//    {
//        if (hash[i])
//            return i + 'a';
//        i++;
//    }
//    return;
//
//}
//char findTheDifference(char* s, char* t)
//{
//    int sz1 = strlen(s);
//    int sz2 = strlen(t);
//    int i = 0;
//    int ret = 0;
//    while (i < sz1 || i < sz2)
//    {
//        if (i < sz1)
//            ret = ret ^ s[i];
//        if (i < sz2)
//            ret = ret ^ t[i];
//        i++;
//    }
//    return ret;
//}

//int countKDifference(int* nums, int numsSize, int k)
//{
//
//}

//bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0, j = *matrixColSize - 1; i < matrixSize && j >= 0;)
//    {
//        if (matrix[i][j] > target)
//            j--;
//        else if (matrix[i][j] < target)
//            i++;
//        else
//            return true;
//    }
//    return false;
//}
