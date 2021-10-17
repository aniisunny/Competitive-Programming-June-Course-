class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
     if(head==NULL || head->next==NULL || head->next==NULL)
         return head;
        
     ListNode *odd=head, *even=head->next, *evenst=even;
        
     while(even!=NULL && even->next!=NULL){
         odd->next=even->next;
         odd=odd->next;
         even->next=odd->next;
         even=even->next;
     }
     odd->next=evenst;
     return head;
    }
};
