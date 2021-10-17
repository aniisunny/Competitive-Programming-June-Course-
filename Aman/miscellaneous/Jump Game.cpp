class Solution {
public:
    bool canJump(vector<int>& nums) {
       int n=nums.size(),maxm=0;
       for(int i=0;i<n;i++)
       {
           if(i+nums[i]>maxm)
            maxm=i+nums[i];
           if(maxm==i)
            break;
       }
       return maxm>=n-1;
    }
};
