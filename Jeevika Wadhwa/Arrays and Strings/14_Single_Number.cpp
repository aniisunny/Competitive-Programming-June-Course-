class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int ans = 0;
        for(int i=0;i<nums.size();i++)
            ans ^= nums[i];
        return ans;
    }
};
