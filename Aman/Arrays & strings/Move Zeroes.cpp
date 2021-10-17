class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0,fl=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0 && fl==0)
            {
                fl=1;
                j=i;
            }
            else if(nums[i]!=0 && fl==1)
            {
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};
