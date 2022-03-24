#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct ListNode
{
	int val;
	struct ListNode* next;
};

struct Node
{
	int val;
	struct Node* next;
	struct Node* random;
};

struct Node* getnode(struct Node* cur)
{
	struct Node* ret = (struct Node*)malloc(sizeof(struct Node));
	if (cur && ret)
	{		
		ret->val = cur->val;
		ret->random = cur->random;
	}
	return ret;
}

struct Node* copyRandomList(struct Node* head)
{
	if (!head)
		return NULL;
	struct Node* cur = head;
	struct Node* prev = NULL;
	struct Node* newhead = NULL;
	while (cur)
	{
		struct Node* ret = getnode(cur);
		ret->next = cur->next;
		cur->next = ret;
		cur = ret->next;
	}
	if (head)
		cur = head->next;
	while (cur)
	{
		if (cur->random)
			cur->random = cur->random->next;
		else
			cur->random = NULL;
		if (cur->next)
			cur = cur->next->next;
		else
			break;
	}
	if (head)
		cur = head->next;
	while (cur->next)
	{
		cur->next = cur->next->next;
		cur = cur->next;
	}
	if (head)
		return head->next;
	return NULL;
}
int main()
{

	return 0;
}
//bool hasCycle(struct ListNode* head)
//{
//	struct ListNode* slow = head;
//	struct ListNode* fast = head;
//	while (fast && fast->next)
//	{
//		fast = fast->next->next;
//		slow = slow->next;
//		if (fast == slow)
//			return true;
//	}
//	return false;
//}
//
//struct ListNode* detectCycle(struct ListNode* head)
//{
//	int flag = 0;
//	struct ListNode* fast = head, * slow = head;
//	while (fast && fast->next)
//	{
//		fast = fast->next->next;
//		slow = slow->next;
//		if (fast == slow)
//			flag = 1;
//	}
//	if (!flag)
//		return NULL;
//	struct ListNode* start = head;
//	while (start != slow)
//	{
//		start = start->next;
//		slow = slow->next;
//	}
//	return start;
//}
//
//struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB)
//{
//	struct ListNode* cur1 = headA;
//	struct ListNode* cur2 = headB;
//	int cnt1 = 0;
//	int cnt2 = 0;
//	while (cur1->next)
//	{
//		++cnt1;
//		cur1 = cur1->next;
//	}
//	while (cur2->next)
//	{
//		++cnt2;
//		cur2 = cur2->next;
//	}
//	if (cur1 != cur2)
//		return NULL;
//	struct ListNode* l = NULL, * s = NULL;
//	int k = cnt1 - cnt2;
//	if (k > 0)
//	{
//		l = headA;
//		s = headB;
//	}
//	else
//	{
//		l = headB;
//		s = headA;
//	}
//	k = abs(k);
//	while (k--)
//	{
//		l = l->next;
//	}
//	while (l != s)
//	{
//		l = l->next;
//		s = s->next;
//	}
//	return l;
//}
//void test1()
//{
//	struct ListNode* node1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* node2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* node3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* node4 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	node1->val = 1;
//	node1->next = node2;
//	node2->val = 2;
//	node2->next = node3;
//	node3->val = 3;
//	node3->next = node4;
//	node4->val = 4;
//	node4->next = NULL;
//	n1->val = 6;
//	n1->next = n2;
//	n2->val = 7;
//	n2->next = n3;
//	n3->val = 8;
//	n3->next = node3;
//	getIntersectionNode(node1, n1);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
//{
//	struct ListNode* head = NULL;
//	struct ListNode* cur = NULL;
//	while (list1 && list2)
//	{
//		if (head == NULL)
//		{
//			if (list1->val < list2->val)
//			{
//				head = list1;
//				list1 = list1->next;
//			}
//			else
//			{
//				head = list2;
//				list2 = list2->next;
//			}
//			cur = head;
//		}
//		if (list1->val < list2->val)
//		{
//			cur->next = list1;
//			cur = list1;
//			list1 = list1->next;
//		}
//		else
//		{
//			cur->next = list2;
//			cur = list2;
//			list2 = list2->next;
//		}
//	}
//	if (list1)
//	{
//		if (head == NULL)
//			return list1;
//		cur->next = list1;
//	}
//	else
//	{
//		if (head == NULL)
//			return list2;
//		cur->next = list2;
//	}
//	return head;
//}
//
//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
//{
//	if (k == 0 || pListHead == NULL)
//		return NULL;
//	struct ListNode* cur = pListHead;
//	struct ListNode* ret = cur;
//	while (k > 1 && cur->next)
//	{
//		cur = cur->next;
//		--k;
//	}
//	if (k > 1)
//		return NULL;
//	while (cur->next)
//	{
//		cur = cur->next;
//		ret = ret->next;
//	}
//	return ret;
//}
//
