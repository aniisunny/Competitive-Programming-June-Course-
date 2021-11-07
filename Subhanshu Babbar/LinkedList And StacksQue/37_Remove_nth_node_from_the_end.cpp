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
        if(!head )return head; 
        auto fp = head;
        auto sp = head;
        
        for(int i=0 ;i<n ;i++){
            fp = fp -> next;
        }
		// if fp ==  null , we want to remove last element from back or first element from front  
        if(!fp)return head -> next;
        while(fp -> next){
            sp = sp -> next;
            fp = fp -> next;
        }
        auto del = sp -> next;    
        sp -> next = sp -> next -> next;
        delete(del);
        
        return head;
    
        
    }
};