class Solution {
    
    public void dfs(int [][] A, int j)
    {
        if(A[j][j] == 0)
        {
            return;
        }
        for(int i = 0; i < A.length;i++)
        {
            if(A[i][j] == 1)
            {
                A[i][j] = 0;
                dfs(A,i);
            }
            
        }
    }
    public int findCircleNum(int[][] A) {
       
        int ans = 0;
        
        for(int i = 0; i < A.length;i++)
        {
            if(A[i][i] == 1)
            {
                ans++;
                dfs(A,i);
            }
        }
        return ans;
        
    }
}
