class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(begin(intervals), end(intervals));
        vector<vector<int>>v;
        for(auto interval : intervals){
            if(v.empty() || v.back()[1] < interval[0])
                v.push_back(interval);
            else
                v.back()[1] = max(v.back()[1], interval[1]);
        }
        return v;
    }
};
