class Solution {
public:
    int findParent(vector<int> parent, int root){
        if(parent[root] == root)
            return root;
        else
            return findParent(parent, parent[root]);
    }
    bool shouldRemove(vector<int>& parent, int u, int v){
        int root1 = findParent(parent, u);
        int root2 = findParent(parent, v);
        parent[root2] = root1;
        return root1 == root2;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int>parent(n+1);
        for(int i = 1; i<=n; i++)
            parent[i] = i;
        for(auto edge : edges){
            if(shouldRemove(parent, edge[0], edge[1])){
                return edge;
            }
        }
        return {};
    }
};
