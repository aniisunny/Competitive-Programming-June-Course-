class Solution {
public:
    bool isPossible(vector<int> &weights, int minCap, int days) {
        int tot_wt = 0, mydays=1;
        for(int i=0; i<weights.size() && days!=-1; i++) {
            tot_wt+=weights[i];
            if(tot_wt>minCap) {
                mydays++;
                if(mydays>days) return false;
                tot_wt = weights[i];
            }
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0, max_wt = INT_MIN;
        for(int i=0; i<weights.size(); i++) {
            sum+=weights[i];
            max_wt = max(max_wt, weights[i]);
        }
        int ans = 0;
        int start = max_wt, end = sum;
        while(start<=end) {
            int mid = start+(end-start)/2;
            if(isPossible(weights, mid, days)) {
                end = mid-1;
                ans = mid;
            }
            else start = mid+1;
        }
        return ans;
    }
};