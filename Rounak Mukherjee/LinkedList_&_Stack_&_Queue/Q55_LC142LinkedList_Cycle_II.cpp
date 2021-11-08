/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
      ListNode *f=head;
        ListNode *s=head;
       bool circle=false;
        if(head==NULL||head->next==NULL){return NULL;}
        while(f&&f->next){
         f=f->next->next;
          s=s->next;
          if(f==s){ break;}  
        }
        
        if(f!=s){return NULL;}
        s=head;
        while(f!=s){
            s=s->next;
            f=f->next;
        }
        return f;
    }
};
