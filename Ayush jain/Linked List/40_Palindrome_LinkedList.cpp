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
    
   ListNode* reverse(ListNode* start)
    {
        ListNode* p=NULL;
        ListNode*c=start;
        ListNode* n;
        while(c!=NULL)
            {
                n=c->next;
                c->next=p;


                p=c;
                c=n;
            }

            return p;
       }
    ListNode* middle(ListNode* start)
    {
        ListNode* fast=start;
        ListNode* slow=start;
        while(fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL and head->next==NULL)
        {
            return true ;
        }
        ListNode* mid=middle(head);
        ListNode* last=reverse(mid);
        ListNode* n=head;
        
        while(last!=NULL and n!=NULL)
        {
            if(n->val!=last->val)
            {
                return false;
            }
            n=n->next;
            last=last->next;
        }
        
        return true;
     
    }
};