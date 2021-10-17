class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int>ans;
        int n = nums.size();
        k = n-k;
        for(auto i : nums){
            while(ans.size() && ans.back() > i && k){
                ans.pop_back();
                k--;
            }
            ans.push_back(i);
        }
        while(k--)
            ans.pop_back();
        return ans;
    }
};
