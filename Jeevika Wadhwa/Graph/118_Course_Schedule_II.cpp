class Solution {
public:
    vector<int>ans;
    bool isCyclic(int course, vector<int>graph[], vector<bool>& visited, vector<bool>& explored){
        visited[course] = true;
        for(auto previousCourse : graph[course]){
            if(visited[previousCourse] == false && isCyclic(previousCourse, graph, visited, explored))
                return true;
            else if(explored[previousCourse] == false)
                return true;
        }
        explored[course] = true;
        ans.push_back(course);
        return false;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> graph[numCourses];
        vector<bool>visited(numCourses, false), explored(numCourses, false);
        for(auto requisite : prerequisites)
            graph[requisite[0]].push_back(requisite[1]);
        for(int i = 0; i<numCourses; i++){
            if(visited[i] == false){
                if(isCyclic(i, graph, visited, explored)){
                    return vector<int>{};
                }
            }
        }
        return ans;
    }
};
