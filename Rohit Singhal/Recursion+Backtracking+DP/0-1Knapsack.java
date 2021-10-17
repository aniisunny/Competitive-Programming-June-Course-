// { Driver Code Starts
import java.util.*;
import java.io.*;
import java.lang.*;

class gfg
{
    public static void main(String args[])throws IOException
    {
        //reading input using BufferedReader class
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        
        //reading total testcases
        int t = Integer.parseInt(read.readLine());
        
        while(t-- > 0)
        {
            //reading number of elements and weight
            int n = Integer.parseInt(read.readLine());
            int w = Integer.parseInt(read.readLine());
            
            int val[] = new int[n];
            int wt[] = new int[n];
            
            String st[] = read.readLine().trim().split("\\s+");
            
            //inserting the values
            for(int i = 0; i < n; i++)
              val[i] = Integer.parseInt(st[i]);
             
            String s[] = read.readLine().trim().split("\\s+"); 
            
            //inserting the weigths
            for(int i = 0; i < n; i++)
              wt[i] = Integer.parseInt(s[i]);
              
            //calling method knapSack() of class Knapsack
            System.out.println(new Solution().knapSack(w, wt, val, n));
        }
    }
}



// } Driver Code Ends




class Solution 
{ 
    
    // public static int helper(int wt[], int val[], int w, int[][] dp,int si)
    // {
    //     if(si>=wt.length || w==0)
    //     {
    //         return 0;
    //     }
        
        
    //     if(dp[w][si]!=-1)
    //     {
    //       return dp[w][si];
    //     }
        
    //     if(w-wt[si]<0)
    //     {
    //         dp[w][si]=helper(wt,val,w,dp,si+1);
    //         return dp[w][si];
    //     }
    //     else
    //     {
    //         dp[w][si]= Math.max(val[si]+helper(wt,val,w-wt[si],dp,si+1),helper(wt,val,w,dp,si+1));
    //         return dp[w][si];
    //     }
    // }
    //Function to return max value that can be put in knapsack of capacity W.
    static int knapSack(int W, int wt[], int val[], int n) 
    { 
         int[][] dp=new int[W+1][n+1];
         for(int i=0;i<=W;i++)
         {
             dp[i][0]=0;
         }
         for(int i=0;i<=n;i++)
         {
             dp[0][i]=0;
         }
         for(int i=1;i<=W;i++)
         {
             for(int j=1;j<=n;j++)
             {
                 if(wt[j-1]>i)
                 {
                     dp[i][j]=dp[i][j-1];
                 }
                 else
                 {
                     dp[i][j]=Math.max(val[j-1]+dp[i-wt[j-1]][j-1],dp[i][j-1]);
                 }
             }
         }
         return dp[W][n];
        //  for(int i=0;i<=W;i++)
        //  {
        //      Arrays.fill(dp[i],-1);
        //  }
        //  return helper(wt,val,W,dp,0);
         
         // your code here 
    } 
}


