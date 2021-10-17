class Solution {
public:
    int uniquePaths(int m, int n) {
        int d[m][n];
        for(int i=0;i<m;i++)
         d[i][0]=1;
        for(int i=0;i<n;i++)
         d[0][i]=1;
        for(int i=1;i<m;i++)
         for(int j=1;j<n;j++)
          d[i][j]=d[i-1][j]+d[i][j-1];
        return d[m-1][n-1];  
    }
};
 
