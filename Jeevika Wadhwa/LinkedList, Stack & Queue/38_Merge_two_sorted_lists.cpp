class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode *c = new ListNode(0);
        ListNode *head = c;
        while(a && b){
            if(a->val < b->val){
                c->next = new ListNode(a->val);
                a = a->next;
            }
            else{
                c->next = new ListNode(b->val);
                b = b->next;
            }
            c = c->next;
        }
        while(a){
            c->next = new ListNode(a->val);
            a = a->next;
            c = c->next;
        }
        while(b){
            c->next = new ListNode(b->val);
            b = b->next;
            c = c->next;
        }
        return head->next;        
    }
};
