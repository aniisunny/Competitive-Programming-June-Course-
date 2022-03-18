/*
Brute force:

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string search) {
        string cur;
        vector<string >temp;
        vector<vector<string>>ans;
        sort(products.begin(),products.end());
        
        for(auto c:search){
            cur+=c;
            temp.clear();
            for(auto s:products){
                if(s.substr(0,cur.length())==cur){
                    temp.push_back(s);
                }
                if(temp.size()==3){
                    break;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
*/

//Binary Search:
class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string search) {
        string cur;
        vector<string >temp;
        vector<vector<string>>ans;
        sort(products.begin(),products.end());
        
        for(auto c:search){
            cur+=c;
            temp.clear();
            auto itr=lower_bound(products.begin(),products.end(),cur);
            
            for(int i=0;i<3 && itr+i!=products.end();i++){
             string now=*(itr+i);
             if(now.find(cur)){break;}
             temp.push_back(now);   
            }
            
            ans.push_back(temp);
        }
        return ans;
    }
};
//Trie:


struct Node {
    Node *link[26] = {NULL};
    bool fl;
    Node(){
        fl=false;
    }
};
class Solution {
public:
    Node *root=new Node();
    
    void insertWord(string &word) {
        Node *node=root;
        for (char &c : word) {
            int index = c - 'a';
            if (!node->link[index])
                node->link[index] = new Node();
            node = node->link[index];
        }
        node->fl = true;
    }
    
    
    vector<string> searchWord(string &prefix) {
        Node *node=root;
        vector<string> result;
        for (char &c : prefix) {
            int index = c - 'a';
            if (!node->link[index])
                return {};
            node = node->link[index];
        }
        dfs(node, prefix, result);
        return result;
    }
    
    
    void dfs(Node *trie, string pre, vector<string> &result) {
        if (result.size() == 3)
            return;
        if (trie->fl)
            result.push_back(pre);
        
        for (int i = 0; i < 26; i++) {
            if (trie->link[i])
                dfs(trie->link[i], pre + (char)(i + 'a'), result);
        }
    }
    
    
    
    vector<vector<string>> suggestedProducts(vector<string>& products, string search) {
        Node* trie=root;
        for (string &prod : products)
            insertWord(prod);
        
        vector<vector<string>> result;
        
        string prefix;
        
        for (char &c : search) {
            prefix += c;
            result.push_back(searchWord(prefix));
        }
        return result;
    }
};
