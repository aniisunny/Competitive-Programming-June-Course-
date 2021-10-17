class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int last=0,curr=0;
    while(curr<nums.size()){
        if(nums[curr]!=0){
            swap(nums[last],nums[curr]);
            last++;
        }
        curr++;
    }


        
    }
};
