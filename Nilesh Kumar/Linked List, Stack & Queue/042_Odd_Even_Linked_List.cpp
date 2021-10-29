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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *l1=head, *l2=head->next;
        ListNode *l2head = l2;
        while(l1->next && l2->next) {
            l1->next = l1->next->next;
            l2->next = l2->next->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        l1->next = l2head;
        return head;
    }
};