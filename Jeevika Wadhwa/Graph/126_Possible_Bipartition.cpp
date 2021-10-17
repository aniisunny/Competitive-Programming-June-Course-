class Solution {
public:
    bool differentColor(vector<int>adj[], vector<int>&color, int node){
        for(auto ele : adj[node]){
            if(color[ele] == color[node])
                return false;
            if(color[ele] == -1){
                color[ele] = 1 - color[node];
                if(differentColor(adj, color, ele) == false)
                    return false;
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int>adj[n+1];
        for(auto dislike : dislikes){
            adj[dislike[0]].push_back(dislike[1]);
            adj[dislike[1]].push_back(dislike[0]);
        }
        vector<int>color(n+1, -1);
        for(int i = 1; i<=n; i++){
            if(color[i] == -1){
                color[i] = 1;
                if(differentColor(adj, color, i) == false)
                    return false;
            }
        }
        return true;
    }
};
