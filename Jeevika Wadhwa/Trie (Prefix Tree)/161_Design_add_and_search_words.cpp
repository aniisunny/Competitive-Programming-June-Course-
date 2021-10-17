class WordDictionary {
public:
    /** Initialize your data structure here. */
    class TrieNode{
    public:
        TrieNode *child[26];
        bool isEnd;
    } *root;
    WordDictionary() {
        root = new TrieNode();
    }
    void addWord(string word) {
        TrieNode *temp = root;
        for(char c : word){
            if(temp->child[c-'a'] == NULL)temp->child[c-'a'] = new TrieNode();
            temp = temp->child[c-'a'];
        }
        temp->isEnd = true;
    }
    
    bool find(string word, TrieNode *temp){
        if(word == "")return temp->isEnd;
        for(int j = 0; j<word.size(); j++){
            if(word[j] == '.'){
                for(int i = 0; i<26; i++){
                    if(temp->child[i] != NULL && find(word.substr(j+1), temp->child[i])){
                        return true;
                    }
                }
                return false;
            }
            else if(temp->child[word[j]-'a'] == NULL)return false;
            temp = temp->child[word[j]-'a'];
        }
        return temp->isEnd;
    }
    bool search(string word) {
        return find(word, root);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
