struct Node{
  Node *link[26];
  bool fl=false;
    
  bool contain(char a){
      return (link[a-'a']!= NULL);
  }  
  void put(char a,Node *node) {
      link[a-'a']=node;
  } 
  Node *get(char a){
      return link[a-'a'];
  }  
};

class WordDictionary {
public:
    Node* root;
    WordDictionary() {
        root=new Node();
    }
    
    void addWord(string word) {
        int siz=word.length();
        Node* node=root;
        for(int i=0;i<siz;i++){
            if(!node->contain(word[i])){
                node->put(word[i],new Node());
            }
            node=node->get(word[i]);
        }
        node->fl=true;
    }
    
     bool helper(string word, Node *node){
        for(int i=0;i<word.length();i++){
            if(word[i]=='.'){
				/*
					This piece of code is the key to solve this problem 
					so what this line basically do is it checks if our string has any possibilty 
					for any character between a to z where we get our desired results. 
					So we just make a recursive call to the same function for 
					every possible character at the place of "."!
				*/
                for(char ch='a';ch<='z';ch++){
                    if(node->contain(ch) && helper(word.substr(i+1),node->get(ch))) 
                        return true;
                }
                return false;
            }
            else{
            if(!node->contain(word[i])){
                return false;
            }
            node = node->get(word[i]);
            }
        }
        if(node->fl==true) {
            return true; 
        }
        return false;     
    }
    bool search(string word) {
        Node *node  = root;
        return helper(word,node);
    }
};

