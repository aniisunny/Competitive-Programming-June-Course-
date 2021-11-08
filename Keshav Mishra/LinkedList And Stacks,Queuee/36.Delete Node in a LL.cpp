class Solution {
public:
    void deleteNode(ListNode* node) {
        
      
        while(node->next){
        node->val=node->next->val;
        if(node->next->next==NULL){
            node->next=NULL;
        }
            else{
                node=node->next;
            }
        
        }
        
        
        
    }
};