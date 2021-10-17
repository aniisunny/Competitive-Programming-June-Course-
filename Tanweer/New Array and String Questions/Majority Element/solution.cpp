class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        map<int,int> mp;
        for(int i = 0 ; i<nums.size() ; i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]] >= (int((nums.size())/2)+1))
            {
                return nums[i];
            }
        }
        return 0;
    }
};