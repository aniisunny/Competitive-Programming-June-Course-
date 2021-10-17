// { Driver Code Starts
import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0)
        {
            int N = Integer.parseInt(read.readLine());
            String input_line[] = read.readLine().trim().split("\\s+");
            int arr[]= new int[N];
            for(int i = 0; i < N; i++)
                arr[i] = Integer.parseInt(input_line[i]);
            int sum = Integer.parseInt(read.readLine());

            Solution ob = new Solution();
            if(ob.isSubsetSum(N, arr, sum))
            System.out.println(1);
            else
            System.out.println(0);

            
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    
    // public static int helper(int[] arr, int si, int sum,int[][] dp)
    // {
    //     if(sum==0)
    //     return 1;
        
        
    //     if(si<0 || sum<0)
    //     return 0;
        
    //     if(dp[si][sum]!=-1)
    //     return dp[si][sum];
        
        
    //      if(helper(arr,si-1,sum-arr[si],dp)==1 || helper(arr,si-1,sum,dp)==1)
    //      {
    //          dp[si][sum]=1;
    //          return 1;
    //      }
    //      else
    //      {
    //          dp[si][sum]=0;
    //          return 0;
    //      }
    // }

    static Boolean isSubsetSum(int N, int arr[], int sum){
        boolean[][] dp=new boolean[N+1][sum+1];
        for(int i=0;i<=N;i++)
        {
            dp[i][0]=true;
        }
        for(int i=1;i<=sum;i++)
        {
            dp[0][i]=false;
        }
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(j-arr[i-1]>=0)
                {
                    if(dp[i-1][j-arr[i-1]])
                    {
                       dp[i][j]=true; 
                    }
                    else
                    {
                        dp[i][j]=dp[i-1][j];
                    }
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[N][sum];
        
        
        // int[][] dp=new int[N][sum+1];
        // for(int i=0;i<N;i++)
        //   {
        //       Arrays.fill(dp[i],-1);
        //   }
        // if(helper(arr,N-1,sum,dp)==1)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }
        
        // code here
    }
}
