#include<stdio.h>
#include<stdlib.h>
struct ListNode
{
	int val;
	struct ListNode* next;
};
struct ListNode* getnode(int val)
{
	struct ListNode* ret = (struct ListNode*)malloc(sizeof(struct ListNode));
	ret->val = val;
	ret->next = NULL;
	return ret;
}
int cmp(const void* a, const void* b)
{
	return (*(int*)a) - (*(int*)b);
}
struct ListNode* sortList(struct ListNode* head)
{
	struct ListNode* cur = head;
	int cnt = 0;
	while (cur)
	{
		cnt++;
		cur = cur->next;
	}
	int* tmp = (int*)malloc(sizeof(int) * cnt);
	int p = 0;
	struct ListNode* newhead = getnode(0);
	struct ListNode* cuu = newhead;
	cur = head;
	while (cur)
	{
		tmp[p++] = cur->val;
		cur = cur->next;
	}
	qsort(tmp, p, sizeof(int), cmp);
	for (int i = 0; i < p; i++)
	{
		struct ListNode* ret = getnode(tmp[i]);
		cuu->next = ret;
		cuu = ret;
	}
	return newhead->next;
}

//·´×ªÁ´±í
//struct ListNode* reverseList(struct ListNode* head)
//{
//	struct ListNode* cur = head;
//	struct ListNode* prev = NULL;
//	while (cur)
//	{
//		struct ListNode* next = cur->next;
//		cur->next = prev;
//		prev = cur;
//		cur = next;
//	}
//	return prev;
//}
//void reverse(int* p, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = p[left];
//		p[left] = p[right];
//		p[right] = tmp;
//		++left, --right;
//	}
//}
//void test1()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	reverse(arr, 10);
//}
//int* nextLargerNodes(struct ListNode* head, int* returnSize) 
//{
//	struct ListNode* cur = head;
//	int cnt = 0;
//	while (cur)
//	{
//		cnt++;
//		cur = cur->next;
//	}
//	int* ret = (int*)malloc(sizeof(int) * cnt);
//	*returnSize = cnt;
//	int p = 0;
//	head = reverseList(head);
//	cur = head;
//	int max = 0;
//	while (cur)
//	{
//		if (max < cur->val)
//			max = cur->val;
//		if (max <= cur->val)
//			ret[p] = 0;	
//		else
//			ret[p] = max;
//		++p;
//		cur = cur->next;
//	}
//	reverse(ret, cnt - 1);
//	return ret;
//}

struct ListNode* getnode(int val)
{
	struct ListNode* ret = (struct ListNode*)malloc(sizeof(struct ListNode));
	ret->val = val;
	ret->next = NULL;
	return ret;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	l1 = reverseList(l1);
	l2 = reverseList(l2);
	int val1 = 0;
	int val2 = 0;
	int carr = 0;
	int num = 0;
	struct ListNode* rethead = getnode(0);
	struct ListNode* cur = rethead;
	while (l1 && l2)
	{
		val1 = l1->val;
		val2 = l2->val;
		num = val1 + val2 + carr;
		carr = num / 10;
		num %= 10;
		struct ListNode* ret = getnode(num);
		cur->next = ret;
		l1 = l1->next;
		l2 = l2->next;
	}
	while (l1)
	{
		val1 = l1->val;
		num = val1 + carr;
		carr = num / 10;
		num %= 10;
		struct ListNode* ret = getnode(num);
		cur->next = ret;
		l1 = l1->next;
	}
	while (l2)
	{		
		val2 = l2->val;
		num = val2 + carr;
		carr = num / 10;
		num %= 10;
		struct ListNode* ret = getnode(num);
		cur->next = ret;
		l2 = l2->next;
	}
	if (carr)
	{
		struct ListNode* ret = getnode(carr);
		cur->next = ret;
	}
	rethead = reverseList(rethead->next);
	return rethead;
}

struct ListNode* detectCycle(struct ListNode* head)
{
	int flag = 0;
	struct ListNode* fast = head;
	struct ListNode* slow = head;
	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			flag = 1;
			break;
		}
	}
	if (!flag)
		return NULL;
	struct ListNode* start = head;
	while (start != slow)
	{
		start = start->next;
		slow = slow->next;
	}
	return start;
}

int main()
{
	//test1();
	/*detectCycle(0);*/
	return 0;
}