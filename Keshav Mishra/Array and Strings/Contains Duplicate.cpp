class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> map;
        
        for(int i=0; i<nums.size(); i++){
            if(map.find(nums[i])!=map.end())
                return true;
            map.insert(nums[i]);
        }
        return false;
    }
};