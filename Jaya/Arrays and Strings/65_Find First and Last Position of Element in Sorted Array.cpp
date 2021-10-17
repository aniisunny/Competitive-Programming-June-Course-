class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v{-1,-1};
        bool valid=true;
        if(nums.size()==0) return v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                if(valid){
                    v[0]=i;
                    v[1]=i;
                    valid=false;
                }
                else{
                    v[1]=i;
                }
            }
           
        }
        return v;
    }
};
