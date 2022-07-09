//Ä£Äâµ¥Á´±í
#include"test.h"
typedef int DataType;
typedef struct ListNode
{
	DataType val;
	struct ListNode* next;
}ListNode;

void ListNodeInit(ListNode** L)
{
	ListNode* tmp = (ListNode*)malloc(sizeof(ListNode));
	if (tmp)
	{
		*L = tmp;
	}
	(*L)->next = NULL;
}

void ListPushBack(ListNode* head, DataType x)
{
	ListNode* cur = head;
	while (cur->next)
	{
		cur = cur->next;
	}
	ListNode* tmp = (ListNode*)malloc(sizeof(ListNode));
	if (tmp)
	{
		tmp->val = x;
		tmp->next = NULL;
	}
	cur->next = tmp;
}

void ListPopBack(ListNode*head)
{
	ListNode* cur = head;
	while (cur->next->next)
	{
		cur = cur->next;
	}
	free(cur->next);
	cur->next = NULL;
}

void ListPrint(ListNode* head)
{
	ListNode* cur = head;
	while (cur->next)
	{
		cur = cur->next;
		printf("%d ", cur->val);
	}
}
void ListInsert(ListNode* insert, DataType x)
{
	ListNode* tmp = (ListNode*)malloc(sizeof(ListNode));
	if (tmp)
	{
		tmp->val = x;
		tmp->next = insert->next;
		insert->next = tmp;
	}
	
}

void ListInsertpos(ListNode* head, int pos, DataType x)
{
	ListNode* cur = head;
	while (pos && cur->next)
	{
		cur = cur->next;
		--pos;
	}
	ListNode* tmp = (ListNode*)malloc(sizeof(ListNode));
	if (tmp)
	{
		tmp->val = x;
		tmp->next = cur->next;
		cur->next = tmp;
	}
	
	
}

void ListPopFront(ListNode* head)
{
	ListNode* back = head->next->next;
	free(head->next);
	head->next = back;
}

DataType ListFront(ListNode* head)
{
	return head->next->val;
}

DataType ListBack(ListNode* head)
{
	while (head->next)
	{
		head = head->next;
	}
	return head->val;
}

ListNode* ListFindByVal(ListNode* head, DataType x)
{
	while (head->next)
	{
		head = head->next;
		if (head->val == x)
		{
			return head;
		}
	}
	return NULL;
}
int main()
{
	test1();
	return 0;
}
void test1()
{
	ListNode* List;
	ListNodeInit(&List);
	ListPushBack(List, 1);
	ListPushBack(List, 2);
	ListPushBack(List, 3);
	ListPushBack(List, 4);
	ListInsertpos(List, 10, 9);
	ListNode* ret = ListFindByVal(List, 9);
	if (ret)
		printf("%d", ret->val);
	else
		printf("Not Find");
	//printf("%d ", ListFront(List));
	//printf("%d ", ListBack(List));
	//ListPopFront(List);
	//ListPopBack(List);
	//printf("%d ", ListFront(List));
	//printf("%d ", ListBack(List));
	//ListPrint(List);
}