class Solution {
public:
    bool isPossible(vector<int> nums, int mid, int maxOperations) {
        for(int i=0; i<nums.size(); i++) {
            maxOperations -= ((nums[i]-1)/mid);
        }
        return maxOperations>=0;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int ans=0;
        int start=1, end=*max_element(nums.begin(), nums.end());
        while(start<=end) {
            int mid = start+(end-start)/2;
            if(isPossible(nums, mid, maxOperations)) {
                end = mid-1;
                ans = mid;
            }
            else start = mid+1;
        }
        return ans;
    }
};