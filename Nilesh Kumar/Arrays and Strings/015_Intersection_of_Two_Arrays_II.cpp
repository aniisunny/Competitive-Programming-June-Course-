// Two pass solution
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size()<nums1.size()) return intersect(nums2, nums1);
        unordered_map<int, int> mp;
        for(int i=0; i<nums1.size(); i++) {
            mp[nums1[i]]++;
        }
        vector<int> ans;
        for(int i=0; i<nums2.size(); i++) {
            if(mp.find(nums2[i])!=mp.end() && mp[nums2[i]]!=0) {
                ans.push_back(nums2[i]);
                mp[nums2[i]]--;
            }
        }
        return ans;
    }
};

// Sorting method

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i=0, j=0;
        vector<int> ans;
        while(i<nums1.size() && j<nums2.size()) {
            if(nums1[i]==nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]) i++;
            else j++;
        }
        return ans;
    }
};