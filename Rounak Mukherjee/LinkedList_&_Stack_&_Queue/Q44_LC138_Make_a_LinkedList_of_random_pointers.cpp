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
        
      
      Node* head2=head->next;
      Node *itr=head2 ; 
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
        
        return head2;
    }
};
