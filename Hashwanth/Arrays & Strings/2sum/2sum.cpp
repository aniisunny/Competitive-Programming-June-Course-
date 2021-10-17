class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int,int> mp;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
            {
                
                v.push_back(mp[target-nums[i]]);
                v.push_back(i);
                return v;
            }
          
                mp[nums[i]]=i;
        }
        return v;
    }
};
