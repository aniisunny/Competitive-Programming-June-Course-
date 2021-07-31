class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size()+1;
        vector<int> s;
        int parents[n];
        for(int i=0;i<n;i++)
            parents[i]=-1;
        for(auto edge:edges)
        {
             int s1=find(edge[0],parents);                                           
            int s2=find(edge[1],parents);
            if(isCycle(s1,s2,parents))
                return edge;
             union_set(s1,s2,parents);
            
        }
        return s;
    }
    int find(int n,int parents[])
    {
        if(parents[n]==-1)
            return n;
        return find(parents[n],parents);
    }
    void union_set(int a, int b, int parents[])
    {
        int s1=find(a,parents);
        int s2=find(b,parents);
        if(s1!=s2)
            parents[s1]=s2;
    }
    bool isCycle(int s1,int s2, int parents[])
        {
        return s1==s2;
        }
    
};
