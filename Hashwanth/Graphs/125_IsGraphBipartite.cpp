class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        queue<int> q;
        vector<int> colors(n,0); //0->wh, 1->b, -1->r
        for(int i=0;i<n;i++)
        {
            if(colors[i]==0)
            {
                colors[i]=1; //bl
                q.push(i);
                while(!q.empty())
                {
                    int p=q.front();
                    q.pop();
                    for(auto x:graph[p])
                    {
                        if(colors[x]==0) 
                        {colors[x]=-1*colors[p];
                         q.push(x);                 
                        }
                        else if(colors[x]==colors[p]) return false;
                    }
                }
                
            }
        }
        return true;
    }
};
