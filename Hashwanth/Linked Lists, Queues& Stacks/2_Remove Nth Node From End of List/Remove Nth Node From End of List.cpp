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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l=0; //len of ll
        ListNode* temp=head;
        while(temp)
        {
            l++;
            temp=temp->next;
        }
        temp=head;
        int ib=l+1-n;  //number from begin is (l+1-ie)
        if(ib==1)
        {
            head=head->next;
            delete temp;
        }
       else 
       {
             for(int i=0;i<ib-2;i++)
        {
            temp=temp->next;
        }
             temp->next=temp->next->next;
       }
        return head;
    }
};
