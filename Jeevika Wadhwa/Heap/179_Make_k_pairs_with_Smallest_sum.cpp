class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int, pair<int, int>>>maxheap;
        for(int i = 0; i<size(nums1); i++){
            for(int j = 0; j<size(nums2); j++){
                int sum = nums1[i] + nums2[j];
                if(size(maxheap) < k)maxheap.push({sum, {nums1[i], nums2[j]}});
                else if(sum < maxheap.top().first){
                    maxheap.pop();
                    maxheap.push({sum, {nums1[i], nums2[j]}});
                }
                else
                    break;
            }
        }
        vector<vector<int>>ans;
        while(!maxheap.empty()){
            ans.push_back({maxheap.top().second.first, maxheap.top().second.second});
            maxheap.pop();
        }
        return ans;
    }
};
