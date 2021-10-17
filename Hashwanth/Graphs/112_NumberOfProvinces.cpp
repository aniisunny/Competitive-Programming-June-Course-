class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int c=0;
        int visited[n];
        for(int i=0;i<n;i++)
            visited[i]=0;
        for(int i=0;i<n;i++)
        {
            if(visited[i]==0)
            {
                dfs(isConnected, visited, i);
                c++;
            }
        }
        return c;
        
    }
    void  dfs(vector<vector<int>>& isConnected, int visited[], int i )
    {   int n=isConnected.size();
        for(int j=0;j<n;j++)
        {
            if(isConnected[i][j]==1 && visited[j]==0)
            {
                visited[j]=1;
                dfs(isConnected, visited,j);
            }
        }
    }
};
