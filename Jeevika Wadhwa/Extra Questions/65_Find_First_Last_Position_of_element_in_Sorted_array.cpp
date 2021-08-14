class Solution {
public:
    int find(vector<int>a, int target){
        int low = 0, high = a.size();
        while(low < high){
            int mid = (low + high)/2;
            if(a[mid] < target)
                low = mid + 1;
            else
                high = mid;
        }
        return low;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = find(nums, target);
        if(start == nums.size() || nums[start] != target)
            return {-1, -1};
        return {start, find(nums, target + 1) - 1};
    }
};
