class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n, vector<int>(n, 0));
        int val = 1;
        int T = 0;
        int B = n - 1;
        int L = 0;
        int R = n - 1;

        while(L <= R && T <= B)
        {
         for(int i = L; i <= R; i++ )
         {
             ans[T][i] = val;
             val++;
         }
         T++;

         for(int i = T; i <= B; i++ )
         {
             ans[i][R] = val;
             val++;
         }
         R--;

         for(int i = R; i >= L; i-- )
         {
             ans[B][i] = val;
             val++;
         }
         B--;

         for(int i = B; i >= T; i-- )
         {
             ans[i][L] = val;
             val++;
         }
         L++;
        }
        return ans;
    }
};