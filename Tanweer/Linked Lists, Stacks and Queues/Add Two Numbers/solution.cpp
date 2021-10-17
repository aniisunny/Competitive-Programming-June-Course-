class Solution 
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *l = new ListNode(-1);
        ListNode *head = l;
        int carry = 0;
        while(l1 != NULL || l2 != NULL)
        {
            int x = l1 != NULL ? l1->val:0;
            int y = l2 != NULL ? l2->val:0;
            int sum = x + y + carry;
            carry = sum / 10;
            l->next = new ListNode(sum % 10);
            
            if(l1 != NULL)
            {
                l1 = l1->next;
            }
            if(l2 != NULL)
            {
                l2 = l2->next;
            }
            
            l = l->next;            
        }
        if(carry>0)
        {
            l->next = new ListNode(carry);
            l = l->next;
        }
        return head->next;
    }
};