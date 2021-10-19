class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int maxx=0;
       int N1=INT_MAX,N2=INT_MAX;
        for(int i=0;i<nums.size();i++){
           if(nums[i]<=N1){
               N1=nums[i];
           }
            else if(nums[i]<=N2){
              N2=nums[i];
            }
            else return true;
        }
        return false;    
    }
};