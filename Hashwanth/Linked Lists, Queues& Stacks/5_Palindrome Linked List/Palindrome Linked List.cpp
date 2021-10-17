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
    bool isPalindrome(ListNode* head) {
       ListNode *s=head,*f=head;
        if(!head || !head->next)
            return true;
       while(f->next && f->next->next)
       {
           s=s->next;
           f=f->next->next;
       }
        //now s stands at middle;(if even no.of elements we take 1st middle as middle)
      //reverse 2nd half
       s->next=reversell(s->next);
        
      //move s to next pos, f to head 
        s=s->next;
        f=head;
        while(s)
        {
            if(f->val != s->val)
                return false;
            f=f->next;
            s=s->next;
        }
        return true;
        
    }
    ListNode* reversell(ListNode* curr)
    {
        ListNode *pre=NULL,*nxt=NULL;
        while(curr)
        {
            nxt=curr->next;
            curr->next=pre;
            pre=curr;
            curr=nxt;
        }
        return pre;
    }
};
