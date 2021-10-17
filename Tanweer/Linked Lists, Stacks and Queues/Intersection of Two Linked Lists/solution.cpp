class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        if(headA == headB)
        {
            return headA;
        }
        else if (headA == NULL || headB == NULL)
        {
            return NULL;
        }
        int countA = 1, countB = 1 ;
        ListNode *first = headA;
        ListNode *second = headB;
        while(first->next != NULL)
        {
            first = first->next;
            countA++;
        }
        while(second->next != NULL)
        {
            second = second->next;
            countB++;
        }
        if(countA>countB) 
        {
            int diff = countA-countB;
            while(diff--) headA=headA->next;
        }
        else if(countB>countA)
        {
            int diff = countB-countA;
            while(diff--) headB=headB->next;
        }
       while(headA != NULL && headB != NULL)
       {
           if(headA==headB) return headA;  
           headA=headA->next;
           headB=headB->next;
       }
        return NULL;
    }
};