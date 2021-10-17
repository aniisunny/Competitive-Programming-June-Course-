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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=new ListNode(-1);
        ListNode* head=l3;
        int carry=0;
        while(l1 || l2)
        {
            int val1= l1!=NULL?l1->val:0;
             int val2= l2!=NULL?l2->val:0;
              
            int curr=val1+val2+carry;
            
            carry=curr/10;
            
            ListNode *temp= new ListNode(curr%10);
            
            l3->next=temp;
           if(l1)
               l1=l1->next;
            if(l2)
                l2=l2->next;
            l3=l3->next;
            
        }
        if(carry>0)
        {ListNode *temp= new ListNode(carry);
         l3->next=temp;
        }
            return head->next;
        
    }
};
