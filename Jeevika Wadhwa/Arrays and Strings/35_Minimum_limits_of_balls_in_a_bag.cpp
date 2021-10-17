class Solution {
public:
    bool isPossible(vector<int>nums, int minballs, int maxOperations){
        for(auto num:nums){
            maxOperations -= (--num/minballs);
        }
        return maxOperations >= 0;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int maximum = INT_MIN;
        for(auto num:nums){
            maximum = max(maximum, num);
        }
        int start = 1, end = maximum;
        while(start < end){
            int mid = (start + end)/2;
            if(isPossible(nums, mid, maxOperations))
                end = mid;
            else
                start = mid+1;
        }
        return end;
    }
};
