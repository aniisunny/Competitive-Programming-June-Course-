class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size() <= 1)return 0;
        sort(begin(intervals), end(intervals), [](vector<int>&a, vector<int>&b){
            return a[1] < b[1];
        });
        int previndex = 0;
        int c = 0;
        for(int i = 1; i<intervals.size(); i++){
            if(intervals[previndex][1] > intervals[i][0])c++;
            else previndex = i;
        }
        return c;
    }
};
