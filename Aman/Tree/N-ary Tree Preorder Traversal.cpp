class Solution {
public:
    vector<int>res;
    
    void helpr(Node* root)
    {
       if(root==NULL)
           return;
       res.push_back(root->val);
       for(Node* child: root->children)
         helpr(child);
    }
    
    vector<int> preorder(Node* root) {
        helpr(root);
        return res;
    }
};
