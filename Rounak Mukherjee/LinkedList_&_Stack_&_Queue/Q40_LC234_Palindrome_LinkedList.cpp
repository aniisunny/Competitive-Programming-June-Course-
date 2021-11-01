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
      ListNode* reversed(ListNode* head){
        ListNode* prev=NULL;
        ListNode* next=NULL;

        while(head!=NULL){
            next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
    return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        slow=reversed(slow);
        fast=head;
        
        while(slow!=NULL){
            if(slow->val==fast->val){
                slow=slow->next;
                fast=fast->next;}
            else{
                return false;}
        }
        
    return true;

    }
};
