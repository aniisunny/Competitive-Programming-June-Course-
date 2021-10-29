class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int sum=0;
        for(int i=arr.size()-1;i>=1;i--){
            if(arr[i]-arr[i-1]>0){
                sum+=arr[i]-arr[i-1];
            }
        }
        return sum;
    }
};