//Reverse:
      class Solution {
public:
    ListNode* reverse(ListNode* l)
    {
        ListNode *p = l, *q = 0, *r = 0;
        while(p)
        {
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
        return q;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    { 
        l1 = reverse(l1);
        l2 = reverse(l2);
    
        ListNode* head = new ListNode(0);
        ListNode* ans = head;
        ListNode* a = l1;
        ListNode* b = l2;
        ListNode* last= NULL;
        
        int carry = 0;
        while(a || b)
        {
            int sum=0;
            if(a)
            {
                sum = a->val;
                a = a->next;
            }
            
            if(b)
            {
                sum += b->val;
                b = b->next;
            }
            sum += carry;
            
            ListNode* temp = new ListNode(sum%10);
            ans->next = temp;
            ans = ans->next;
            carry = sum/10;
        }
        
        if(carry != 0)
        {
            ListNode* temp = new ListNode(carry);
            ans->next = temp;
            ans = ans->next;
        }
    
        ans = reverse(head->next);
        return ans;
    }
};



//Without reverse:
     
     class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> st1 , st2;
        ListNode*ans = new ListNode(0);
        while(l1){
            st1.push(l1->val);
            l1 = l1->next;
        }
        while(l2){
            st2.push(l2->val);
            l2 = l2->next;
        }
        int sum = 0;
        while(!st1.empty() || !st2.empty()){
            if(!st1.empty()) {sum += st1.top(); st1.pop();}
            if(!st2.empty()) {sum += st2.top(); st2.pop();}
            ans->val = sum%10;
            sum/=10;
            ListNode* head = new ListNode(sum);            
            head->next = ans;
            ans = head;
        }
        return ans->val == 0? ans->next : ans;
    }
};
