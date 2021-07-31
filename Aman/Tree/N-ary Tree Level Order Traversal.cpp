class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>res;
        vector<int>v;
        queue<Node*>q;
        if(root==NULL)
          return res;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                Node* temp=q.front();
                q.pop();
                v.push_back(temp->val);
                for(auto child: temp->children)
                {
                    q.push(child);
                }
            }
            res.push_back(v);
            v.resize(0);
        }
        return res;
    }
};
