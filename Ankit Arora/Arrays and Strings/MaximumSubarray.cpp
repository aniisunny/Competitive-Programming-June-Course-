class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN , sum = 0;
        for(int i=0 ; i<nums.size() ; i++)
        {
            sum = sum + nums[i];
            if(sum>ans) ans = sum;
            if(sum<0) sum = 0;
        }
        return ans;

    }
};
