class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     ListNode* tp=head;
     while(n--)
         tp=tp->next;
     if(tp==NULL)
         return head->next;
     ListNode* hd=head;
     while(tp->next)
     {
         hd=hd->next;
         tp=tp->next;
     }
     hd->next=hd->next->next;
     return head;   
    }
};
