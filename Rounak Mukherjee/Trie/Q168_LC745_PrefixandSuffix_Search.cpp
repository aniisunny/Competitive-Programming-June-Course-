class TrieNode {
public: 
    TrieNode* children[27] = {nullptr};
    int index = 0;
    ~TrieNode() {
        for (auto& child : children) 
            delete child; 
    }
};


class Trie {
public: 
    TrieNode* root; 
    Trie() { root = new TrieNode(); }
    ~Trie() { delete root; }

    void insert(string word, int index) {
        TrieNode* node = root; 
        for (auto& letter : word) {
            if (!node->children[letter - 'a']) 
                node->children[letter - 'a'] = new TrieNode(); 
            node = node->children[letter - 'a'];
            node->index = index; 
        }
    }

    int prefix(string word) {
        TrieNode* node = root; 
        for (auto& letter : word) {
            node = node->children[letter - 'a']; 
            if (!node) return -1; 
        }
        return node->index; 
    }
};


class WordFilter {
    Trie* trie; 
public:
    WordFilter(vector<string>& words) {
        trie = new Trie(); 
        for (int i = 0; i < size(words); ++i) {
            for (int j = 0; j < size(words[i]); ++j) {
                string key = words[i].substr(j) + "{" + words[i]; 
                trie->insert(key, i); 
            }
        }
    }
    
    int f(string prefix, string suffix) {
        string key = suffix + "{" + prefix; 
        return trie->prefix(key); 
    }
};
