#define _CRT_SECURE_NO_WARNINGS 1

int countTriplets(int* arr, int arrSize)
{
    int* tmp = (int*)malloc(sizeof(int) * (arrSize + 1));
    int cnt = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    tmp[0] = 0;
    for (i = 0; i < arrSize; i++)
    {
        tmp[i + 1] = arr[i] ^ tmp[i];
    }
    for (i = 0; i < arrSize; i++)
    {
        for (k = i + 1; k < arrSize; k++)
        {
            if (tmp[i] == tmp[k + 1])
                cnt += k - i;
        }
    }
    return cnt;
}
int* singleNumber(int* nums, int numsSize, int* returnSize)
{
    int* ret = (int*)malloc(sizeof(int) * 2);
    int i = 0;
    int tmp = 0;
    for (i = 0; i < numsSize; i++)
    {
        tmp ^= nums[i];
    }
    int tmp1 = tmp & (tmp - 1);
    int num = tmp - tmp1;
    int num1 = 0;
    int num2 = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] & num)
        {
            num1 ^= nums[i];
        }
        else
        {
            num2 ^= nums[i];
        }
    }
    ret[0] = num1;
    ret[1] = num2;
    *returnSize = 2;
    return ret;
}

int totalHammingDistance(int* nums, int numsSize)
{
    int sum = 0;
    for (int i = 0; i < 30; i++)
    {
        int num = 0;
        for (int j = 0; j < numsSize; j++)
        {
            num += (nums[j] & (1 << i));
        }
        sum += num * (numsSize - num);
    }
    return sum;
}

int hammingDistance(int x, int y)
{
    int cnt = 0;
    int tmp = x ^ y;
    while (tmp)
    {
        cnt++;
        tmp &= (tmp - 1);
    }
    return cnt;
}

int main()
{

	return 0;
}