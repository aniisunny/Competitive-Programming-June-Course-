class Solution {
public:
    int mk(int n,vector<int> &memo)
    {     
         if(n<0) return 0;
         if(memo[n]!=-1) return memo[n];
         if(n==0) return 1;
         return memo[n]=mk(n-1,memo)+mk(n-2,memo);
    }
     
    int climbStairs(int n) {
        vector<int> memo(n+1,-1);
        return mk(n,memo);
    }
};