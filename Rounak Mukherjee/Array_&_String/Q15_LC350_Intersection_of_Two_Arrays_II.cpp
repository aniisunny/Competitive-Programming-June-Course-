class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>ans;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]==nums2[j]){ans.push_back(nums1[i]); i++; j++;}
            
            else if(nums1[i]>nums2[j]){
                j++;
            }
            
             else if(nums1[i]<nums2[j]){
                i++;
            }
        }
        return ans;
    }
};
