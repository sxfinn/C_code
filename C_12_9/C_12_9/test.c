#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

uint32_t reverseBits(uint32_t n)
{
    unsigned int ans = 0;
    unsigned int p = (unsigned int)1;
    for (int i = 31; i >= 0; i--)
    {
        if (i != 31)
            p <<= 1;
        if ((n & ((unsigned int)1 << i)))
        {
            ans += (n & ((unsigned int)1 << i));
        }
    }
    return ans;
}
// struct TreeNode {
//    int val;
//    struct TreeNode* left;
//    struct TreeNode* right;
//    
//};
//
// int Hash[1024];
//
// void transfer(struct TreeNode* root) {
//     if (root == NULL)
//         return;
//         Hash[root->val] = 1;        // (1)
//         transfer(root->left);       // (2)
//         transfer(root->right);      // (3)
//     
// }
// 
// int numColor(struct TreeNode* root) {
//     int i, sum = 0;
//     memset(Hash, 0, sizeof(Hash));
//     transfer(root);
//     for (i = 1; i <= 1000; ++i) {
//         if (Hash[i]) ++sum;
//     }
//     return sum;
// }
//
//
//int numberOfSteps(int num)
//{
//    int cnt = 0;
//    while (num != 0)
//    {
//        if (num % 2)
//        {
//            cnt++;
//        }
//        num /= 2;
//        cnt++;
//    }
//    return cnt;
//}
//int main()
//{
//    int ret = numberOfSteps(14);
//    printf("%d ", ret);
//    return 0;
//}

//int main()
//{
//	_Bool arr[3];
//	printf("%d", arr[1]);
//	return 0;
//}
//int hash[110000000];
//int subarrayBitwiseORs(int* arr, int arrSize)
//{
//	int max = 0;
//	int ans = 0;
//	for (int i = 0; i < arrSize; i++)
//	{
//		max |= arr[i];
//	}
//	for (int i = 0; i < arrSize; i++)
//	{
//		int tmp = 0;
//		for (int j = i; j < arrSize; j++)
//		{
//			tmp |= arr[j];
//			hash[tmp] = 0;
//		}
//	}
//	hash[max] = 1; ans++;
//	for (int i = 0; i < arrSize; i++)
//	{
//		int tmp = 0;
//		for (int j = i; j < arrSize; j++)
//		{
//			
//			tmp |= arr[j];
//			if (tmp == max)
//				break;
//			if (hash[tmp] = 0)
//				ans++;
//		}
//	}
//	return ans;
//}
//int bit(int n, int i)
//{
//	return ((n & (1 << i)) == 0) ? 0 : 1;
//}
//
//int subarrayBitwiseORs(int* arr, int arrSize)
//{
//	int ans = 1;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 31; i++)
//	{
//		int flag1 = 0;
//		int flag0 = 0;
//		for (j = 0; j < arrSize; j++)
//		{
//			if (bit(arr[j], i))
//			{
//				flag1 = 1;				
//			}
//			else
//			{
//				flag0 = 1;
//			}
//		}
//		if (flag1 && flag0)
//		{
//			ans *= 2;
//		}
//	}
//	return ans - 1;
//}


//int main()
//{
//	int arr[] = { 1,1,2 };
//	int sz = 3;
//	int ret = subarrayBitwiseORs(arr, sz);
//	printf("%d ", ret);
//	return 0;
//}
//int bit(int n, int i)
//{
//	return ((n & (1 << i)) == 0) ? 0 : 1;
//}
//
//int minFlips(int a, int b, int c)
//{
//	int cnt = 0;
//	int i = 0;
//	for (i = 0; i < 31; i++)
//	{
//		int aibit = bit(a, i);
//		int bibit = bit(b, i);
//		int cibit = bit(c, i);
//		if ((aibit | bibit) == cibit)
//		{
//			continue;
//		}
//		else if ((bibit == aibit) && aibit == 0)
//		{
//			cnt += 2;
//		}
//		else if (cibit == 0)
//		{
//			cnt += (aibit + bibit);
//		}
//	}
//	return cnt;
//}


//int maxProduct(char** words, int wordsSize)
//{
//	int max = 0;
//	int* nums = (int*)malloc(sizeof(int) * wordsSize);
//	memset(nums, 0, sizeof(int) * wordsSize);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < wordsSize; i++)
//	{
//		int sz = strlen(words[i]);
//		for (j = 0; j < sz; j++)
//		{
//			nums[i] |= (1 << (words[i][j] - 'a'));
//		}
//	}
//	for (i = 0; i < wordsSize; i++)
//	{
//		for (j = i + 1; i < wordsSize; j++)
//		{
//			if ((nums[i] & nums[j]) == 0)
//			{
//				int sz2 = strlen(words[i]);
//				int sz1 = strlen(words[j]);
//				if (sz1 * sz2 > max)
//					max = sz1 * sz2;
//			}
//		}
//	}
//	return max;
//}
//
//
//int maxProduct(char** words, int wordsSize)
//{
//	int max = 0;
//	int* num = (int*)malloc(sizeof(int) * wordsSize);
//	memset(num, 0, sizeof(int) * wordsSize);
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < wordsSize; i++)
//	{
//		int sz = strlen(words[i]);
//		for (j = 0; j < sz; j++)
//		{
//			num[i] |= (1 << (words[i][j] - 'a'));
//		}
//	}
//	for (i = 0; i < wordsSize; i++)
//	{
//		
//		for (j = i+1; j < wordsSize; j++)
//		{
//			if ((num[i] & num[j]) == 0)
//			{
//				int sz1 = strlen(words[i]);
//				int sz2 = strlen(words[j]);
//				if (sz1 * sz2 > max)
//					max = sz1 * sz2;
//			}
//		}
//	}
//	return max;
//}
//
//int main()
//{
//	char* arr[] = { "abcw","baz","foo","bar","xtfn","abcdef" };
//	int sz = 6;
//	int ret = maxProduct(arr, 6);
//	printf("%d ", ret);
//	return 0;
//}
//int countMaxOrSubsets(int* nums, int numsSize)
//{
//    int ans = 0;
//    int max = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        max |= nums[i];
//    }
//    for (int i = 0; i < 32; i++)
//    {
//        int cnt = 0;
//        for (int j = 0; j < numsSize; j++)
//        {
//            if (nums[j] & (1 << i))
//                cnt++;
//        }
//        ans += cnt - 1;
//    }
//    return ans;
//}
//
//
//
//
//int hash[65536];
//int countTriplets(int* nums, int numsSize)
//{
//    memset(hash, 0, sizeof(int) * 65536);
//    int cnt = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        for (int j = 0; j < numsSize; j++)
//        {
//            hash[nums[i] & nums[j]]++;
//        }
//    }
//    for (int i = 0; i < 65536; i++)
//    {
//        if (i == 0)
//        {
//            cnt += hash[0] * numsSize;
//            continue;
//        }
//        if (hash[i])
//        {
//            for (int k = 0; k < numsSize; k++)
//            {
//                if ((nums[k] & i) == 0)
//                    cnt += hash[i];                
//            }
//        }
//    }
//    return cnt;
//}
//
//
//int insertBits(int N, int M, int i, int j)
//{
//    int p = 0;
//    for (p = i; p <= j; p++)
//    {
//        unsigned int k = ((unsigned)1 << p);
//        if ((N & k)!=0&&(M&1)==0)
//        {
//            N = N ^ k;       
//        }
//        else if((N&k)==0&&(M & 1)!=0)
//        {
//            N = N ^ k;
//        }
//        M >>= 1;
//    }
//    return N;
//}