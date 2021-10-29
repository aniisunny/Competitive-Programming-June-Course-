/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
