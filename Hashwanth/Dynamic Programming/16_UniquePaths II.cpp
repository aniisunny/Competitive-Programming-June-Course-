class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        //base case - if 1st element is an obstruction
        if(obstacleGrid[0][0]==1)
            return 0;
        int m=obstacleGrid.size();
         int n=obstacleGrid[0].size();
      int arr[m][n];
        //---- initialize with 0
       for(int i=1;i<m;i++)
            arr[i][0]=0;  
        for(int j=1;j<n;j++) 
            arr[0][j]=0;
        
        //------
        for(int i=0;i<m;i++)   //row
        {
             if(obstacleGrid[i][0]==1)
                 break;
            arr[i][0]=1;
        } 
       for(int i=0;i<n;i++)   //col
        {
             if(obstacleGrid[0][i]==1)
                 break;
            arr[0][i]=1;
        } 
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {   
                if(obstacleGrid[i][j]==1)
                    arr[i][j]=0;
                else
                arr[i][j]=arr[i-1][j]+arr[i][j-1];
            }
        }
        return arr[m-1][n-1];
        
    }
};
