class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        
        ListNode *c=NULL;
        
        if(l1->val<l2->val){
            
            c=l1;
            c->next=mergeTwoLists(l1->next,l2);
            
        }
        
        else{
            
            c=l2;
            c->next=mergeTwoLists(l1,l2->next);
            
        }
        
        return c;
        
    }
};