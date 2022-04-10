class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
    vector<int>ans;
    if(root==NULL){return ans;}
        stack<TreeNode*> s;
        TreeNode* cur=root;
        while(!s.empty() || cur!=NULL){
            if(cur!=NULL){
                s.push(cur);
                cur=cur->left;
            }else{
               TreeNode* temp=s.top()->right;
                if(temp==NULL){
                   temp=s.top();
                    s.pop();
                    ans.push_back(temp->val);
                    while(!s.empty() && temp==s.top()->right){
                        temp=s.top();
                        s.pop();
                        ans.push_back(temp->val);
                    }
                }else{
                    cur=temp;
                }
            }
        }
     
        return ans;
    }
};
