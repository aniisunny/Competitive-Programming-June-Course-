class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dmy=new ListNode(0), *head=dmy;
        int c=0;
        while(l1 || l2)
        {
            int sum=0,x=0,y=0;
            if(l1)
                x=l1->val;
            if(l2)
                y=l2->val;
            sum=x+y+c;
            c=sum/10;
            dmy->next=new ListNode(sum%10);   
            if(l1)
                l1=l1->next;
            if(l2)
                l2=l2->next;
            dmy=dmy->next;
        }
        if(c)
        {
            dmy->next= new ListNode(c);
        }
        return head->next;
    }
};
