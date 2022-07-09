#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>





//void swap(int* a, int* b)
//{
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//int partition(int arr[], int l, int r)
//{
//    int bench = rand() % (r - l + 1) + l;
//    int pivox = arr[bench];
//    int i = l+1;
//    int j = l+1;
//    swap(arr + bench, arr + l);
//    while (j <= r)
//    {
//        if (arr[j] < pivox)
//        {
//            swap(arr + i, arr + j);
//            i++;
//        }
//        j++;
//    }
//    swap(arr + i - 1, arr + l);
//    return i - 1;
//}
//
//void quicksort(int arr[], int l, int r)
//{
//    if (l < r)
//    {
//        int mid = partition(arr, l, r);
//        quicksort(arr, l, mid - 1);
//        quicksort(arr, mid + 1, r);
//    }
//}
//
//
//
//
//
//void swap(int* a, int* b)
//{
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//int partition(int arr[], int l, int r)
//{
//    int bench = rand() % (r - l + 1) + l;
//    int pivox = arr[bench];
//    int i = 1;
//    int j = 1;
//    swap(arr+bench, arr+l);
//    while (j <= r)
//    {
//        if (arr[j] < pivox)
//        {
//            swap(arr + i, arr + j);
//            i++;
//        }
//        j++;
//    }
//    swap(arr + j - 1, arr + l);
//    return j - 1;
//}
//
//void quicksort(int arr[], int l, int r)
//{
//    if (l < r)
//    {
//        int mid = partition(arr, l, r);
//        quicksort(arr, l, mid - 1);
//        quicksort(arr, mid + 1, r);
//    }
//}
//int numRescueBoats(int* people, int peopleSize, int limit)
//{
//    int cnt = 0;
//    quicksort(people, 0, peopleSize - 1);
//    int i = 0;
//    int j = 0;
//    for (i = 0, j = peopleSize - 1; i < j; )
//    {
//        if (people[j] < limit)
//        {
//            if (people[i] + people[j] <= limit)
//                i++;
//            cnt++;
//            j--;
//        }
//        else
//        {
//            j--, cnt++;
//        }
//    }
//    if (i == j)
//        cnt++;
//    return cnt;
//}
//

//int* sortedSquares(int* nums, int numsSize, int* returnSize)
//{
//    int* ret = (int*)malloc(sizeof(int) * numsSize);
//    int i = 0;
//    int neg = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (nums[i] < 0)
//            neg = i;
//        else
//            break;
//    }
//    i = neg;
//    int j = neg + 1;
//    int cnt = 0;
//    while (i >= 0 || j < numsSize)
//    {
//        if (i < 0)
//        {
//            ret[cnt++] = nums[j] * nums[j];
//            j++;
//        }
//        else if (j > numsSize - 1)
//        {
//            ret[cnt++] = nums[i] * nums[i];
//            i--;
//        }
//        else
//        {
//            if ((nums[i] * nums[i]) < (nums[j] * nums[j]))
//            {
//                ret[cnt++] = nums[i] * nums[i];
//                i--;
//            }
//            else
//            {
//                ret[cnt++] = nums[j] * nums[j];
//                j++;
//            }
//        }
//    }
//    *returnSize = cnt;
//    return ret;
//}
//int main()
//{
//    int arr[] = { -4,-1,0,3,10 };
//    int sz = 5;
//    int* ret = sortedSquares(arr, 5, &sz);
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d ", ret[i]);
//    }
//    return 0;
//}



//void Swap(int* a, int* b) {
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//
//int Partition(int a[], int l, int r)
//{
//    int i, j, pivox;
//    int idx = l + rand() % (r - l + 1);        // (1) 随机选择一个基准
//    pivox = a[idx];                            // (2) PIVOX代表基准值
//    Swap(&a[l], &a[idx]);                      // (3)将基准和最左边的值交换；
//    i = j = l + 1;                             // (4)大///于等于基准值的；
//                                               // 
//    while (i <= r)
//    {                                           // (5)开始遍历整i到达最右//边//的位置时；
//        if (a[i] < pivox)
//        {                                       // (6)如果比基准值小的，交換a[i]和a[
//            Swap(&a[i], &a[j]);
//            ++j;
//        }
//        ++i;                                   // (7)每次遍历i都需要自増
//    }
//    Swap(&a[l], &a[j - 1]);                      // (8)第j个元素以后都是不比基准值
//    return j - 1;
//}
//
////递归进行划分
//void QuickSort(int a[], int l, int r)
//{
//    if (l < r)
//    {
//        int mid = Partition(a, l, r);
//        QuickSort(a, l, mid - 1);
//        QuickSort(a, mid + 1, r);
//    }
//}
//int compare(const void* a, const void* b)
//{
//    return *(int*)a - *(int*)b;
//}
//int findMinDifference(char** timePoints, int timePointsSize)
//{
//    if (timePointsSize >= 1440)
//        return 0;
//    int min = 1440;
//    int* minute = (int*)malloc(sizeof(int) * 20000);
//    memset(minute, 0, sizeof(int) * 20000);
//    int i = 0;
//    for (i = 0; i < timePointsSize; i++)
//    {
//        minute[i] = ((timePoints[i][0] - '0') * 10 + (timePoints[i][1] - '0')) * 60 +
//            (timePoints[i][3] - '0') * 10 + (timePoints[i][4] - '0');
//    }
//    QuickSort(minute, 0, timePointsSize - 1);
//    for (i = 0; i < timePointsSize - 1; i++)
//    {
//        if (min > minute[i + 1] - minute[i])
//            min = minute[i + 1] - minute[i];
//        if (min == 0)
//            return 0;
//    }
//    return (minute[0] - 0 + (1440 - minute[timePointsSize - 1])) < min ? (minute[0] - 0 + (1440 - minute[timePointsSize - 1])) : min;
//}
//int main()
//{
//
//    return 0;
//}
//void swap(int* a, int* b)
//{
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//int patition(int arr[], int l,int r)
//{
//    int bench = rand() % (r - l + 1) + l;
//    int pivox = arr[bench];
//    int i = 1, j = 1;
//    swap(arr + bench, arr + l);
//    while (j <= r)
//    {
//        if (arr[j] < pivox)
//        {
//            swap(arr + j, arr + i);
//            i++;
//        }
//        j++;
//    }
//    swap(arr + j - 1, arr + l);
//    return j - 1;
//}
//void quicksort(int arr, int l, int r)
//{
//    if (l < r)
//    {
//        int mid = patition(arr, l, r);
//        quicksort(arr, l, mid);
//        quicksort(arr, mid + 1, r);
//    }
//}
//int findMinDifference(char** timePoints, int timePointsSize)
//{
//    if (timePointsSize >= 1440)
//        return 0;
//    int min = 1440;
//    int* minute = (int*)malloc(sizeof(int) * 20000);
//    memset(minute, 0, sizeof(int) * 20000);
//    int i = 0;
//    for (i = 0; i < timePointsSize; i++)
//    {
//        minute[i] = ((timePoints[i][0] - '0') * 10 + (timePoints[i][1] - '0')) * 60 +
//            (timePoints[i][3] - '0') * 10 + (timePoints[i][4] - '0');
//    }
//    quicksort(minute,0,timePointsSize);
//    for (i = 0; i < timePointsSize - 1; i++)
//    {
//        if (min > minute[i + 1] - minute[i])
//            min = minute[i + 1] - minute[i];
//        if (min == 0)
//            return 0;
//    }
//    return (minute[0] - 0 + (1440 - minute[timePointsSize - 1])) < min ? (minute[0] - 0 + (1440 - minute[timePointsSize - 1])) : min;
//}
////快排
//void swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int patition(int a[], int l, int r)
//{
//	int i, j, pivox;
//	int idx = l + rand() % (r - l + 1);        // (1) 随机选择一个基准
//	pivox = a[idx];                            // (2) PIVOX代表基准值
//	swap(&a[l], &a[idx]);                      // (3)将基准和最左边的值交换；
//	i = j = l + 1;                             // (4)i和j是两个同步指针，都从l+1开始；j-1以后的数都是大于等于基准值的；
//											   // 
//	while (i <= r)
//	{                                           // (5)开始遍历整个排序区间，i一定比j走的快，当i到达最右边的位置时，遍历结束；
//		if (a[i] < pivox)
//		{                                       // (6)如果比基准值小的，交換a[i]和a[j],并且自増j
//			swap(&a[i], &a[j]);
//			++j;
//		}
//		++i;                                   // (7)每次遍历i都需要自増
//	}
//	swap(&a[l], &a[j - 1]);                      // (8)第j个元素以后都是不比基准值小的元素
//	return j - 1;
//}
//
//void quicksort(int arr[], int l, int r)
//{
//	if (l >= r)
//		return;
//		int mid = patition(arr, l, r);
//		quicksort(arr, l, mid);
//		quicksort(arr, mid + 1, r);
//	
//}
//int main()
//{
//	int arr[] = { 2,1,2,34,345,57,2,4457,};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	quicksort(arr, 0, sz - 1);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int patition(int a[], int l, int r)
//{
//	int i, j, pivox;
//	int idx = l + rand() % (r - l + 1);        // (1) 随机选择一个基准
//	pivox = a[idx];                            // (2) PIVOX代表基准值
//	swap(&a[l], &a[idx]);                      // (3)将基准和最左边的值交换；
//	i = j = l + 1;                             // (4)i和j是两个同步指针，都从l+1开始；j-1以后的数都是大于等于基准值的；
//											   // 
//	while (i <= r)
//	{                                           // (5)开始遍历整个排序区间，i一定比j走的快，当i到达最右边的位置时，遍历结束；
//		if (a[i] < pivox)
//		{                                       // (6)如果比基准值小的，交換a[i]和a[j],并且自増j
//			swap(&a[i], &a[j]);
//			++j;
//		}
//		++i;                                   // (7)每次遍历i都需要自増
//	}
//	swap(&a[l], &a[j - 1]);                      // (8)第j个元素以后都是不比基准值小的元素
//	return j - 1;
//}
// 
//int patition(int a[], int l, int r)
//{
//	int i, j, pivox;
//	int idx = l + rand() % (r - l + 1);        // (1) 随机选择一个基准
//	pivox = a[idx];                            // (2) PIVOX代表基准值
//	swap(&a[l], &a[idx]);                      // (3)将基准和最左边的值交换；
//	i = j = l + 1;                             // (4)i和j是两个同步指针，都从l+1开始；j-1以后的数都是大于等于基准值的；
//											   // 
//	while (i <= r)
//	{                                           // (5)开始遍历整个排序区间，i一定比j走的快，当i到达最右边的位置时，遍历结束；
//		if (a[i] < pivox)
//		{                                       // (6)如果比基准值小的，交換a[i]和a[j],并且自増j
//			swap(&a[i], &a[j]);
//			++j;
//		}
//		++i;                                   // (7)每次遍历i都需要自増
//	}
//	swap(&a[l], &a[j - 1]);                      // (8)第j个元素以后都是不比基准值小的元素
//	return j - 1;
//}


//void swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int patition(int arr[], int l, int r)
//{
//	int pre = 0;
//	int slo = 0;
//	int bench = l + rand() % (r - l + 1);
//	int pivo = arr[bench];
//	while (pre <= r)
//	{
//		if (arr[pre] <= pivo)
//		{
//			swap(arr + pre, arr + slo);
//			slo++;
//		}
//		pre++;
//	}
//	while (arr[slo] != pivo)
//		slo++;
//	return slo;
//}


//int main()
//{
//	int n = 9;
//	float* pa = (float*)&n;
//	printf("%f", *pa);
//	return 0;
//}
//int cmp(const void* p1, const void* p2)
//{
//    return (*(int*)p1) - (*(int*)p2);
//}
//int numRescueBoats(int* people, int peopleSize, int limit)
//{
//    int cnt = 0;
//    qsort(people, peopleSize, sizeof(int), cmp);
//    int i = 0;
//    int j = 0;
//    for (i = 0, j = peopleSize - 1; i < j; )
//    {
//        if (people[j] < limit)
//        {
//            if (people[i] + people[j] <= limit)
//                i++;
//            cnt++;
//            j--;
//        }
//        else
//        {
//            j--, cnt++;
//        }       
//    }
//    if (i == j)
//        cnt++;
//    return cnt;
//}
//int main()
//{
//    int arr[] = { 1,2,2,3 };
//    int ret = numRescueBoats(arr, 4, 3);
//    printf("%d ", ret);
//    return 0;
//}
//void merge(int* A, int ASize, int m, int* B, int BSize, int n)
//{
//    if (m == 0)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            A[i] = B[i];
//        }
//        return;
//    }
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int k = B[i];
//        int j = 0;
//        for (j = m - 1; j >= 0; j--)
//        {
//            if (B[i] < A[j])
//            {
//                A[j + 1] = A[j];
//            }
//            else
//                break;
//        }
//        A[j + 1] = k;
//        m++;
//    }
//}
//int main()
//{
//    int arr1[] = { 1,2,3,0,0,0 };
//    int arr2[] = { 2,5,6 };
//    merge(arr1, 0, 3, arr2, 0, 3);
//    for (int i = 0; i < 6; i++)
//    {
//        printf("%d ", arr1[i]);
//    }
//    return 0;
//}
//void merge_sort(int arr[], int l, int r)
//{
//	if (l >= r)
//		return;
//	int* tmp = (int*)malloc(sizeof(int) * (r - l + 1));
//	int mid = (l + r) / 2;
//	merge_sort(arr, l, mid);
//	merge_sort(arr, mid + 1, r);
//	int p = 0;
//	int pl = l, pr = mid + 1;
//	while (pl <= mid || pr <= r)
//	{
//		if (pl > mid)
//			tmp[p++] = arr[pr++];
//		else if (pr > r)
//			tmp[p++] = arr[pl++];
//		else
//		{
//			if (arr[pl] > arr[pr])
//				tmp[p++] = arr[pr++];
//			else
//				tmp[p++] = arr[pl++];
//		}
//	}
//	for (int i = 0; i < r - l + 1; i++)
//	{
//		arr[l + i] = tmp[i];
//	}
//	free(tmp);
//}
//int containsDuplicate(int* nums, int numsSize)
//{
//	int l = 0, r = numsSize - 1;
//	merge_sort(nums, l, r);
//	for (int i = 0; i < numsSize - 1; i++)
//	{
//		if (nums[i] == nums[i + 1])
//			return 1;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int arr[] = { 1,4,6,7,0,7,42,23,13,78 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = containsDuplicate(arr, sz);
//	printf("%d ", ret);
//	return 0;
//}
//void merge_sort(int arr[], int l, int r)
//{
//	if (l >= r)
//		return;
//	int* tmp = (int*)malloc(sizeof(int) * (r - l + 1));
//	int mid = (l + r) >> 1;
//	merge_sort(arr, l, mid);
//	merge_sort(arr, mid + 1, r);
//	int p = 0;
//	int pl = l;
//	int pr = mid + 1;
//	while (pl <= mid || pr <= r)
//	{
//		if (pl > mid)
//			tmp[p++] = arr[pr++];
//		else if (pr > r)
//			tmp[p++] = arr[pl++];
//		else
//		{
//			if (arr[pr] > arr[pl])
//				tmp[p++] = arr[pl++];
//			else
//				tmp[p++] = arr[pr++];
//		}
//	}
//	for (int i = 0; i < r - l + 1; i++)
//	{
//		arr[l + i] = tmp[i];
//	}
//}
//int maximumGap(int* nums, int numsSize)
//{
//	if (numsSize < 2)
//		return 0;
//	int max = -1;
//	int l = 0, r = numsSize - 1;
//	merge_sort(nums, l, r);
//	for (int i = 1; i < numsSize; i++)
//	{
//		if (nums[i] - nums[i - 1] > max)
//		{
//			max = nums[i] - nums[i - 1];
//		}
//	}
//	return max;
//}


//归并排序
//void merge_sort(int arr[], int l ,int r)
//{
//	if (l >= r)
//		return;
//	int* tmp = (int*)malloc(sizeof(int) * (r - l + 1));
//	int mid = (l + r) / 2;
//	merge_sort(arr, l, mid);
//	merge_sort(arr, mid + 1, r);
//	int p = 0;
//	int pl = l;
//	int pr = mid + 1;
//	while (pl <= mid || pr <= r)
//	{
//		if (pl > mid)
//		{
//			tmp[p++] = arr[pr++];
//		}
//		else if (pr > r)
//		{
//			tmp[p++] = arr[pl++];
//		}
//		else
//		{
//			if (arr[pl] > arr[pr])
//			{
//				tmp[p++] = arr[pr++];
//			}
//			else
//			{
//				tmp[p++] = arr[pl++];
//			}
//		}
//		
//	}
//	for (int i = 0; i < r - l + 1; i++)
//	{
//		arr[l + i] = tmp[i];
//	}
//	free(tmp);
//}
//int main()
//{
//	int arr[] = { 2,6,8,3,7,0,1,3,7,5,68, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int l = 0;
//	int r = sz - 1;
//	merge_sort(arr,l, r );
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}