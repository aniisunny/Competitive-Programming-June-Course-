/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {   //recursion app
        if(!head || !head->next)
            return head;
        ListNode* newHead=swapPairs(head->next->next);
        ListNode* temp=head->next;
        head->next=newHead;
        temp->next=head;
        return temp;
        
    }
};
