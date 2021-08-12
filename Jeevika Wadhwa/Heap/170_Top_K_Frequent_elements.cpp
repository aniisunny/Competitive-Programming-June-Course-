class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(k == nums.size())
            return nums;
        unordered_map<int,int>m;
        for(auto num : nums)
            m[num]++;
        auto comp = [&](int n1, int n2){
            return m[n2] > m[n1];
        };
        priority_queue<int, vector<int>, decltype(comp)>maxHeap(comp);
        for(auto i : m)
            maxHeap.push(i.first);
        vector<int>ans;
        while(k--){
            ans.push_back(maxHeap.top());
            maxHeap.pop();
        }
        return ans;
    }
};
