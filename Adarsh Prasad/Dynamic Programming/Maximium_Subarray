class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int max_till_now = 0;
        int max_so_far = INT_MIN;
        for(auto n : a){
            max_till_now += n;
            if(max_so_far < max_till_now)
                max_so_far = max_till_now;
            if(max_till_now < 0)
                max_till_now = 0;
        }
        return max_so_far;
    }
};
