class Solution {
public:
    bool dfs(vector<vector<int>>& graph, int i, int col, vector<int>& color) {
        color[i] = col;
        for(auto x: graph[i]) {
            if(color[x] == color[i]) {
                return 0;
            }
            if(color[x] == 0 && !dfs(graph, x, -col, color)) {
                return 0;
            }
        }
        return 1;
    }
    
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        vector<vector<int>> graph(N+1);
        for(auto i: dislikes) {
            graph[i[0]].push_back(i[1]);
            graph[i[1]].push_back(i[0]);
        }
        vector<int> color(N+1, 0); 
        for(int i=1;i<=N;i++) {
            if(color[i] == 0 && !dfs(graph, i, 1, color)) {
                return 0;
            }
        }
        return 1;
    }
};
