class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {       
        vector<int> res;
        vector<int> empty_res;
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
            res.push_back(curr);
            q.pop();
            for(auto x:mp[curr])
            {
                indegree[x]--;
                noEdgesRemoved++;
                if(indegree[x]==0)
                    q.push(x);
            }
        }
        if (prerequisites.size()==noEdgesRemoved)
            { reverse(res.begin(),res.end());   //IMPORTANT
            return res;}
        return empty_res;
        
    }
    
};
