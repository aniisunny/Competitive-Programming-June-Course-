class Solution
{
public:
    int lengthOfLIS(vector<int>& nums) {
        
        vector<int>vec(nums.size(),1);
        int maxm = 1;
        for(int i=1; i<nums.size(); i++)
        {
           for(int j=0; j<i; j++) 
           {
               if(nums[j]<nums[i])
               {
                   vec[i] = max(vec[i],vec[j]+1);
               }
               maxm = max(vec[i],maxm);
           }
        }
        return maxm;
    }
};
