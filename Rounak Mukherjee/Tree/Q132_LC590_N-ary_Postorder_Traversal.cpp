class Solution {
public:
    
    void solve(Node *root, vector<int> &ans){
      if(root==NULL){
          return;
      }  
        
        for(Node* it: root->children){
            solve(it,ans);
        }
        ans.push_back(root->val);
    }
    
    vector<int> postorder(Node* root) {
        vector<int>res;
        solve(root,res);
        return res;
    }
};
