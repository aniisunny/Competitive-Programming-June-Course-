class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mx=0,arr;
        for(int i=0;i<nums.size();i++)
        {
            if(mx==0)
            {
                arr=nums[i];
                mx++;
                continue;
            }
            else if(nums[i]==arr)
                mx++;
            else
                mx--;
        }
        return arr;
    }
};
