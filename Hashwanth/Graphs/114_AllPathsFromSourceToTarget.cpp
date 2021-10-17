class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> res;
        vector<int> path;
        dfs(graph,res,path,0);
        return res;
    }
void dfs(vector<vector<int>>& graph, vector<vector<int>>& res, vector<int>& path, int curr)
    {
    path.push_back(curr);
        if(curr==graph.size()-1)
            res.push_back(path);
        else
        {
            for(auto x:graph[curr])
            {
                dfs(graph,res,path,x);
            }
        }
    path.pop_back();
    }
};
