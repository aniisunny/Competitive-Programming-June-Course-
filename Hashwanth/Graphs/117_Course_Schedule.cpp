class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int indegree[numCourses];
        int noEdgesRemoved=0;
        for(int i=0;i<numCourses;i++)
            indegree[i]=0;
        map<int,vector<int>> mp; //graph
        //make graph
        for(auto pre:prerequisites)
        {
            mp[pre[0]].push_back(pre[1]);
            indegree[pre[1]]++;
        }
        queue<int> q; //edge with indegree  0
        for(int i=0;i<numCourses;i++)
        {
                if(indegree[i]==0)
                    q.push(i);
        }
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            for(auto x:mp[curr])
            {
                indegree[x]--;
                noEdgesRemoved++;
                if(indegree[x]==0)
                    q.push(x);
            }
        }
        return prerequisites.size()==noEdgesRemoved;
        
    }
};
