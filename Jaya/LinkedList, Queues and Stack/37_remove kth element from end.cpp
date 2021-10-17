class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode *slowptr=head,*fastptr=head;
        for(int i=0;i<n;i++){
            fastptr=fastptr->next;
        }
        
        if(fastptr==nullptr){
            return head->next;
        }
        
        while(fastptr->next!=nullptr){
            slowptr=slowptr->next;
            fastptr=fastptr->next;
        }
        
        slowptr->next=slowptr->next->next;
        return head;
    }
};
