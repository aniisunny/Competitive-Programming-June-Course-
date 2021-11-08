
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
         if(!head || !head->next) return head;
        
        
        ListNode* temp1 = head, *temp2 = head->next;
        ListNode* temp=temp2;
        while(temp2 && temp2->next!=nullptr){
            temp1->next = temp1->next->next;
            temp1=temp1->next;
            temp2->next = temp1->next;
            temp2=temp2->next;
        }
        temp1->next = temp;
        return head;
    }
};
