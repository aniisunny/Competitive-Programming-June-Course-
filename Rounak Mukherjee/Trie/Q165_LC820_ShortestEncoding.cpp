struct Node{
    Node *link[26]={NULL};
};
class Solution {
public:
    Node *root=new Node();
    
    bool checknode(string s){
    bool res=false;
    Node *node=root;
        
     for(int i=s.length()-1;i>=0;i--){
         int c=s[i]-'a';
         if(!node->link[c]){
             res=true;
             node->link[c]=new Node();
         }
         node=node->link[c];
     }  
        return res;
    }
    
    
    int minimumLengthEncoding(vector<string>& words) {
        int res=0;
        sort(words.begin(),words.end(), [](string a, string b){return a.size()>b.size();}); //Lambda function
        
        for(int i=0;i<words.size();i++){
          if(checknode(words[i])){
              res+=words[i].size()+1;
          }           
        }
        return res;
    }
};
