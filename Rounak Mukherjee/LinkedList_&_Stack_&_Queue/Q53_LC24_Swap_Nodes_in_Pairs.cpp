

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
         if(head==NULL||head->next==NULL)
         {  return head;}
   ListNode *curr=head->next->next;
   ListNode *prev=head;
     head=head->next;
     head->next=prev;   
    while(curr!=NULL&&curr->next!=NULL){
        prev->next=curr->next;
        prev=curr;
        ListNode *next=curr->next->next;
        curr->next->next=curr;
        curr=next;
    }
    prev->next=curr;
    return head;
    }
};
