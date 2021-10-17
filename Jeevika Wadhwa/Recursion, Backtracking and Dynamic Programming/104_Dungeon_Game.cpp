class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int n = dungeon.size(), m = dungeon[0].size();
        vector<vector<int>>health(n+1, vector<int>(m+1, INT_MAX));
        
        health[n][m-1] = 1;
        health[n-1][m] = 1;
        
        for(int i = n-1; i>=0; i--){
            for(int j = m-1; j>=0; j--){
                int need = min(health[i+1][j], health[i][j+1]) - dungeon[i][j];
                health[i][j] = max(1, need);
            }
        }
        return health[0][0];                                        
    }
};
