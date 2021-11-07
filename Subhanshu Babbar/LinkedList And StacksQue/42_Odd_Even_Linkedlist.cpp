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
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next)   
            return head;
        
        ListNode *odd = head;
        ListNode *even_head = head->next;
        ListNode *even = even_head;

        while (odd->next && odd->next->next)
        {
            odd->next = odd->next->next;
            odd = odd->next;
             
            if (even->next && even->next->next)
            {
                even->next = even->next->next;
                even = even->next;
            }
        }
        
        odd->next = even_head;
        even->next = nullptr;

        return head;
    }
};