class Solution {
public:
    int findGCD(vector<int>& nums) {
        int m = INT_MIN,n = INT_MAX;
        for(int i : nums){
            m = max(i,m);
            n = min(i,n);
        }
        return __gcd(m,n);
    }
};