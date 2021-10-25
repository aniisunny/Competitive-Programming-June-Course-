class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n=matrix[0].size();
        vector<int> ans;
        int t=0, b=m-1, l=0, r=n-1;
        int d=0;
        while(l<=r && t<=b) {
            if(d==0) {
                for(int i=l; i<=r; i++) {
                    ans.push_back(matrix[t][i]);
                }
                t++;
            }
            if(d==1) {
                for(int i=t; i<=b; i++)
                    ans.push_back(matrix[i][r]);
                r--;
            }
            if(d==2) {
                for(int i=r; i>=l; i--) 
                    ans.push_back(matrix[b][i]);
                b--;
            }
            if(d==3) {
                for(int i=b; i>=t; i--)
                    ans.push_back(matrix[i][l]);
                l++;
            }
            d++;
            d=d%4;
        }
        return ans;
    }
};