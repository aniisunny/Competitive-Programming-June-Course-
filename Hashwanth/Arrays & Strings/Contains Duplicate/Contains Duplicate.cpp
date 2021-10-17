class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(auto x:nums)
        {
            if(mp.find(x)!=mp.end())
                return true;
            mp[x]++;
        }
        return false;
    }
    /* or  //using set
     
    class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> n;
        for(int i=0;i<nums.size();i++)
            n.insert(nums[i]);
        // if(n.size()==nums.size())
        //     return 0;
        // return 1;
        return n.size()!=nums.size();
    }

};
    */
};
