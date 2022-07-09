#define _CRT_SECURE_NO_WARNINGS 1


//int* productExceptSelf(int* nums, int numsSize, int* returnSize)
//{
//    int pow = 1;
//    int flag = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == 0)
//        {
//            flag++;
//            continue;
//        }
//        pow *= nums[i];
//    }
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == 0)
//            nums[i] = pow;
//        nums[i] = pow / nums[i];
//    }
//    *returnSize = numsSize;
//    return nums;
//}

//int minStartValue(int* nums, int numsSize)
//{
//	int min = 100;
//	int tmp = 0;
//	for (int i = 0; i < numsSize; i++)
//	{
//		tmp += nums[i];
//		if (tmp < min)
//			min = tmp;
//	}
//	return 1 - min > 0 ? 1 - min : 1;
//}
//
//
//int largestAltitude(int* gain, int gainSize)
//{
//	int max = 0;
//	int tmp = 0;
//	for (int i = 0; i < gainSize; i++)
//	{
//		tmp += gain[i];
//		if (max < tmp)
//			max = tmp;
//	}
//	return  max;
//}