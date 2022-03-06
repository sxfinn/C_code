#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int* singleNumbers(int* nums, int numsSize, int* returnSize) 
{
    int i = 0;
    int orsum = 0;
    for (i = 0; i < numsSize; i++)
        orsum ^= nums[i];
    int lowpos = orsum - (orsum & (orsum - 1));
    int result1 = 0;
    int result2 = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (lowpos & nums[i])
            result1 ^= nums[i];
        else
            result2 ^= nums[i];
    }
    int* ret = (int*)malloc(sizeof(int) * 2);
    *returnSize = 0;
    ret[(*returnSize)++] = result1;
    ret[(*returnSize)++] = result2;
    return ret;
}


int missingNumber(int* nums, int numsSize)
{
    int ret = 0;
    for (int i = 0; i < numsSize + 1; i++)
    {
        ret ^= nums[i];
    }
    return ret;
}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//

//#define OFFSETOF(A,B) (size_t)&(((A*)0)->B)
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//int main()
//{
//	int pos = OFFSETOF(struct S, c);
//	printf("%d", pos);
//	return 0;
//}
//#include<stdio.h>
//#define A 0b10101010101010101010101010101010
//#define B 0b01010101010101010101010101010101
//#define REVERSE(n) ((n<<1)&A) | ((n >> 1)&B)
//int main() 
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", n);
//	int ret = REVERSE(n);
//	printf("%d\n", ret);
//	return 0;
//}