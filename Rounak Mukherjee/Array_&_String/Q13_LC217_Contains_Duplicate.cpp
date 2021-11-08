class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        vector<int>v;
        
     sort(nums.begin(),nums.end());
       for(int i=1;i<nums.size();i++){
           if(nums[i]==nums[i-1]){return true;}
       }
        return false;
    }
};
