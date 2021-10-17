class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mp;
        int sum=0;
        mp[0]=1; //for sing occurance of k
        int res=0; //final res
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end())
                res+=mp[sum-k];
            mp[sum]++;
        }
        return res;
    }
};
