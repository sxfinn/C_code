#include<iostream>
using namespace std;
struct ListNode
{
    int val;
    struct ListNode* next;
};


class Solution 
{
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) 
    {
        int cnt1 = 0;
        int cnt2 = 0;
        ListNode* head1 = headA;
        ListNode* head2 = headB;
        while (head1->next)
        {
            head1 = head1->next;
            cnt1++;
        }        
        while (head2->next)
        {
            head2 = head2->next;
            cnt2++;
        }
        if (head1 != head2)
            return nullptr;
        ListNode* l = nullptr, *s = nullptr;
        int k = cnt1 > cnt2 ? cnt1 - cnt2 : cnt2 - cnt1;
        if (cnt1 > cnt2)
        {
            l = headA;
            s = headB;
        }
        else
        {
            l = headB;
            s = headA;
        }
        while (k--)
        {
            l = l->next;
        }
        while (l != s)
        {
            l = l->next;
            s = s->next;
        }
        return l;
    }
};
int main()
{
    ListNode* node1 = (ListNode*)malloc(sizeof(ListNode));
    ListNode* node2 = (ListNode*)malloc(sizeof(ListNode));
    ListNode* node3 = (ListNode*)malloc(sizeof(ListNode));
    node1->val = 1;
    node1->next = node2;
    node2->val = 2;
    node2->next = node3;
    node3->next = nullptr;
    node3->val = 3;
    ListNode* n1 = (ListNode*)malloc(sizeof(ListNode));
    ListNode* n2 = (ListNode*)malloc(sizeof(ListNode));
    ListNode* n3 = (ListNode*)malloc(sizeof(ListNode));
    n1->val = 8;
    n1->next = n2;
    n2->val = 9;
    n2->next = n3;
    n3->val = 10;
    n3->next = node2;
    Solution().getIntersectionNode(node1, n1);
    return 0;
}
class PalindromeList 
{
public:
    bool chkPalindrome(ListNode* A)
    {
        ListNode* fast = A;
        ListNode* slow = A;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* prev = nullptr;
        ListNode* cur = slow;
        
        while (cur)
        {
            ListNode* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        while (prev->next)
        {
            if (A->val != prev->val)
                return false;
            prev = prev->next;
            A = A->next;
        }
        return true;
    }
};