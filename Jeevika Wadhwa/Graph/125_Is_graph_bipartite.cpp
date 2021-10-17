class Solution {
public:
    bool differentColor(vector<vector<int>>& graph, vector<int>& color, int node){
        for(int i : graph[node]){
            if(color[i] == color[node])
                return false;
            if(color[i] == -1){
                color[i] = 1 - color[node];
                if(differentColor(graph, color, i) == false)
                    return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>color(n, -1);
        for(int i = 0; i<n; i++){
            if(color[i] == -1){
                color[i] = 1;
                if(differentColor(graph, color, i) == false)
                    return false;
            }
        }
        return true;
    }
};
