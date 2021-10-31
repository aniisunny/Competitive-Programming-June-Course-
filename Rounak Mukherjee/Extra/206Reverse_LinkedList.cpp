//Iterative:

  class Solution {
  public:
       ListNode* reverseList(ListNode* head) {
          ListNode* pre=NULL;
          ListNode* cur=head;
       
         if(cur==NULL){return NULL;}
         if(cur->next==NULL){return head;}
         while(cur!=NULL){
             ListNode* nex=cur->next;
             cur->next=pre;
             pre=cur;
             cur=nex;
          }
          return pre;
     }
  };


//Recursive:

 
 
      class Solution {

      public:
        ListNode* reverseList(ListNode* head) {
            if (!head || !(head -> next)) {
               return head;
             }
           ListNode* node = reverseList(head -> next);
           head -> next -> next = head;
           head -> next = NULL;
           return node;
        }
      };

    
