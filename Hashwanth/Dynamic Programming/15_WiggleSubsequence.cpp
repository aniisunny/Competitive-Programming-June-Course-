class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n=nums.size();
        if(n<2) return n;
        int inc[n];
        int dec[n];
        inc[0]=1;
        dec[0]=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1])
            {
                inc[i]=1+dec[i-1];
                dec[i]=dec[i-1];
            }
            else if(nums[i]<nums[i-1])
            {
                dec[i]=1+inc[i-1];
                inc[i]=inc[i-1];
            }
            else
            {
                dec[i]=dec[i-1];
                inc[i]=inc[i-1];
            }
        }
        return max(inc[n-1],dec[n-1]);
    }
};
