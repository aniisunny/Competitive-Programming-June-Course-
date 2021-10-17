class Solution {
public:
void dfs(vector<vector<int>>& graph, vector<vector<int>>& paths, vector<int>& path, int i){
    path.push_back(i);
    if(i == graph.size()-1)
        paths.push_back(path);
    else{
        for(auto j : graph[i])
            dfs(graph, paths, path, j);
    }
    path.pop_back();
}
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>paths;
        vector<int>path;
        dfs(graph, paths, path, 0);
        return paths;
    }
};
