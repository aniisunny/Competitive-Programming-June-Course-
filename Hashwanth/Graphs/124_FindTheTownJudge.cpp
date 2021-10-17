class Solution {
public: //indegree outdegree concept
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> indegree(n+1,0);
        vector<int> outdegree(n+1,0);
        for(auto t:trust)
        {
            outdegree[t[0]]++;
            indegree[t[1]]++;
        }
        for(int i=1;i<n+1;i++)
        {
            if(indegree[i]==n-1 && outdegree[i]==0)
                return i;
        }
        return -1;
    }
};
