class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = size(mat), sum = 0;
        for(int i =0;i<mat.size();i++)
            for(int j =0; j<mat.size();j++)
                if(i==j||(i+j)==n-1)
                    sum=sum+mat[i][j];
        return sum;
    }
};