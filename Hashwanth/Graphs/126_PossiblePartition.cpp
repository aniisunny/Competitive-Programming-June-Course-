class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>> adjlist(n+1);
        //just make an adj list and check for isBipartite
        for(auto dislike:dislikes)
        {
            adjlist[dislike[0]].push_back(dislike[1]);
            adjlist[dislike[1]].push_back(dislike[0]);
        }
        return isBipartite(adjlist);
    }
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
