class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>maxHeap(nums.begin(), nums.end());
        while(--k)
            maxHeap.pop();
        return maxHeap.top();
    }
};
