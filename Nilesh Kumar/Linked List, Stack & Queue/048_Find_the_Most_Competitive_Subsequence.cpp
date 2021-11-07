class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        int x= nums.size()-k;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++) {
            while(ans.size()>0 && x>0 && nums[i]<ans[ans.size()-1]) {
                ans.pop_back();
                x--;
            }
            ans.push_back(nums[i]);
        }
        while(ans.size()!=0 && x>0) {
            ans.pop_back();
            x--;
        }
        return ans;
    }
};