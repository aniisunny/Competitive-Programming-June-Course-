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
    void poh(Node* root,vector<int>& res)
    {
        res.push_back(root->val);
        for(auto x:root->children)
        {
            if(x)
                poh(x,res);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> res;
        if(root)
        {
            poh(root,res);
        }
        return res;
    }
};
