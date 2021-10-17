class Solution {
public:
    vector<int>res;
    
    void helper(Node* root)
    {
        if(root==NULL)
            return;
        for(Node* child: root->children)
         helper(child);   
        res.push_back(root->val);
    }
    
    vector<int> postorder(Node* root) {
        helper(root);
        return res;
    }
};
