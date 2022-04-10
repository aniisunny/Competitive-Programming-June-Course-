class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode* , pair<int ,int>>> Q;
        map<int, map<int,multiset<int>>>todo;
        Q.push({root,{0,0}});
        while(!Q.empty()){
            auto pres= Q.front(); //pres for present node
            Q.pop();
            TreeNode* node=pres.first;
            int x=pres.second.first;
            int y=pres.second.second;
            todo[x][y].insert(node->val);
            if(node->left){
                Q.push({node->left,{x-1,y+1}});
            }
            if(node->right){
                Q.push({node->right,{x+1,y+1}});
            }
        }
        vector<vector<int>>ans;
        for(auto p:todo){
            vector<int>col;
            for(auto q:p.second){
                col.insert(col.end(),q.second.begin(),q.second.end());
            }
            ans.push_back(col);
        }
       return ans; 
    }
};
