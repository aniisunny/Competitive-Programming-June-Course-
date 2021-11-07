class Solution {
public:
    void rev(ListNode* s,ListNode* e){
        ListNode *pre=NULL,*cur=s,*nex=cur->next;
        while(pre!=e){
           
            cur->next=pre;
            pre=cur;
            cur=nex;
            if(nex!=NULL){nex=nex->next;}
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||head->next==NULL||k==1){return head;}
        
        ListNode *dum=new ListNode(-2);
        dum->next=head;
        ListNode *bhead=dum;
        
        ListNode *e=head;
        
        int i=0;
        while(e!=NULL){
            i++;
            if(i%k==0){
                ListNode *s=bhead->next;
                ListNode *temp=e->next;
                rev(s,e);
                bhead->next=e;
                s->next=temp;
                bhead=s;
                e=temp;
            }
            else{
                e=e->next;
            }
        }
        return dum->next;
    }
};
