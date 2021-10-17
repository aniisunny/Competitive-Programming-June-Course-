class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int n = nums.size();
        map<int,int> mp;
        for(int i = 0 ; i<n ; i++)
        {
            if(mp.find(target-nums[i]) != mp.end())
            {
                vector<int> arr;
                arr.push_back(mp[target-nums[i]]);
                arr.push_back(i);
                return arr;
            }
            else
            {
                mp[nums[i]] = i;
            }
        }
        
        vector<int> arr;
        arr.push_back(-1);
        arr.push_back(-1);
        return  arr;
    }
};