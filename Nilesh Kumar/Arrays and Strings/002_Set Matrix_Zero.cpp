class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool row = false, col = false;
        for(int i=0; i<matrix.size(); i++) {
            
            for(int j=0; j<matrix[i].size(); j++) {
                if(matrix[i][j]==0) {
                    if(i==0) col = true;
                    if(j==0) row = true;
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        for(int i=matrix.size()-1; i>0; i--) {
            for(int j=matrix[i].size()-1; j>0; j--) {
                if(matrix[0][j]==0 || matrix[i][0]==0) matrix[i][j]=0;
            }
        }
        if(row) for(int i=0; i<matrix.size(); i++) matrix[i][0] = 0;
        if(col) for(int i=0; i<matrix[0].size(); i++) matrix[0][i] = 0;
    }
};