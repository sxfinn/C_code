#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct ListNode
{
	int val;
	struct ListNode* next;
};

struct ListNode* removeDuplicateNodes(struct ListNode* head)
{
	char hash[20001];
	memset(hash, 0, sizeof(hash));
	struct ListNode* cur = head->next;
	struct ListNode* prev = head;
	while (cur)
	{
		if (hash[cur->val] == 0)
		{
			prev->next = cur;
			hash[cur->val] = 1;
		}
	}
	prev->next = NULL;
	return head;
}

struct ListNode* removeDuplicateNodes(struct ListNode* head) 
{
	char hash[20001];
	memset(hash, 0, sizeof(hash));
	struct ListNode* slow = head;
	struct ListNode* fast = head;
	while (fast)
	{
		if (fast->val != slow->val)
		{
			slow->next = fast;
			slow = fast;
		}
		fast = fast->next;
	}
	slow->next = NULL;
}

struct ListNode* reverseList(struct ListNode* head) 
{
	struct ListNode* prev = NULL;
	struct ListNode* cur = head;
	while (cur)
	{
		struct ListNode* next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}

	return prev;
}

struct ListNode* getKthFromEnd(struct ListNode* head, int k)
{
	struct ListNode* cur = head;
	while (k && cur)
	{
		cur = cur->next;
		--k;
	}
	if (k)
		return NULL;
	struct ListNode* ret = NULL;
	while (cur)
	{
		cur = cur->next;
		head = head->next;
	}
	return head;

}

struct ListNode* deleteNode(struct ListNode* head, int val) 
{
	if (head == NULL)
		return NULL;
	struct ListNode* cur = head;
	struct ListNode* prev = NULL;
	while (cur)
	{		
		if (cur->val == val)
			break;
		
		prev = cur;
		cur = cur->next;
	}
	struct ListNode* del = cur->next;
	cur->next = cur->next->next;
	free(del);
	return head;
}

struct ListNode* swapPairs(struct ListNode* head)
{
	if (!head)
		return NULL;
	struct ListNode* cur = head;
	struct ListNode* head1 = NULL, * head2 = NULL;
	head1 = head;
	head2 = head->next;
	while (cur && cur->next)
	{
		struct ListNode* next = cur->next;
		cur->next = cur->next->next;
		cur = next;
	}
	cur->next = NULL;

	struct ListNode* cur1 = head1;
	struct ListNode* cur2 = head2;
	struct ListNode* newhead = (struct ListNode*)malloc(sizeof(struct ListNode));
	cur = newhead;
	while (cur1 && cur2)
	{
		cur->next = cur2;
		cur2 = cur2->next;
		cur = cur->next;

		cur->next = cur1;
		cur1 = cur1->next;
		cur = cur->next;

	}
	if (cur1)
	{
		cur->next = cur1;
		cur = cur1;
	}
	cur->next = NULL;
	return newhead->next;
}

//struct ListNode* swapPairs(struct ListNode* head)
//{
//	//struct ListNode* cur = head;
//	struct ListNode* head1 = NULL;
//	struct ListNode* head2 = NULL;
//	struct ListNode* cur1 = NULL, * cur2 = NULL, * cur = head;
//	while (cur && cur->next)
//	{
//		if (head1 == NULL)
//		{
//			head1 = cur;
//			cur1 = cur;
//		}
//		else
//		{
//			cur1->next = cur;
//			cur1 = cur;
//		}
//		cur = cur->next->next;
//	}
//	cur1->next = NULL;
//	cur = head->next;
//	while (cur && cur->next)
//	{
//		if (head2 == NULL)
//		{
//			head2 = cur;
//			cur2 = cur;
//		}
//		else
//		{
//			cur2->next = cur;
//			cur2 = cur;
//		}
//		cur = cur->next->next;		
//	}
//	cur2->next = NULL;
//	struct ListNode* newhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//	cur = newhead;
//	cur1 = head1, cur2 = head2;
//	while (cur1 && cur2)
//	{
//		cur->next = cur2;
//		cur2 = cur2->next;
//		cur = cur->next;
//
//		cur->next = cur1;
//		cur = cur1;
//		cur1 = cur1->next;
//	}
//	if (cur1)
//	{
//		cur->next = cur1;
//
//		cur = cur->next;
//	}
//	else if(cur2)
//	{
//		cur->next = cur2;
//		
//		cur = cur->next;
//	}
//	cur->next = NULL;
//	return newhead->next;
//}
//
void test1()
{
	struct ListNode* node1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* node2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* node3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* node4 = (struct ListNode*)malloc(sizeof(struct ListNode));
	node1->val = 1;
	node1->next = node2;
	node2->val = 2;
	node2->next = node3;
	node3->val = 3;
	node3->next = node4;
	node4->val = 4;
	node4->next = NULL;
	swapPairs(node1);
}
int main()
{
	test1();
	return 0;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	struct ListNode* cur1 = l1;
	struct ListNode* cur2 = l2;
	struct ListNode* ret = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* cur = ret;
	int val = 0;
	int carr = 0;
	while (cur1 && cur2)
	{
		val = cur1->val + cur2->val + carr;
		carr = val / 10;
		val %= 10;
		struct ListNode* tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
		tmp->val = val;
		tmp->next = NULL;
		cur->next = tmp;
		cur = tmp;
		cur1 = cur1->next;
		cur2 = cur2->next;
	}
	while (cur1)
	{
		val = cur1->val + carr;
		carr = val / 10;
		val %= 10;
		struct ListNode* tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
		tmp->val = val;
		tmp->next = NULL;
		cur->next = tmp;
		cur1 = cur1->next;
	}
	while (cur2)
	{
		val = cur2->val + carr;
		carr = val / 10;
		val %= 10;
		struct ListNode* tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
		tmp->val = val;
		tmp->next = NULL;
		cur->next = tmp;
		cur2 = cur2->next;
	}
	return ret->next;
}


struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
	struct ListNode* cur = head;
	struct ListNode* prev = NULL;
	struct ListNode* slow = head;
	while (n && cur)
	{
		cur = cur->next;
		n--;
	}
	if (n)
		return NULL;
	while (cur)
	{
		prev = slow;
		cur = cur->next;
		slow = slow->next;
	}
	if (prev)
	{
		prev->next = slow->next;
		free(slow);
	}
	else
	{
		cur = head;
		head = head->next;
		free(cur);
	}
	return head;
}

//struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
//{
//	struct ListNode* cur = head;
//	struct ListNode* prev = NULL;
//	while (n && cur)
//	{
//		prev = cur;
//		cur = cur->next;
//		--n;
//	}
//	prev->next = cur->next;
//	free(cur);
//	return head;
//}


int* reversePrint(struct ListNode* head, int* returnSize)
{
	int cnt = 0;
	struct ListNode* cur = head;
	struct ListNode* prev = NULL;
	while (cur)
	{
		cnt++;
		struct ListNode* next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	*returnSize = 0;
	int p = 0;
	int* ret = (int*)malloc(sizeof(int) * cnt);
	while (prev)
	{
		ret[(*returnSize)++] = prev->val;
		prev = prev->next;
	}
	return ret;
}

//void reorderList(struct ListNode* head)
//{
//	struct ListNode* fast = head;
//	struct ListNode* slow = head;
//	while (fast && fast->next)
//	{
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	struct ListNode* prev = NULL;
//	struct ListNode* cur = slow;
//	while (cur)
//	{
//		struct ListNode* next = cur->next;
//		cur->next = prev;
//		prev = cur;
//		cur = next;
//	}
//	struct ListNode* rehead = prev;
//	struct ListNode* phead = head;
//	struct ListNode* ret = NULL;
//	cur = head;
//	struct ListNode* recur = rehead;
//	struct ListNode* retcur = NULL;
//	while (cur && recur)
//	{
//		if (ret == NULL)
//		{
//			ret = cur;
//			retcur = cur;
//			cur = cur->next;
//			retcur->next = recur;
//			retcur = recur;
//			recur = recur->next;
//		}
//		else
//		{
//			retcur->next = cur;
//			cur = cur->next;
//			retcur = retcur->next;
//
//			retcur->next = recur;
//			retcur = recur;
//			recur = recur->next;
//		}
//	}
//	if (cur)
//	{
//		retcur->next = cur;
//		retcur = cur;
//	}
//
//	retcur->next = NULL;
//	return ret;
//}

