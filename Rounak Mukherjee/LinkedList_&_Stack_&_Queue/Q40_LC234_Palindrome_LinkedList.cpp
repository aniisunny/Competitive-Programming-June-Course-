class Solution {
public:
      ListNode* reversed(ListNode* head){
       if(head->next==NULL){
           return head;
       }
       ListNode* temp=reversed(head->next);
        
         ListNode* nex=head->next;
          nex->next=head;
          head->next=NULL;
    return temp;      
    }
    
    bool isPalindrome(ListNode* head) {
        
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        slow->next=reversed(slow->next);
        slow=slow->next;
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
