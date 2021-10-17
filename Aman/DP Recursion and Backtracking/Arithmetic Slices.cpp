class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3)
            return 0;
        
        int curr=0,res=0;
        if(nums[1]-nums[0]==nums[2]-nums[1])
        {
            curr=1;
            res=1;
        }
        for(int i=3;i<n;i++)
        {
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2])
              curr+=1;
            else
              curr=0;
            res+=curr;
        }
        return res;
    }
};
