/*CodeStudio*/
/* Insert, Erase, countswordstartwith, conutswordequalto */
//here each node have a prefix_count and word_count which is end with 0(0- means not end) instead of flag;
struct N{
    N *link[26];
    int cntw=0;
    int cntp=0;
    
    bool contain(char c){
        return (link[c-'a']!=NULL);
    }
    
    void put(char c, N *node){
        link[c-'a']=node;
    }
    
    N* get(char c){
        return link[c-'a'];
    }
};
class Trie{
    private: N* root;
    public:

    Trie(){
        root=new N();
    }

    void insert(string &word){
      N* node=root;
      for(int i=0;i<word.size();i++){
          if(!node->contain(word[i])){
              node->put(word[i],new N());
          }
          node=node->get(word[i]);
          node->cntp++;
      }  
       node->cntw++; 
    }

    int countWordsEqualTo(string &word){
        N *node=root;
        for(int i=0;i<word.size();i++){
            if(node->contain(word[i])){
                node=node->get(word[i]);
            }
            else{
                return 0;
            }
        }
        return node->cntw; 
    }

    int countWordsStartingWith(string &word){
          N *node=root;
        for(int i=0;i<word.size();i++){
            if(node->contain(word[i])){
                node=node->get(word[i]);
            }
            else{
                return 0;
            }
        }
        return node->cntp; 
    }

    void erase(string &word){
       N *node=root;
        for(int i=0;i<word.length();i++){
            if(node->contain(word[i])){
               node=node->get(word[i]);
               node->cntp--; 
            }
        }
        node->cntw--;
    }
};

// ................Incase if we need to delete node............
bool isempty(N *root){
    for (int i = 0; i < 26; i++) 
        if (root->children[i]) 
            return false; 
    return true; 
}
N* del(N *root, string &s; int i){
  if(!root){return;}
 
  if(i==s.size()){
  if(root->fl==true){fl=false;}
  if(isempty(root)){delete root; root=NULL;}
  return root;  
  }
  
  int in=key[i]-'a';
  root->link[in]=del(root->link[in],s,i+1);
  if(isempty(root) && root->fl==false){
    delete(root);
    root=NULL;
  }
   return root;
}
