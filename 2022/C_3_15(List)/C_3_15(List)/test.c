
#include"test.h"

SListNode* new(DataType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (newnode != NULL)
	{
		newnode->val = x;
		newnode->next = NULL;
	}
	else
	{
		printf("malloc error");
		exit(-1);
	}
	return newnode;
}

void SListPushBack(SListNode** pphead, DataType x)
{
	SListNode* newnode = new(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SListNode* cur = *pphead;
		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = newnode;
	}
}

void SListPrint(SListNode* phead)
{
	SListNode* cur = phead;
	while (cur)
	{
		printf("%d->", cur->val);
		cur = cur->next;
	}
	printf("NULL\n");
}

void SListPushFront(SListNode** pphead,DataType x)
{
	SListNode* newnode = new(x);
	newnode->next = *pphead;
	*pphead = newnode;
}

void SListPopBack(SListNode* phead)
{
	assert(phead);
	SListNode* cur = phead;
	while (cur->next->next)
	{
		cur = cur->next;
	}
	free(cur->next);
	cur->next = NULL;
}

void SListPopFront(SListNode** pphead)
{
	assert(*pphead);
	SListNode* back = (*pphead)->next;
	free(*pphead);
	*pphead = back;
}

void SListDestory(SListNode** pphead)
{
	assert(*pphead);
	SListNode* cur = *pphead;
	SListNode* pre = NULL;
	while (cur)
	{
		pre = cur;
		cur = cur->next;
		free(pre);
	}
	*pphead = NULL;
}

void test2()
{

}
int main()
{
	test2();
	//test1();
	return 0;
}
void test1()
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