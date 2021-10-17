class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
        vector<vector<int>>v(n, vector<int>(3));
        for(int i = 0; i<n; i++){
            v[i] = {startTime[i], endTime[i], profit[i]};
        }
        sort(v.begin(), v.end(), [&](auto &a, auto &b){return a[1] <= b[1];});
        int dp[n];
        dp[0] = v[0][2]; // profit
        for(int i = 1; i<n; i++){
            int last = -1, include = v[i][2];
            int start = 0, end = i-1;
            while(start <= end){
                int mid = start + (end - start)/2;
                if(v[mid][1] <= v[i][0]){
                    last = mid;
                    start = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
            if(last != -1)
                include += dp[last];
            dp[i] = max(dp[i-1], include);
        }
        return dp[n-1];
    }
};
