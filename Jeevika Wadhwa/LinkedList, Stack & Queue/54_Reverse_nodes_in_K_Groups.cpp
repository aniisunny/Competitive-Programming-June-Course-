class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *prev = NULL, *curr = head, *nxt = NULL;
        ListNode *counter = head;
        int count = 0;
        for(int i = 0; i< k; i++){
            if(counter == NULL)return head;
            counter = counter->next;
        }
        while(curr != NULL && count < k){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
            count++;
        }
        if(nxt != NULL)
            head->next = reverseKGroup(curr, k);
        return prev;
    }
};
