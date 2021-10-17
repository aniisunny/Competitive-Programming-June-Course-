// https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1

// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
class GfG
{
    public static void main(String args[])
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
                {
                    int n = sc.nextInt();
                    int A[] = new int[n];
                    for(int i = 0;i<n;i++)
                        A[i] = sc.nextInt();
                    Solution ob = new Solution();
                    System.out.println(ob.minDifference(A,n));
                }
        }
}    // } Driver Code Ends


//User function Template for Java

class Solution
{

	public int minDifference(int arr[], int n) 
	{ 
	    int sum=0;
	    for(int i:arr)
	    {
	        sum+=i;
	    }
	    int mid=sum/2;
	    boolean[][] dp=new boolean[n+1][mid+1];
	    for(int i=0;i<=n;i++)
	    {
	        dp[i][0]=true;
	    }
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=mid;j++)
	        {
	            if(j-arr[i-1]>=0 && dp[i-1][j-arr[i-1]])
	            {
	                dp[i][j]=true;
	            }
	            else
	            {
	                dp[i][j]=dp[i-1][j];
	            }
	        }
	    }
	    ArrayList<Integer> list=new ArrayList<>();
	    list.add(0);
	    for(int i=1;i<=mid;i++)
	    {
	        if(dp[n][i])
	        {
	            list.add(i);
	        }
	    }
	    int ans=Integer.MAX_VALUE;
	    for(int i:list)
	    {
	        ans=Math.min(ans,(sum-2*i));
	    }
	    return ans;
	    // Your code goes here
	} 
}
