class WordDictionary {
public:
    
    struct TrieNode
    {
        struct TrieNode* child[26];
        bool isEnd;
    };
    TrieNode* node;
    
    
    /** Initialize your data structure here. */
    WordDictionary() {
      node=new TrieNode();    
    }
    
    void addWord(string word) {
        TrieNode *cur=node;
        for(char c: word)
        {
           if(cur->child[c-'a']==NULL)
             cur->child[c-'a']=new TrieNode();
           cur=cur->child[c-'a'];   
        }
        cur->isEnd=true;
    }
    
    bool help(string word, TrieNode *cur)
    {
        for(int i=0;i<word.length();i++)
        {
            if(word[i]=='.')
            {
              for(int j=0;j<26;j++)
                  if(cur->child[j])
                  {
                        if(help(word.substr(i+1),cur->child[j]))
                          return true;
                  }
              return false;
            }
           else if(cur->child[word[i]-'a'] == NULL)
               return false;
           cur=cur->child[word[i]-'a'];
        }
        return cur->isEnd;
    }
    
    
    bool search(string word) {
        return help(word,node);
    }
};
