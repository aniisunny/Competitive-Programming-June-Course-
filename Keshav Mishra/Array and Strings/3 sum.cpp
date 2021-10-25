class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
	vector<vector<int>> result;
	if (nums.empty()) {
		return result;
	}

	int n = nums.size();
	sort(nums.begin(), nums.end());
	for (int i = 0; i < n; i++) {
		
		if (i > 0 and nums[i] == nums[i-1]) continue;

		int left = i+1, right = n - 1;
		while (left < right) {
			int sum = nums[i] + nums[left] + nums[right];
			if (sum < 0) {
				++left;
			} 
            
            else if (sum > 0) {
				--right;
			} 
            else {
				result.push_back({nums[i], nums[left], nums[right]});
				int last_left = nums[left], last_right = nums[right];
                
				while (left < right && nums[left] == last_left) ++left;
				while (left < right && nums[right] == last_right) --right;
			}
		}

	}
	return result;
        
        
        
        
        
}
};