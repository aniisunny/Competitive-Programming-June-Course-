class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& a) {
        int ans = INT_MAX;
        for(int i = 1; i<a.size(); i++){
            for(int j = 0; j<a[0].size(); j++){
                if(j == 0){
                    a[i][j] += min(a[i-1][j], a[i-1][j+1]);
                }
                else if(j == a[0].size()-1){
                    a[i][j] += min(a[i-1][j-1], a[i-1][j]);
                }
                else{
                    a[i][j] += min(a[i-1][j-1], min(a[i-1][j], a[i-1][j+1]));
                }
            }
        }
        for(int j = 0; j<a[0].size(); j++)
            ans = min(ans, a[a.size()-1][j]);
        return ans;
    }
};
