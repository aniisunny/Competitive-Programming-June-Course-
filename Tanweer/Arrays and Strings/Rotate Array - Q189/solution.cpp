class Solution 
{
private:
    void helper(vector<int>& nums, int start , int end)
    {
        while(start<end)
        {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
    
public:
    void rotate(vector<int>& nums, int k) 
    {
        if(nums.size() == 0 || nums.size() == 1 || k == 0 )
        {
            return;
        }
        
        while(k>=nums.size())
        {
            k = k - nums.size();
            if(k == 0)
            {
                return;
            }
        }
        
        helper(nums,0,nums.size()-k-1);
        helper(nums,nums.size()-k,nums.size()-1);
        helper(nums,0,nums.size()-1);
        
    }
};