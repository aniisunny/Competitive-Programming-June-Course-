class Solution {
public:
    ListNode *getIntersectionNode(ListNode *A, ListNode *B) {
        int x=0,y=0;
        ListNode *p1=A, *p2=B;
        while(p1 || p2)
        {
            if(p1)
            {
                x++;
                p1=p1->next;
            }
            if(p2)
            {
                y++;
                p2=p2->next;
            }
        }
        int diff=abs(x-y);
        p1=A,p2=B;
        if(x>y)
        {
            while(diff--)
            {
              p1=p1->next;  
            }
        }
        else if(y>x)
        {
            while(diff--)
            {
                p2=p2->next;
            }
        }
        while(p1)
        {
            if(p1==p2)
                return p1;
            p1=p1->next;
            p2=p2->next;
        }
        return p1;
    }
};
