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
     ListNode* reverseList(ListNode* head) {
           ListNode* curr=head;
           ListNode* prev=NULL;
           ListNode* nextptr;
        
        while(curr){
            nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head==NULL || head->next==NULL) return head;
        
        int count=1;
        ListNode* temp=head;
        
        while(count!=k ){
            temp=temp->next;
            if(temp==NULL) return head;
            count++;
        }
        ListNode* newhead=head;
        if(count==k && temp!=NULL){
            
            newhead=temp->next;
            temp->next=NULL;
            
            head=reverseList(head);
        }
        ListNode* ans=reverseKGroup( newhead,  k);
        ListNode* orig=head;
        int a=k-1;
        while(a--){
            orig=orig->next;
        }
        orig->next=ans;
        return head;
    }
};
;

