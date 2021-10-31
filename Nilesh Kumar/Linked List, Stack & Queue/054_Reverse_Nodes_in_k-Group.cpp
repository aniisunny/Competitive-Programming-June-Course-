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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || !head->next) return head;
        int t = k;
        ListNode* temp = head;
        while(--t && temp->next) {
            temp = temp->next;
        }
        if(t!=0) return head;
        ListNode* tnext = temp->next;
        temp->next=NULL;
        temp = head;
        ListNode* prev = NULL, *next = NULL;
        while(temp!=NULL) {
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        head->next = reverseKGroup(tnext, k);
        return prev;
    }
};