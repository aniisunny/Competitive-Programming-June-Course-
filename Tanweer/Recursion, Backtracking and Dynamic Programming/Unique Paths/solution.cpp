class Solution {
public:
    int uniquePaths(int m, int n)
    {
        vector<int> vec(n,1);
        for(int i = 1 ; i<=m-1 ; i++)
        {
            for (int j = 1 ; j<=n-1 ; j++)
            {
                vec[j] = vec[j] + vec[j-1];
            }
        }
     
    return vec[n-1];
    }
};