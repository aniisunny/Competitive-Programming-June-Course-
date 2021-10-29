public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* start = new ListNode(0);
        ListNode* t3= start;
        
        while(t1!=NULL and t2!=NULL)
        {
            if(t1->val < t2->val)
            {
                t3->next = t1;
                t1=t1->next;
            }
            else
            {
                t3->next = t2;
                t2 = t2->next;
            }
            
            t3=t3->next;
        }
        while(t1)
        {
            t3->next = t1;
            t1 = t1->next;
            t3 = t3->next;
        }
        while(t2)
        {
            t3->next = t2;
            t2  = t2->next;
            t3 = t3->next;
        }
        
        return start->next;
       
    }
    //return start->next;
};