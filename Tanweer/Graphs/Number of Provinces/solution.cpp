class Solution {
public:
    
    int findCircleNum(vector<vector<int>>& M) 
    {
        int n = M.size(), ans=0;
        
        if(n==0)
        {
            return 0;
        }

        vector<bool>vis (n,false);

        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                ans++;
                dfs(M,vis,i);
            }
        }
        
        return ans;
    }

    void dfs(vector<vector<int>>& M, vector<bool>& vis, int i)
    {
        vis[i]=true;
        for(int j=0;j<M.size();j++)
            if(M[i][j]==1 && !vis[j])
                dfs(M,vis,j);
    }
};