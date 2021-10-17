class Solution {
public:
    ListNode* oddEvenList(ListNode* head) 
    {
        if(head == NULL || head->next == NULL || head->next->next == NULL)
        {
            return head;
        }
        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *evenhead = head->next;
        ListNode *helper = head->next->next;
        while(helper != NULL && helper->next != NULL)
        {
            odd->next = helper;
            even->next = helper->next;
            helper = helper->next->next;
            odd = odd->next;
            even = even->next;
        }
        if(helper == NULL)
        {
            odd->next = evenhead;
        }
        else
        {
            odd->next = helper;
            odd = odd->next;
            even->next = NULL;
            odd->next = evenhead;
        }
        return head;
    }
};