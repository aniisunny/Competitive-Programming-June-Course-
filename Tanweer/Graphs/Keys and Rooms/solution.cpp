class Solution {
public:
    
    void dfs(vector<vector<int>>& rooms, int i, vector<bool> & visited)
    {
        visited[i] = true;
        
        for (int x : rooms[i])
        {
            if(visited[x] == false)
            {
                dfs(rooms , x , visited);
            }
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) 
    {
        vector<bool> visited(rooms.size() , false);
        
        dfs(rooms,0,visited);
        
        for (bool val : visited)
        {
            if(val == false)
            {
                return false;
            }
        }
        
        return true;
    }
};