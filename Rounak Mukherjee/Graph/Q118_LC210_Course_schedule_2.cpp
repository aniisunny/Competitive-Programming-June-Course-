class Solution {
public:
    bool dfs(int node, vector<vector<int>>& graph, vector<int>& visited, vector<int>& result)
    {
        visited[node]=1;
        for(int i=0;i<graph[node].size();i++)
        {
            if(visited[graph[node][i]]==1)return false; 
            if(visited[graph[node][i]]==0)
            {
                if(!dfs(graph[node][i],graph,visited,result))
                    return false;
            }
        }
        visited[node]=2; 
        result.push_back(node); 
        return true;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);
        for(int i=0;i<prerequisites.size();i++)
        {
            graph[prerequisites[i][0]].push_back(prerequisites[i][1]); 
        }
        vector<int> visited(numCourses,0); 
        vector<int> result; 
        bool flag = true; 
        for(int i=0;i<numCourses;i++)
        {
            if(visited[i]==0)
            {
                if(!dfs(i,graph,visited,result)){
                    flag = false; 
                    break;
                }
            }
        }
        if(!flag)
            return vector<int>();
        return result;
    }
};
