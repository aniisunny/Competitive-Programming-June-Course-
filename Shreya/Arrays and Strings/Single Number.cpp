class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0; i<nums.size(); i++)
        {
            if(mp[nums[i]]==0)
            {
                mp[nums[i]]=1;
            }
            else
            {
                mp[nums[i]]+=1;
            }
        }
        for (auto &el :mp)
        {
            if (el.second==1)
            {
                return el.first;
            }
        }
        return -1;
    }
};