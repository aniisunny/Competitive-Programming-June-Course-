class Solution {
public:
    int countSquares(vector<vector<int>>& a) {
        int n = a.size(), m = a[0].size();
        int ans = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(a[i][j] == 1){
                    if(i == 0 || j == 0){
                        ans += 1;
                    }
                    else{
                        a[i][j] += min(a[i-1][j-1], min(a[i][j-1], a[i-1][j]));
                        ans += a[i][j];
                    }     
                }
            }
        }
        return ans;
    }
};
