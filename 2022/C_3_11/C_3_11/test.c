
#include<stdio.h>
#include<stdlib.h>
//void swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
// 
//int removeElement(int* nums, int numsSize, int val)
//{
//	int len = numsSize - 1;
//	int pre = 0;
//	int back = len;
//	while (pre <= back)
//	{
//		if (nums[pre] == val)
//		{
//			if (nums[back] != val)
//			{
//				swap(nums + pre, nums + back);
//				pre++;
//				back--;
//			}
//			else
//			{
//				back--;
//			}
//		}
//		else
//		{
//			pre++;
//		}
//	}
//	return back + 1;
//}

int missnumber(int* nums, int numsSize)
{
	int ret = 0;
	for (int i = 0; i < numsSize; i++)
		ret ^= nums[i];
	return ret;
}

void reverse(int* left, int* right)
{
	while (left < right)
	{
		int tmp = *left;
		*left = *right;
		*right = tmp;
		++left;
		--right;
	}
}

void rotate1(int* nums, int numsSize, int k) 
{
	k %= numsSize;
	reverse(nums, nums + numsSize - 1);
	reverse(nums, nums + k - 1);
	reverse(nums + k, nums + numsSize - 1);
}

//void rotate(int* nums, int numsSize, int k) 
//{
//	k %= numsSize;
//	int* ret = (int*)malloc(sizeof(int) * numsSize * 2);
//	for (int i = 0; i < numsSize; i++)
//	{
//		ret[i] = nums[i];
//		ret[i + numsSize] = nums[i];
//	}
//	for (int i = 0; i < numsSize; ++i)
//	{
//		nums[i] = ret[i + numsSize - k];
//	}
//}

int removeElement(int* nums, int numsSize, int val)
{
	int i = 0;
	for (int j = 0; j < numsSize; ++j)
	{
		if (nums[j] != val)
		{
			nums[i] = nums[j];
			++i;
		}
	}
	return i;
}
typedef int sl_data_type;
typedef struct seq_list
{

	sl_data_type* data;
	int size;
	int capacity;
}seq_list;
void seq_list_init(seq_list* list)
{
	list->capacity = 0;
	list->data = NULL;
	list->size = 0;
}
void seq_list_push_back(seq_list* list, sl_data_type val)
{
	int newcapacity = 0;
	if (list->capacity == list->size)
	{
		newcapacity = list->capacity == 0 ? 4 : 2 * list->capacity;
		sl_data_type* tmp = (sl_data_type*)realloc(list->data, sizeof(sl_data_type) * newcapacity);
		if (tmp)
		{
			list->data = tmp;
		}
		else
			exit(-1);
	}

	list->data[list->size++] = val;
}
void seq_list_print(seq_list* list)
{
	for (int i = 0; i < list->size; i++)
	{
		printf("%d ", list->data[i]);
	}
	printf("\n");
}
int main()
{
	seq_list list;
	seq_list_init(&list);
	seq_list_push_back(&list,1);
	seq_list_push_back(&list,2);
	seq_list_push_back(&list,3);
	seq_list_push_back(&list, 1);
	seq_list_push_back(&list, 2);
	seq_list_push_back(&list, 3);
	seq_list_print(&list);
	return 0;
}