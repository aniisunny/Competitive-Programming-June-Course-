class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        
        for(int i=0;i<r;i++){
            for(int j=i+1;j<c;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        
        for(int i=0;i<r;i++){
          int low=0, high=c-1;
            while(low<=high){
                swap(mat[i][low],mat[i][high]);
                low++;
                high--;
            }
        }
        
    }
};
