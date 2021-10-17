class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *p1=l1,*p2=l2;
        ListNode *dummynode=new ListNode(-1);
        ListNode *p3=dummynode;
        while(p1!=nullptr && p2!=nullptr){
            if(p1->val < p2->val){
                p3->next=p1;
                p1=p1->next;
                }
            else{
                p3->next=p2;
                p2=p2->next;
            }
            p3=p3->next;
        }
        while(p1!=nullptr){
    
            p3->next=p1;
            p1=p1->next;
             p3=p3->next;
        }
        while(p2!=nullptr){
            p3->next=p2;
            p2=p2->next;
             p3=p3->next;
        }
        return dummynode->next;
    }
};
