class Solution {
public:
    void helper(vector<vector<int>>& isConnected,vector<int>& visited, int i)
    {
        for(int j=0; j<isConnected[0].size(); j++)
        {
            if(visited[j]==0 && isConnected[i][j]==1)
            {
                visited[j]=1;
                helper(isConnected,visited,j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        if(isConnected.size()==1)
        {
            return 1;
        }
        vector<int>visited(isConnected.size(),0);
        int provinces{};
        for(int i =0; i<isConnected.size(); i++)
        {
            if(visited[i]==0)
            {
                //vistited[i]=1
                helper(isConnected,visited,i);
                provinces++;
            }
        }
        return provinces;
    }
};