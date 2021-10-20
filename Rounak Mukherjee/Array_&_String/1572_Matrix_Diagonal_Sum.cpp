class Solution {
public:
 
    int diagonalSum(vector<vector<int>>& mat) {
        int size = mat.size();

        int sum1 = 0;
        int sum2 = 0;

        for(int i = 0; i < size; i++) {
            sum1 += mat[i][i];
            sum2 += mat[i][size - i - 1];

        }
        
        if(size % 2 == 1) {
            return sum1 + sum2 - mat[size/2][size/2];
        }
        
        return sum1 + sum2;
    }

};
