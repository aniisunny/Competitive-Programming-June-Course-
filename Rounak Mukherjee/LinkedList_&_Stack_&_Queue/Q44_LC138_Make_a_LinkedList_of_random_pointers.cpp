/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       if(head==NULL){return NULL;}
        Node *next,*temp;
    for(Node *curr=head;curr!=NULL;){
        next=curr->next;
        curr->next=new Node(curr->val);
        curr->next->next=next;
        curr=next;
    }
    for(Node *curr=head;curr!=NULL;curr=curr->next->next){
        curr->next->random=(curr->random!=NULL)?(curr->random->next):NULL;
    }
    
     Node* original = head, *copy = head->next; 
  
    temp = copy; 
  
    while (original && copy) 
    { 
        original->next = 
         original->next? original->next->next : original->next; 
  
        copy->next = copy->next?copy->next->next:copy->next; 
        original = original->next; 
        copy = copy->next; 
    } 
  
    return temp;   
    }
};
