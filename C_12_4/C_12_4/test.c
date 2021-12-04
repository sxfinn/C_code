#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//
int main()
{
	int n = 9;
	float* pa = (float*)&n;
	printf("%d\n", n);
	printf("%f\n", *pa);
	return 0;
}
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		printf("小端字节序\n");
//	else
//		printf("大端字节序\n");
//	printf("%d ", *p);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 5;
//	printf("%d %d", a, b);
//	return 0;
//}
//#define maxn 1000001
//int a[maxn];
//void Input(int n, int* a) {
//    for (int i = 0; i < n; ++i) {
//        scanf("%d", &a[i]);
//    }
//}
//void Output(int n, int* a) {
//    for (int i = 0; i < n; ++i) {
//        if (i)
//            printf(" ");
//        printf("%d", a[i]);
//    }
//    puts("");
//}
//void MergeSort(int* nums, int l, int r) {
//    int i, mid, p, lp, rp;
//    int* tmp = (int*)malloc((r - l + 1) * sizeof(int));    // (1)  
//    if (l >= r) {
//        return;                                          // (2) 
//    }
//    mid = (l + r) >> 1;                                   // (3) 
//    MergeSort(nums, l, mid);                              // (4) 
//    MergeSort(nums, mid + 1, r);                            // (5) 
//    p = 0;                                                // (6) 
//    lp = l, rp = mid + 1;                                   // (7) 
//    while (lp <= mid || rp <= r) {                         // (8) 
//        if (lp > mid) {
//            tmp[p++] = nums[rp++];                        // (9) 
//        }
//        else if (rp > r) {
//            tmp[p++] = nums[lp++];                        // (10) 
//        }
//        else {
//            if (nums[lp] <= nums[rp]) {                    // (11) 
//                tmp[p++] = nums[lp++];
//            }
//            else {
//                tmp[p++] = nums[rp++];
//            }
//        }
//    }
//    for (i = 0; i < r - l + 1; ++i) {
//        nums[l + i] = tmp[i];                               // (12) 
//    }
//    free(tmp);                                            // (13) 
//}
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF) {
//        Input(n, a);
//        MergeSort(a, 0, n - 1);
//        Output(n, a);
//    }
//    return 0;
//}
//////(1) 申请一个辅助数组，用于对原数组进行归并计算；
////(2) (2)(2) 只有一个元素，或者没有元素的情况，则不需要排序；
////(3) (3)(3) 将数组分为[l, m i d][l, mid][l, mid] 和[m i d + 1, r][mid + 1, r][mid + 1, r] 两部分；
////(4) (4)(4) 递归排序[l, m i d][l, mid][l, mid] 部分；
////(5) (5)(5) 递归排序[m i d + 1, r][mid + 1, r][mid + 1, r] 部分；
////(6) (6)(6) 将需要排序的数组缓存到tmp中，用p作为游标；
////(7) (7)(7) 初始化两个数组的指针；
////(8) (8)(8) 当两个指针都没有到结尾，则继续迭代；
////(9) (9)(9) 只剩下右边的数组，直接排；
////(10) (10)(10) 只剩下走右边的数组，直接排；
////(11) (11)(11) 取小的那个先进tmp数组；
////(12) (12)(12) 别忘了将排序好的数据拷贝回原数组；
////(13) (13)(13) 别忘了释放临时数据，否则就内存泄漏了！！
////————————————————
//
//int maximumGap(int* nums, int numsSize)
//{
//
//}
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//    int i = 0;
//    if (m == 0)
//    {
//        for (i = 0; i < n; i++)
//        {
//            nums1[i] = nums2[i];
//        }
//        return;
//    }
//
//    for (i = 0; i < n; i++)
//    {
//        int x = nums2[i];
//        int j = 0;
//        for (j = m - 1; j >= 0; j--)
//        {
//            if (nums2[i] < nums1[j])
//            {
//                nums1[j + 1] = nums1[j];
//            }
//            else
//                break;
//        }
//        nums1[j + 1] = x;
//        m++;
//    }
//}
//int main()
//{
//    int nums[] = { 2,0 };//[0]
//   
//    int nums3[] = { 1 };
//    merge(nums, 2, 1, nums3, 2, 1);
//    printf("%d ", nums[0]);
//    printf("%d ", nums[1]);
//
//}
// 16843009
//void pushback(int* s)
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
//    int* target = (int*)malloc(sizeof(int) * numsSize);
//    memset(target, 0, sizeof(int) * numsSize);
//    int i = 0;
//    for (i = 0; i < indexSize; i++)
//    {
//        if (target[index[i]] == 16843009)
//        {
//            pushback(&target[index[i]]);
//        }
//        target[index[i]] = nums[i];
//    }
//    *returnSize = indexSize;
//    return target;
//}
//int* printNumbers(int n, int* returnSize)
//{
//    int num = pow(10, n);
//    int* ret = (int*)malloc(sizeof(int) * num);
//    for (int i = 1;i % num; i++)
//    {
//        ret[i] = i;
//    }
//    returnSize = num - 1;
//    return ret;
//}
//int hash[101];
//int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize)
//{
//    int* ret = (int*)malloc(sizeof(int) * numsSize);
//    memset(hash, 0, sizeof(int) * 101);
//    int i = 0;
//    int len = numsSize - 1;
//    for (i = 0; i < numsSize; i++)
//    {
//        hash[nums[i]]++;
//    }
//    for (i = 1; i < 101; i++)
//    {
//        hash[i] += hash[i - 1];
//    }
//    for (i = 0; i < numsSize; i++)
//    {
//        ret[i] = nums[i] ==  0 ? 0 : hash[nums[i] - 1];
//    }
//    *returnSize = numsSize;
//    return ret;
//}
//int main()
//{
//    int*ret = smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize)
//    return 0;
//}
//char* replaceSpace(char* s)
//{
//	int sz = strlen(s);
//	int cnt = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		if (s[i] == ' ')
//			cnt++;
//	}
//	int len = sz + cnt * 2;
//	s = (char*)realloc(s, sizeof(char) * len);
//
//	for (int i = sz - 1, j = len - 1; i < j; i--, j--)
//	{
//		if (s[i] == ' ')
//		{
//			s[j - 2] = '%';
//			s[j - 1] = '2';
//			s[j] = '0';
//			j -= 2;
//		}
//		else
//		{
//			s[j] = s[i];
//		}
//	}
//	return s;
//}
//
//int main()
//{
//	char arr[] = "we are happy";
//	char* ret = replaceSpace(arr);
//	printf("%s", ret);
//	return 0;
//}
//char* defangIPaddr(char* address)
//{
//	int sz = strlen(address);
//	int cnt = 0;
//	char* ret = (char*)malloc(sizeof(char) * sz * 2);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (address[i] == '.')
//		{
//			ret[cnt++] = '[';
//			ret[cnt++] = '.';
//			ret[cnt++] = ']';
//		}
//		ret[cnt++] = address[i];
//	}
//	ret[cnt] = '\0';
//	return ret;
//}
//char* reverseLeftWords(char* s, int n)
//{
//	
//	int sz = strlen(s);
//	int k = n % sz;
//	char* tmp = (char*)malloc(sizeof(char) * (k+2));
//	if(tmp!=NULL)
//		memset(tmp, 0, k + 2);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		tmp[i] = s[i];
//	}
//	tmp[k] = 0;
//	char* t = s;
//	while (*s)
//	{
//		*s = *(s + k);
//		s++;
//	}
//	if(tmp!=NULL)
//		strcat(t, tmp);
//	return t;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	char* ret= reverseLeftWords(arr,5);
//	printf("%s", ret);
//	return 0;
//}
//char* reverseLeftWords(char* s, int n)
//{
//    int sz = strlen(s);
//    int k = n % sz;
//    for (int j = 0;j < k; j++)
//    {
//        char tmp = *s;
//        for (int i = 0; i < sz - 1; i++)
//        {
//            s[i] = s[i + 1];
//        }
//        s[sz - 1] = tmp;
//    }
//    return s;
//}

//int* runningSum(int* nums, int numsSize, int* returnSize)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < numsSize; i++)
//	{
//		sum += nums[i];
//			
//	}
//	for (i = numsSize - 1; i > 0; i--)
//	{
//		sum -= nums[i];
//		nums[i] = sum+nums[i];	
//	}
//	*returnSize = numsSize;
//	return nums;
//}


//int* getConcatenation(int* nums, int numsSize, int* returnSize)
//{
//	int* ret = (int*)malloc(sizeof(int) * 2 * numsSize);
//	int k = 2;
//	int cnt = 0;
//	while (k--)
//	{
//		for (int i = 0; i < numsSize; i++)
//		{
//			ret[cnt++] = nums[i];
//		}
//	}
//	*returnSize = 2 * numsSize;
//	return ret;
//}
//int* shuffle(int* nums, int numsSize, int n, int* returnSize)
//{
//	int* ret = (int*)malloc(sizeof(int) * numsSize);
//	int i = 0, j = 0;
//	int cnt = 0;
//	for (i = 0, j = numsSize / 2 + 1; j < numsSize; i++, j++)
//	{
//		ret[cnt++] = nums[i];
//		ret[cnt++] = nums[j];
//	}
//	*returnSize = cnt;
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,5,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < sz; i++)
//	{
//		int x = arr[i];
//		for (j = i - 1; j >= 0; j--)
//		{
//			if (x < arr[j])
//			{
//				arr[j + 1] = arr[j];
//			}
//			else
//				break;
//		}
//		arr[j + 1] = x;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}