class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        map<int,int> mp1;
        for(auto x:nums1)
            mp1[x]++;
        for(auto x:nums2)
        {
            if(mp1.find(x)!=mp1.end() && mp1[x]>0)
            {
                mp1[x]--;
                res.push_back(x);
            }
                
        }
        return res;
    }
};
