/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if(!root) return res;
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> temp;
            int size=q.size();
            while(size--)
            {
                Node* t=q.front();
                q.pop();
                temp.push_back(t->val);
                for(auto x:t->children)
                {
                    if(x) q.push(x);
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};
