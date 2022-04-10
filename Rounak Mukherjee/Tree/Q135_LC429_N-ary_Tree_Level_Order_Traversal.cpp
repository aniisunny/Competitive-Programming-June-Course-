class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
         
        vector<vector<int>>ans;
        queue<Node*>q;
        if(root==NULL){return ans;}
        q.push(root);
        while(!q.empty()){
         vector<int>l;   
         int siz=q.size();
         for(int i=0;i<siz;i++){
             Node *node=q.front();
             q.pop();
             for(auto c:node->children){
                 q.push(c);
             }
             
             l.push_back(node->val);
         } 
           ans.push_back(l); 
        }
        return ans;
    }
};
