class Solution {
public:
    int jump(vector<int>& nums) 
    {
        if(nums.size()==1)
        {
            return 0;
        }
        int csi = 0, mgi = nums[0], count = 1;
        while(mgi<nums.size()-1)
        {
            int temp = -1;
            for(int i = csi+1 ; i<=mgi; i++)
            {
                temp = max(temp, i + nums[i]);
            }
            csi = mgi;
            mgi = temp;
            count++;
        }
        return count;
        
    }
};