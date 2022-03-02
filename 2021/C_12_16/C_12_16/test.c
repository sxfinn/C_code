#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


  //Definition for singly-linked list.
struct ListNode 
{
    int val;
    struct ListNode *next;
};
 

//删除链表中的重复元素
struct ListNode* deleteDuplicates(struct ListNode* head)
{
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    while (fast)
    {
        if (fast->val != slow->val)
        {
            slow->next = fast;
            slow = slow->next;
        }
        fast = fast->next;
    }
    slow->next = NULL;
    return head;
}


int** intervalIntersection(int** firstList, int firstListSize, int* firstListColSize, 	
	int** secondList, int secondListSize, int* secondListColSize, int* returnSize, int** returnColumnSizes)
{

}

//int minSubArrayLen(int target, int* nums, int numsSize)
//{
//	int min = numsSize + 1;
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		int flag = 0;
//		sum += nums[i];
//		while (sum >= target && j <= i)
//		{
//			flag = 1;
//			sum -= nums[j++];
//		}
//		int len = 0;
//		if (sum > target || flag == 1)
//		{
//			len = i - j + 1;
//			if (flag)
//			{
//				len++;
//			}
//			if (len < min)
//				min = len;
//		}
//
//	}
//	if (min == numsSize + 1)
//		return 0;
//	return min;
//}
//
//int main()
//{
//
//	int arr[] = { 2,3,1,2,4,3 };
//	int sz = 6;
//	int ret =  minSubArrayLen(7, arr, sz);
//	printf("%d", ret);
//	return 0;
//}
//int numSubarrayProductLessThanK(int* nums, int numsSize, int k)
//{
//	int ans = 0;
//	int pow = 1;
//	int left = 0, right = 0;
//	for (int right = 0; right < numsSize; right++)
//	{
//		pow *= nums[right];
//		while (pow >= k && left <= right)
//		{
//			pow /= nums[left++];
//		}
//		ans += right - left + 1;
//	}
//	return ans;
//}


//滑动窗口
//先设置一个长度为szp的窗口
// 判断第一个区间长度是否符合题意。
//接着让这个窗口移动，每次移动新增右边的一个元素，去掉最左边的一个元素。
//遍历结束即可。
//int* findAnagrams(char* s, char* p, int* returnSize)
//{
//	*returnSize = 0;
//	int hash1[26] = { 0 };
//	int hash2[26] = { 0 };
//	int szs = strlen(s);
//	int szp = strlen(p);
//	int  i = 0;
//	int* ret = (int*)malloc(sizeof(int) * szs);
//	for (i = 0; i < szp; i++)
//	{
//		hash1[s[i] - 'a']++;
//		hash2[p[i] - 'a']++;
//	}
//	int j = 0;
//	for (j = 0; j < 26; j++)
//	{
//		if (hash1[j] != hash2[j])
//			break;
//	}
//	if (j == 26)
//		ret[(*returnSize)++] = 0;
//	for (i = szp; i < szs; i++)
//	{
//		hash1[s[i] - 'a']++;
//		hash1[s[i - szp] - 'a']--;
//		for (j = 0; j < 26; j++)
//		{
//			if (hash1[j] != hash2[j])
//				break;
//		}
//		if (j == 26)
//			ret[(*returnSize)++] = i - szp + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	char s[] = "aa";
//	char p[] = "bb";
//	int sz = 1;
//	int* ret = findAnagrams(s, p, &sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", ret[i]);
//	}
//	return 0;
//}
//int* findAnagrams(char* s, char* p, int* returnSize)
//{
//    *returnSize = 0;
//    int hash[26] = { 0 };
//    int hash1[26] = { 0 };
//    int sz = strlen(s);
//    int len = strlen(p);
//    for (int i = 0; i < len; i++)
//    {
//        hash1[p[i] - 'a']++;
//    }
//    int* ret = (int*)malloc(sizeof(int) * sz);
//    for (int i = 0; i <= sz - len; i++)
//    {
//        memset(hash, 0, sizeof(hash));
//        int j = 0;
//        for (j = i; j < i + len; j++)
//        {
//            hash[s[j] - 'a']++;
//        }
//        int k = 0;
//        for (k = 0; k < 26; k++)
//        {
//            if (hash[k] != hash1[k])
//                break;
//        }
//        if (k == 26)
//        {
//            ret[(*returnSize)++] = i;
//        }
//    }
//    return ret;
//}

//int main()
//{
//
//	return 0;
//}