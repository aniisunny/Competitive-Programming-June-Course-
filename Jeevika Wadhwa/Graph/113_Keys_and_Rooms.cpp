class Solution {
public:
    void dfs(vector<vector<int>> rooms, vector<bool>& visited, int i){
        if(visited[i])return;
        visited[i] = true;
        for(int j : rooms[i]){
            if(!visited[j]){
                dfs(rooms, visited, j);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool>visited(n, false);
        dfs(rooms, visited, 0);
        
        for(int i = 0; i<n; i++){
            if(!visited[i]){
                return false;
            }
        }
        return true;
    }
};
