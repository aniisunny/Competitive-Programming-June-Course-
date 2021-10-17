class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> row;
        set<int> col;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
          for( auto a : row) {
           fill(matrix[a].begin(), matrix[a].end(), 0);}
        
        for( auto cols : col) {
            for( auto i = 0; i < matrix.size(); i++ ){
                fill(matrix[i].begin() + cols, matrix[i].begin() + cols + 1, 0);
            }
        }
                
    }
                
        
    
};
