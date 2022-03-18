struct Node{
    bool end;
    Node *link[256]={NULL};
    string word="";
    Node(){
        end=false;
    }
};
class Solution {
public:
    Node* root=new Node();
    
   void insert(string s)
    {
        Node *curr=root;
        for(auto it:s){
            int ind=(int)it;
            if(curr->link[ind]){
                curr=curr->link[ind];
            }else{
                 curr->link[ind]=new Node();
                curr=curr->link[ind];
            }
            
        }
        curr->end=true;
        curr->word=s;
    }
    
    
    void solve(vector<vector<char>>& board, Node *node, int i, int j, int r, int c,string &ans){
        int ind=(int)board[i][j];
        if(board[i][j]=='$' || node->link[ind]==NULL){return;}
        
        node=node->link[ind];
        if(node->end){ 
        ans=ans+(node->word);
        }
        
        char ch = board[i][j];   //Store current char
        board[i][j] = '$';
        
         if(i>0)     //TOP
            solve(board,node,i-1,j,r,c,ans);
        if(i<r-1)   //DOWN
             solve(board,node,i+1,j,r,c,ans);
        if(j>0)     //LEFT
             solve(board,node,i,j-1,r,c,ans);
        if(j<c-1)   //RIGHT
             solve(board,node,i,j+1,r,c,ans);
        
        board[i][j] = ch;  
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        insert(word);
        Node *node=root;
        int r=board.size();
        int c=board[0].size();
        string ans="";
       
        
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                solve(board,node,i,j,r,c,ans);
            }
        }
        if(word.length()!=ans.length()){return false;}
        for(int i=0;i<ans.size();i++){
            if(word[i]!=ans[i]){
                return false;
            }
        }
        return true;
    }
};
