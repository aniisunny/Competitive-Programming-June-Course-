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
    ListNode* reverse(ListNode* head){
        if(head==NULL || head->next==NULL) return head;
        
        ListNode* ans=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
        return ans;
    }
    bool checkPalindrome(ListNode* head,ListNode* slow,int count){
        
        ListNode *curr=head;
        if(count%2==0){
            while(curr->next!=slow){
                curr=curr->next;
            }
        }
        else {
            while(curr->next!=slow){
                curr=curr->next;
            }
             slow=slow->next;
        }
        curr->next=NULL;
        curr=reverse(head);
        
        
        while(curr!=NULL){
            if(curr->val != slow->val){
                return false;
            }
            curr=curr->next;
            slow=slow->next;
        }
        return true;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        int count=0;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* curr=head;
         while(curr!=NULL){
            curr=curr->next;
             count++;
            
        }
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(count%2==0) return checkPalindrome(head,slow,count);
        else  return checkPalindrome(head,slow,count);
        
        return false;
        
    }
};