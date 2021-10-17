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
    bool hasCycle(ListNode *head) {
        ListNode *i=head;
        ListNode *j=head;
    while(i && j)
    {
        i=i->next;
        j=j->next;
        if(j)
            j=j->next;
        if(i==j && i!=NULL)
            return true;
    }
            
        return false;
    }
};
