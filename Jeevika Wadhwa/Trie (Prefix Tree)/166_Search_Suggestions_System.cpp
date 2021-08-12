class Solution {
public:
    class TrieNode{
    public:
        TrieNode *child[26];
        vector<string>p;
    }*root = new TrieNode();
    
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        TrieNode *temp = root;
        sort(products.begin(), products.end());
        vector<vector<string>>ans;
        for(auto product : products){
            temp = root;
            for(char c : product){
                if(temp->child[c-'a'] == NULL)
                    temp->child[c-'a'] = new TrieNode();
                temp = temp->child[c-'a'];
                temp->p.push_back(product);
            }
        }
        for(char c : searchWord){
            vector<string>v;
            root = root == NULL ? NULL : root->child[c-'a'];
            for(int i = 0; root != NULL && i < 3 && i < root->p.size(); i++)
                v.push_back(root->p[i]);
            ans.push_back(v);
        }
        return ans;
    }
};
