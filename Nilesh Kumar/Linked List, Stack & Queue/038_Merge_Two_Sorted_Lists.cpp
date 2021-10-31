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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* headNode = NULL;
        if(!l1) return l2;
        else if(!l2) return l1;
        if(l1->val<l2->val) {
            headNode = l1;
            l1 = l1->next;
        }
        else {
            headNode = l2;
            l2 = l2->next;
        }
        ListNode* curr = headNode;
        while(l1 && l2) {
            if(l1->val<l2->val) {
                curr->next = l1;
                l1 = l1->next;
            }
            else{
                curr->next = l2;
                l2 = l2->next;
            }
            curr = curr->next;
        }
        if(l1) curr->next = l1;
        else if(l2) curr->next = l2;
        return headNode;
    }
};