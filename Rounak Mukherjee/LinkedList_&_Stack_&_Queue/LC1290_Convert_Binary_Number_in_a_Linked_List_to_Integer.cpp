class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans=0;
        ListNode* cur=head;
        while(cur!=NULL){
            ans=2*ans+(cur->val);
            cur=cur->next;
        }
        return ans;
    }
};
