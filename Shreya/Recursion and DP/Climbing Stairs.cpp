class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
        {
            return 1;
        }
        vector<int>vec={};
        vec.push_back(1);
        vec.push_back(1);
        for(int i=2; i<=n; i++)
        {
            vec.push_back(vec[i-1]+vec[i-2]);
        }
        return vec[n];
    }
};