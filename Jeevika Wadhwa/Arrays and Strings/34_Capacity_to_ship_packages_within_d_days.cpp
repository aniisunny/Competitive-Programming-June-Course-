class Solution {
public:
    bool isPossible(vector<int>weights, int capacity, int d){
        int days = 1, weightPerDay = 0;
        for(auto weight:weights){
            if(weight > capacity)return 0;
            else if(weight + weightPerDay <= capacity)weightPerDay += weight;
            else{
                days++;
                weightPerDay = weight;
            }
        }
        return days <= d;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        for(auto weight:weights)
            sum += weight;
        int start = 0, end = sum;
        while(start < end){
            int capacity = (start + end)/2;
            if(isPossible(weights, capacity, days))
                end = capacity;
            else start = capacity+1;
        }
        return end;
    }
};
