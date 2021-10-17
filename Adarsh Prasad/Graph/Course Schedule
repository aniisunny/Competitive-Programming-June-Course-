class Solution {
public:
    void dfs(vector<vector<int>>& isConnected, vector<bool>& visited, int i){
        visited[i] = true;
        for(int j = 0; j<isConnected[i].size(); j++){
            if(visited[j] == false && isConnected[i][j] == 1){
                dfs(isConnected, visited, j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool>visited(n, false);
        int ans = 0;
        for(int i = 0; i<n; i++){
            if(visited[i] == false){
                ans++;
                dfs(isConnected, visited, i);
            }
        }
        return ans;
    }
};
