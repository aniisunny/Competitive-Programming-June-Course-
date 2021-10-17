class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* sl=head,*fs=head;
        while(fs && fs->next)
        {
            fs=fs->next->next;
            sl=sl->next;
            if(sl==fs)
                return true;
        }
        return false;  
    }
};
