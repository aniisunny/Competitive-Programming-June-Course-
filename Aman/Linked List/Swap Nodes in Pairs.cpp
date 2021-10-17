class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
     
        ListNode *dmy=new ListNode(0);
        dmy->next=head;
        ListNode *pr=dmy;
        
        while(head && head->next)
        {
            ListNode *f=head, *s=head->next;
            
            pr->next=s;
            f->next=s->next;
            s->next=f;
           
            pr=f;
            head=f->next;
        }
        return dmy->next;
    }
};
