class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr) return false ;
        ListNode *slowptr=head;
        ListNode *fastptr=head;
        while(slowptr->next!=nullptr && fastptr->next!=nullptr &&  fastptr->next->next!=nullptr){
            slowptr=slowptr->next;
            fastptr=fastptr->next->next;
            if(slowptr==fastptr){
                return true;
            }
        }
    return false;   
    }
};
