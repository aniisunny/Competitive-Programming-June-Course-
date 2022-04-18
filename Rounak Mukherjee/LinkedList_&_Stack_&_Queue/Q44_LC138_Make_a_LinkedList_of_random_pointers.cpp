class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL){return head;}
      Node *cur=head,*front=NULL;
      while(cur!=NULL){
          front=cur->next;
          cur->next=new Node(cur->val);
          cur->next->next=front;
          cur=front;
      } 
      
      cur=head;
      while(cur!=NULL){
          if(cur->random!=NULL)
          {cur->next->random=cur->random->next;}
          cur=cur->next->next;
      }  
        
      Node *dummy=new Node(-1);
      dummy->next=head->next;
      Node *itr=dummy->next ; 
      cur=head;
      while(cur!=NULL){
        front=cur->next->next;
        cur->next=front;
          if(front!=NULL){
        itr->next=front->next;       
          }else{
              itr->next=NULL;
          }
       
        cur=front;
        itr=itr->next;  
      }  
        
        return dummy->next;
    }
};
