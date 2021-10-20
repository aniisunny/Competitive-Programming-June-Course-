class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
       
          
      
         int  r= mat.size(), c= mat[0].size();
        int cc=1;//check col only
      for(int i=0;i<r;i++){
        if(mat[i][0]==0){cc=0;}
         for(int j=1;j<c;j++){
            if(mat[i][j]==0){
                mat[0][j]=0;mat[i][0]=0;
            }
         }
      }
       for(int i=r-1;i>=0;i--){
           for(int j=c-1;j>=1;j--){
             if(mat[0][j]==0||mat[i][0]==0){
               mat[i][j]=0;
             }
                    
           }
             if(cc==0){mat[i][0]=0;}      
          }        

    }
};
