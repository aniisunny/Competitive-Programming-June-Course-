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
        if (head->next == NULL)
        {
            return true;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        slow = reversed(slow);
        fast = head;
        while(slow!=NULL)
        {
            if(slow->val!=fast->val)
            {
                return false;
            }
            slow=slow->next;
            fast=fast->next;
        }
        return true;
    }
    public:
    ListNode* reversed(ListNode* slow)
    {
        ListNode* prev = NULL;
        ListNode* temp = slow;
        while(temp!=NULL)
        {
            ListNode* curr = temp->next;
            temp->next = prev;
            prev = temp;
            temp = curr;
        }
        slow = prev;
        return slow;
    }
};