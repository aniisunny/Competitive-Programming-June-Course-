class Solution {
public:
    class TrieNode{
    public:
        TrieNode *child[26];
    }*root  = new TrieNode();
    int minimumLengthEncoding(vector<string>& words) {
        int ans = 0;
        sort(begin(words), end(words), [&](string a, string b)->bool{
            return a.size() > b.size();
        });
        for(auto word : words){
            TrieNode *temp = root;
            bool exist = false;
            for(int i = word.size()-1; i>=0; i--){
                if(temp->child[word[i]-'a']==NULL){
                    temp->child[word[i]-'a'] = new TrieNode();
                    exist = true;
                }
                temp = temp->child[word[i]-'a'];
            }
            if(exist)
                ans += word.size() + 1;
        }
        return ans;
    }
};
