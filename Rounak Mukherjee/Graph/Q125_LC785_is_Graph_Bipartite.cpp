 class Solution {
public:
     
    bool dfs(vector<vector<int>>& graph, vector<int>v,int i){
        for(auto it:graph[i]){   
           
            
            if(v[it]==-1){
               v[it]=1-v[i];
               if(!dfs(graph,v,it)){return false; }
           }  
            else if(v[it]==v[i]){return false;}
        }
        return true;
    }
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();  
        vector<int>v(n,-1); 
        
        for(int i=0;i<n;i++){  
            
            if(v[i]==-1){
                v[i]==0;    
                if(dfs(graph,v,i)==false){
                    return false;
                }
            }
        }
        return true;
    }
};
