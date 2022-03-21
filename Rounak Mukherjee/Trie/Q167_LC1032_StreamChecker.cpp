class Trie{
    Trie *children[26];
    bool endOfWord;
public:
    Trie():endOfWord(false){
        for(int i = 0; i < 26; ++i) children[i] = nullptr;
    }
    
    void insert(string s){
        Trie *t = this;
        for(char c: s){
            if(t->children[c-'a'] == nullptr)
                t->children[c-'a'] = new Trie();
            t = t->children[c-'a'];
        }
        t->endOfWord = true;
    }
    
    bool search(deque<char>& s){
        Trie *t = this;
        for(char c: s){
            if(t->children[c-'a'] == nullptr) return false;
            t = t->children[c-'a'];
            if(t->endOfWord) return true;
        }
        return false;
    }
};

class StreamChecker {
    Trie t;
    deque<char> stream;
public:
    StreamChecker(vector<string>& words) {
        for(string& w: words){
            reverse(w.begin(), w.end());
            t.insert(w);
        }
    }
    
    bool query(char letter) {
        stream.push_front(letter);
        return t.search(stream);
    }
};
