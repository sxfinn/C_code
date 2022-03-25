#include"dlist.h"

//带头双向链表
DListNode* getnode(DataType val)
{
	DListNode* ret = (DListNode*)malloc(sizeof(DListNode));
	if (ret)
	{
		ret->val = val;
		return ret;
	}
	else
		return NULL;
}

void DListInit(DListNode** pphead)
{
	assert(pphead);
	DListNode* tmp = (DListNode*)malloc(sizeof(DListNode));
	if (tmp)
	{
		*pphead = tmp;
	}
	else
		exit(-1);
	(*pphead)->prev = tmp;
	(*pphead)->next = tmp;
}

void DListPushBack(DListNode* phead, DataType val)
{
	assert(phead);
	DListNode* tail = phead->prev;
	DListNode* newnode = getnode(val);
	if (newnode)
	{
		tail->next = newnode;
		newnode->prev = tail;
		newnode->next = phead;
		phead->prev = newnode;
	}
	else
		return;
}

void DListPrint(DListNode* phead)
{
	DListNode* cur = phead;
	if (!cur)
		printf("NULLL");	
	while (cur->next != phead)
	{
		cur = cur->next;
		printf("%d", cur->val);
		printf("->");
	}
	printf("head");
	printf("\n");
}

void DListPopBack(DListNode* phead)
{
	assert(phead);
	if (phead->prev == phead)
		return;
	DListNode* tail = phead->prev;
	DListNode* newtail = tail->prev;
	newtail->next = phead;
	phead->prev = newtail;
	free(tail);
	tail = NULL;
}

void DListPushFront(DListNode* phead,DataType val)
{
	DListNode* newnode = getnode(val);
	if (newnode)
	{
		phead->next->prev = newnode;
		newnode->next = phead->next;
		phead->next = newnode;
		newnode->prev = phead;
	}
	else
		return;
}

void DListDestory(DListNode* phead)
{
	DListNode* cur = phead;
	while (cur->next != phead)
	{		
		cur = cur->next;
		phead->next = cur->next;
		free(cur);
		cur = phead;
	}
}

void DListInsertAfter(DListNode* pos, DataType val)
{
	assert(pos);
	DListNode* newnode = getnode(val);
	if (newnode)
	{
		pos->next->prev = newnode;
		newnode->next = pos->next;
		newnode->prev = pos;
		pos->next = newnode;
	}
	else
		return;
}

DListNode* DListFind(DListNode* phead, DataType val)
{
	DListNode* cur = phead;

	while (cur->next != phead)
	{
		cur = cur->next;
		if (cur->val == val)
			return cur;
	}
	return NULL;
}

void DListInsertFront(DListNode* pos, DataType val)
{
	assert(pos);
	DListNode* newnode = getnode(val);
	if (newnode)
	{
		newnode->prev = pos->prev;
		pos->prev->next = newnode;
		newnode->next = pos;
		pos->prev = newnode;
	}
	else
		return;
}

void DListPopFront(DListNode* phead)
{
	assert(phead);
	if (phead->next == phead)
		return;
	DListNode* head = phead->next;	
	DListNode* first = phead->next->next;
	free(head);
	phead->next = first;
	first->prev = phead;
}

void test2()
{
	DListNode* phead;
	DListInit(&phead);
	DListPushBack(phead, 1);
	DListPushBack(phead, 2);
	DListPushBack(phead, 3);
	DListPopFront(phead);
	DListPopFront(phead);
	DListPopFront(phead);
	//DListPopBack(phead);
	//DListPopBack(phead);
	//DListPopBack(phead);
	DListPrint(phead);
}

void test1()
{
	DListNode* phead;
	DListInit(&phead);
	DListPushBack(phead, 1);
	DListPushBack(phead, 2);
	DListPushBack(phead, 3);
	//DListPopBack(phead);
	DListPushFront(phead, 0);
	DListPrint(phead);
	DListNode* find = DListFind(phead, 3);
	//DListDestory(phead);
	DListInsertAfter(find, 9);
	DListInsertFront(find, 99);
	DListPrint(phead);
}

int main()
{
	test2();
	//test1();
	return 0;
}