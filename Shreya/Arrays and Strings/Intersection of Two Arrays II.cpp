class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        vector<int>vec;
        for(int i=0;i<nums1.size();i++)
        {
            if(mp1[nums1[i]]==0)
            {
                mp1[nums1[i]]=1;
            }
            else
            {
                mp1[nums1[i]]+=1;
            }
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(mp2[nums2[i]]==0)
            {
                mp2[nums2[i]]=1;
            }
            else
            {
                mp2[nums2[i]]+=1;
            }
        }
        for(int i=0;i<nums1.size();i++)
        {
            if(mp1[nums1[i]]!=0 && mp2[nums1[i]]!=0)
            {
                vec.push_back(nums1[i]);
                mp1[nums1[i]]-=1;
                mp2[nums1[i]]-=1;
            }
        }
      return vec;  
    }
};