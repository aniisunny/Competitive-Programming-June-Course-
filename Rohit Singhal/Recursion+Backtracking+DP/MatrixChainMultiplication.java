class Solution{
    
   
    static int helper(int[] arr, int i,int j,int[][] dp)
    {
        if(i>=j)
        return 0;
        
        if(dp[i][j]!=-1)
        return dp[i][j];
        
      int ans=Integer.MAX_VALUE;
        for(int k=i;k<=j-1;k++)
        {
           int tempAns= helper(arr,i,k,dp)+ helper(arr,k+1,j,dp)+ arr[i-1]*arr[k]*arr[j];
           ans=Math.min(ans,tempAns);
        }
        dp[i][j]=ans;
        return ans;
    }
    
    
    static int matrixMultiplication(int N, int arr[])
    {
        int[][] dp=new int[N][N];
        for(int i=0;i<N;i++)
        {
            Arrays.fill(dp[i],-1);
        }
        return helper(arr,1,N-1,dp);
        // code here
    }
}
