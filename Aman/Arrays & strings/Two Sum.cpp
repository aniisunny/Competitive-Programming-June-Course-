class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        vector<int>res;
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(mp.find(tar-nums[i])!=mp.end())
            {
               res.push_back(mp[tar-nums[i]]);
               res.push_back(i);
            }
            mp[nums[i]]=i;
        }
        return res;
    }
};
