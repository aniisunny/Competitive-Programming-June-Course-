class Solution {
public:
vector<int>par; // PARENT 
vector<int>rank;
int find(int x){
    if(par[x] ==x) return x;
    else{
        int a = find(par[x]);
        par[x] = a;
        return a;
    }
}
vector<int> findRedundantConnection(vector<vector<int>>& edges) {
    int n = edges.size();
    par.resize(n+1);
    rank.resize(n+1);
    for(int i=0;i<=n;i++){
        par[i] = i;
        rank[i] = 1;
    }
    
    for(int i=0;i<edges.size();i++){
        int x = edges[i][0];
        int y= edges[i][1];
        
        int lx = find(x);
        int ly = find(y);
        
        if(lx == ly){
            return edges[i];
        }
        else{
            if(rank[lx] > rank[ly]){
                par[ly] = lx;
            }
            else if(rank[lx] < rank[ly]){
                par[lx] = ly;
            }
            else{
                par[lx] = ly;
                rank[ly]+=1;
            }
        }
        
    }
    return {};
    
}
};
