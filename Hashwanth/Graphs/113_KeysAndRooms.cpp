class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        int visited[n];
        for(int i=0;i<n;i++)
            visited[i]=0;
        visited[0]=1;
        dfs(rooms,visited,0);
        for(auto x:visited)
        {
            if(x==0) return 0;
        }
        return 1;
    }
    void dfs(vector<vector<int>>& rooms, int visited[], int i)
    {
        for(auto x:rooms[i])
        {
            if(visited[x]==0)
            {
                visited[x]=1;
                dfs(rooms,visited,x);
            }
        }
    }
};
