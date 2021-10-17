class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *dmy=new ListNode(-1);
        ListNode* hd=dmy;
        
        while(l1 && l2)
        {
            if(l1->val<=l2->val){
                dmy->next=l1;
                l1=l1->next;
            }
            
            else{
                dmy->next=l2;
                l2=l2->next;
            }
            dmy=dmy->next;
        }
        if(l1)
            dmy->next=l1;
        
        if(l2)
            dmy->next=l2;
        
        return hd->next;
    }
};
