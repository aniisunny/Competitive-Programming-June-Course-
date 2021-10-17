class Solution {
public:
    ListNode* reverse(ListNode* head){        
        ListNode *prev = NULL, *curr = head, *nxt = NULL;
        while(curr != NULL){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL)return 1;
        
        ListNode *slow = head, *fast = head;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        fast = head;
        slow = reverse(slow);
        while(fast && slow){
            if(fast->val != slow->val)return 0;
            fast = fast->next;
            slow = slow->next;
        }
        return 1;
    }
};
