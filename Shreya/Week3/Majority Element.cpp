class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        if(nums.size()==1)
        {
            return nums[0];
        }
        for(int i=0;i<nums.size();i++)
        {
            if (mp[nums[i]]==0)
            {
                mp[nums[i]]=1;
            }
            else
            {
                mp[nums[i]]+=1;
            }
            if(mp[nums[i]]>nums.size()/2)
            {
                return nums[i];
            }        
        }
        return 0;
    }
};