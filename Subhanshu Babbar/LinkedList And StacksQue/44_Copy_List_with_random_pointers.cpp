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
        
        Node* temp=head;
        while(temp!=NULL){
            Node* NewNode=new Node(temp->val);
            Node* RemainingNodes=temp->next;
            temp->next=NewNode;
            NewNode->next=RemainingNodes;
            temp=temp->next->next;
        }
        temp=head;
        
        while(temp!=NULL){
            if(temp->random!=NULL){
            temp->next->random=temp->random->next;
            }
            temp=temp->next->next;
        }
        temp=head;
        Node* Newhead=new Node(200);
        Node* Newtemp=Newhead;
        while(temp!=NULL){
            Newtemp->next=temp->next;
            Newtemp=Newtemp->next;
            temp->next=temp->next->next;
            temp=temp->next;
        }
        
        return Newhead->next;
    }
};