class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m=matrix.size(),n=matrix[0].size();
        int left=0,right=n-1,top=0,down=m-1;
        
        int dimension=0;
        while(top<=down && left<=right){
            
            if(dimension==0){
                for(int i=left;i<=right;i++){
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }
            else if(dimension==1){
                for(int i=top;i<=down;i++){
                    ans.push_back(matrix[i][right]);
                }
                right--;
            }
            else if(dimension==2){
                for(int i=right;i>=left;i--){
                    ans.push_back(matrix[down][i]);
                }
                down--;
            }
            else if(dimension==3){
                for(int i=down;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            
            dimension=(dimension+1)%4;
        }
        return ans;
    }
};