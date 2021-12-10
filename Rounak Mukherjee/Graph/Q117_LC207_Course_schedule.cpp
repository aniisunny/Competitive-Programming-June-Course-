class Solution {
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        graph g = buildGraph(numCourses, prerequisites);
        vector<bool> todo(numCourses, false), done(numCourses, false);
        for (int i = 0; i < numCourses; i++) {
            if (!done[i] && !acyclic(g, todo, done, i)) {
                return false;
            }
        }
        return true;
    }
private:
    typedef vector<vector<int>> graph;
    
    graph buildGraph(int numCourses, vector<pair<int, int>>& prerequisites) {
        graph g(numCourses);
        for (auto p : prerequisites) {
            g[p.second].push_back(p.first);
        }
        return g;
    }
    
    bool acyclic(graph& g, vector<bool>& todo, vector<bool>& done, int node) {
        if (todo[node]) {
            return false;
        }
        if (done[node]) {
            return true;
        }
        todo[node] = done[node] = true;
        for (int v : g[node]) {
            if (!acyclic(g, todo, done, v)) {
                return false;
            }
        }
        todo[node] = false;
        return true;
    }
};
