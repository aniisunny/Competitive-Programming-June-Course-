class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        if(n<=1)
         return 0;
        unordered_map<int,int>mp;
        int c;
        if(nums[0]==1)
            c=1;
        else
            c=-1;
        mp[0]=-1;
        mp[c]=0;
        int mx=0;
        for(int i=1;i<n;i++)
        {
           if(nums[i]==1)
               c++;
           else if(nums[i]==0)
               c--;
           if(mp.find(c)!=mp.end())
                mx=max(mx,i-mp[c]);
           else
                mp[c]=i;
        }
        return mx;
    }
};
