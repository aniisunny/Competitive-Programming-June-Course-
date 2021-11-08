class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *one=head;
        ListNode *two=head;
        
        while(n){
            two=two->next;
            
            n--;
            
        }
        
        if(two==NULL){
            return one->next;
        }
        
        while(two->next!=NULL){
            one=one->next;
            two=two->next;
        }
        
        one->next=one->next->next;
        return head;

        
    }
};