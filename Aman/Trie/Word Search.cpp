class Solution {
public:
    
    bool dfs(vector<vector<char>>& b, int i, int j, int cnt, string w)
    {
        if(cnt==w.length())
            return true;
        if(i==b.size()|| i==-1 || j==b[0].size()|| j==-1 || b[i][j]!=w[cnt])
            return false;
        char ch=b[i][j];
        b[i][j]='*';
        bool res= dfs(b,i,j+1,cnt+1,w) || dfs(b,i+1,j,cnt+1,w) || dfs(b,i,j-1,cnt+1,w) || dfs(b,i-1,j,cnt+1,w);
        b[i][j]=ch;
        return res;
    }  
    
    
    bool exist(vector<vector<char>>& b, string w) {
        for(int i=0;i<b.size();i++)
        {
            for(int j=0;j<b[0].size();j++)
            {
                if(b[i][j]==w[0] && dfs(b,i,j,0,w)==true)
                  return true;
            }
        }
        return false;
    }
};
