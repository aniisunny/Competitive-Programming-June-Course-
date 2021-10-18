class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-2;) {
            int low=i+1, high=n-1;
            
            while(low<high) {
                int sum = nums[low] + nums[high]+ nums[i];
                if(sum==0) {
                    ans.push_back({nums[i], nums[low], nums[high]});
                    
                    int num = nums[low];
                    low++;
                    while(low<high && num==nums[low]) low++;
                    num = nums[high];
                    high--;
                    while(low<high && num==nums[high]) high--;
                }
                else if(sum<0) {
                    int num = nums[low];
                    low++;
                    while(low<high && num==nums[low]) low++;
                }
                else {
                    int num = nums[high];
                    high--;
                    while(low<high && num==nums[high]) high--;
                }
            }
                int num = nums[i];
                i++;
                while(i<n && num==nums[i]) i++;
        }
        return ans;
    }
};