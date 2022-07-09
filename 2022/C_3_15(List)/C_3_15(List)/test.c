#include"test.h"

//struct A
//{
//	int nums;
//	int a;
//
//};
//struct B
//{
//	int nums ;
//	int b ;
//	struct A a1;
//};
//
//int main()
//{
//	struct A n1 = { 8,9 };
//	struct B n = {1,2,n1};
//	return 0;
//}
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//	int i = m - 1;
//	int j = n - 1;
//	int cur = nums1Size - 1;
//	while (i >= 0 && j >= 0)
//	{
//		if (nums1[i] > nums2[j])
//			nums1[cur--] = nums1[i--];
//		else
//			nums1[cur--] = nums2[j--];
//	}
//	while(j >= 0)
//		nums1[cur--] = nums2[j--];
//}

//单链表的增删查改
//#include"test.h"
//
//SListNode* new(DataType x)
//{
//	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
//	if (newnode != NULL)
//	{
//		newnode->val = x;
//		newnode->next = NULL;
//	}
//	else
//	{
//		printf("malloc error");
//		exit(-1);
//	}
//	return newnode;
//}
//
//void SListPushBack(SListNode** pphead, DataType x)
//{
//	SListNode* newnode = new(x);
//	if (*pphead == NULL)
//	{
//		*pphead = newnode;
//	}
//	else
//	{
//		SListNode* cur = *pphead;
//		while (cur->next)
//		{
//			cur = cur->next;
//		}
//		cur->next = newnode;
//	}
//}
//
//void SListPrint(SListNode* phead)
//{
//	SListNode* cur = phead;
//	while (cur)
//	{
//		printf("%d->", cur->val);
//		cur = cur->next;
//	}
//	printf("NULL\n");
//}
//
//void SListPushFront(SListNode** pphead,DataType x)
//{
//	SListNode* newnode = new(x);
//	newnode->next = *pphead;
//	*pphead = newnode;
//}
//
//void SListPopBack(SListNode* phead)
//{
//	assert(phead);
//	SListNode* cur = phead;
//	while (cur->next->next)
//	{
//		cur = cur->next;
//	}
//	free(cur->next);
//	cur->next = NULL;
//}
//
//void SListPopFront(SListNode** pphead)
//{
//	assert(*pphead);
//	SListNode* back = (*pphead)->next;
//	free(*pphead);
//	*pphead = back;
//}
//
//void SListDestory(SListNode** pphead)
//{
//	assert(*pphead);
//	SListNode* cur = *pphead;
//	SListNode* pre = NULL;
//	while (cur)
//	{
//		pre = cur;
//		cur = cur->next;
//		free(pre);
//	}
//	*pphead = NULL;
//}
//
//SListNode* SListFind(SListNode* phead, DataType x)
//{
//	SListNode* cur = phead;
//	while (cur)
//	{
//		if (cur->val == x)
//			return cur;
//		cur = cur->next;
//	}
//	return NULL;
//}
//
//void SListInsertAfter(SListNode* pos, DataType x)
//{
//	assert(pos);
//	SListNode* newnode = new(x);
//	SListNode* back = pos->next;
//	newnode->next = back;
//	pos->next = newnode;
//}
//
//void SListEraseAfter(SListNode* pos)
//{
//	assert(pos->next);
//	SListNode* back = pos->next;
//	pos->next = pos->next->next;
//	free(back);
//}
//
//void test2()
//{
//	SListNode* slist = NULL;
//	SListPushBack(&slist, 1);
//	SListPushBack(&slist, 2);
//	SListPushBack(&slist, 3);
//	SListPushFront(&slist, 0);
//	SListPrint(slist);
//	SListNode* ret = SListFind(slist, 2);
//	SListEraseAfter(ret);
//	
//	ret = SListFind(slist, 3);
//	if(ret)
//		SListInsertAfter(ret, 9);
//	SListPrint(slist);
//	SListDestory(&slist);
//	SListPrint(slist);
//}
//int main()
//{
//	test2();
//	//test1();
//	return 0;
//}
//void test1()
//{
//	SListNode* slist = NULL;
//	SListPushBack(&slist, 1);
//	SListPushBack(&slist, 2);
//	SListPushBack(&slist, 3);
//	SListPushFront(&slist, 0);
//	SListPopFront(&slist);
//	SListPopFront(&slist);
//	SListDestory(&slist);
//	SListPrint(slist);
//}