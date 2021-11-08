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
   
        ListNode* ans=new ListNode(200);
        ListNode* head=ans;
        int sum=0,carry=0;
        while(l1!=NULL || l2!=NULL){
            int x = l1 ? l1->val:0;
            int y = l2 ? l2->val:0;
             sum = x + y + carry;
            
            if(sum<10){
               ListNode* temp=new ListNode(sum); 
                ans->next=temp;
                carry=0;
            }
            else{
                sum=sum%10;
               ListNode* temp=new ListNode(sum);
                ans->next=temp;
                carry=1;
            }
            if(l1!=NULL) l1=l1->next;
            if(l2!=NULL) l2=l2->next;
              ans=ans->next;
        }
        if(carry==1){
            ListNode* temp=new ListNode(carry);
            ans->next=temp;
        }
               return head->next;
    }
};