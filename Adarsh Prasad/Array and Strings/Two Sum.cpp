class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(target-nums[i]) != mp.end())
            {
               
                vector<int> v;
                v.push_back(mp[target-nums[i]]);
                v.push_back(i);
                return v;    
            }
             else
             {
                 mp[nums[i]]=i;
             }
            }
        vector<int> v;
        v.push_back(-1);
        v.push_back(-1);
        return v;
}
    };
