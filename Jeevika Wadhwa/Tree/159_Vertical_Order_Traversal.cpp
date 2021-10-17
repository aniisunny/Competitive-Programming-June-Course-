class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)return ans;
        map<int,vector<int>>m;
        queue<pair<int,TreeNode*>>q;
        q.push({0,root});
        
        while(!q.empty()){
            vector<pair<int,int>>temp;
            int len = q.size();
            
            for(int i=0;i<len;i++){
                auto p=q.front();q.pop();
                temp.push_back({p.first,p.second->val});
                if(p.second->left)q.push({p.first-1,p.second->left});
                if(p.second->right)q.push({p.first+1,p.second->right});
            }
            sort(temp.begin(),temp.end());
            for(auto p:temp)m[p.first].push_back(p.second);
        }
        for(auto i:m)ans.push_back(i.second);
        return ans;
    }
};
