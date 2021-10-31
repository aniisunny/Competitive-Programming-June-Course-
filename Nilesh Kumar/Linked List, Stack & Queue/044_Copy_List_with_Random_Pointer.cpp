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
        if(!head) return head;
        Node* temp = head;
        while(temp) {
            Node* newNode = new Node(temp->val);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = temp->next->next;
        }
        temp = head;
        while(temp && temp->next) {
            if(temp->random)
            temp->next->random = temp->random->next;
            temp = temp->next->next;
        }
        temp = head;
        Node* temp2=head->next;
        Node* ansHead = temp2;
        while(temp->next->next && temp2->next) {
            temp->next = temp->next->next;
            temp2->next = temp2->next->next;
            temp = temp->next;
            temp2=temp2->next;
        }
        temp->next=NULL;
        temp2->next = NULL;
        return ansHead;
    }
};