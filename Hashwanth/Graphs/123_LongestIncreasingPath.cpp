class Solution {
public:
    vector<pair<int,int>> dirs={{1,0},{-1,0},{0,1},{0,-1}};
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        if(matrix.size()==0) return 0; //dont need this as m>=1
        int m=matrix.size();
        int n=matrix[0].size();
       //auto dp=new int[m][n];  
             //memoization (stores longest path from that point)
vector<vector<int>> dp(m, vector<int>(n, 0));      
        int result=0; //longestpath
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int curr_res=dfs(matrix,i,j,dp);
                result=max(result,curr_res);
            }
        }
        return result;
    }
    int dfs(vector<vector<int>>& matrix,int i, int j, vector<vector<int>>& dp)
    { 
        if(dp[i][j]>0) return dp[i][j];
           
        int res=0;
     for(auto dir:dirs)
     {   int newI=i+dir.first;
         int newJ=j+dir.second;
         if(newI>=0 && newJ>=0 && newI<matrix.size() && newJ<matrix[0].size() && matrix[newI][newJ]>matrix[i][j])
             res=max(res,dfs(matrix,newI,newJ,dp));
     }
     dp[i][j]=res+1;
     return res+1;
    }
};
