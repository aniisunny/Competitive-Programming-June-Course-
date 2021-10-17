class Solution {
public:
    bool isCyclic(int course, vector<int> graph[], vector<bool>& visited, vector<bool>& explored){
        visited[course] = true;
        for(auto previousCourse : graph[course]){
            if(!visited[previousCourse] && isCyclic(previousCourse, graph, visited, explored))
                return true;
            else if(explored[previousCourse] == false)
                return true;
        }
        explored[course] = true;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> graph[numCourses];
        vector<bool>visited(numCourses, false), explored(numCourses, false);
        for(auto requisite : prerequisites){
            graph[requisite[0]].push_back(requisite[1]);
        }
        for(int course = 0; course < numCourses; course++){
            if(!visited[course] && isCyclic(course, graph, visited, explored)){
                return false;
            }
        }
        return true;
    }
};
