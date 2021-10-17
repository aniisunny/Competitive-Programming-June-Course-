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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,int> mp;
        ListNode *temp=headA;
        while(temp)
        {
            mp[temp]=1;
            temp=temp->next;
        }
        temp=headB;
        while(temp)
        {
            if(mp.find(temp)!=mp.end())
                return temp;
            temp=temp->next;
        }
        return NULL;
    }
 
    
};
