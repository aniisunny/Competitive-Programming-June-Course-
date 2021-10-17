class Solution {
public:
   int rob(vector<int>& nums)
  {
    if(nums.size()==0)
        return 0;
    if(nums.size()==1)
        return nums[0];
    
    int p1=0,c1=0;
    for(int i=0;i<nums.size()-1;++i)
    {
        int temp=p1;
        p1=c1;
        c1=max(temp+nums[i],p1);
    }
    
    int p2=0,c2=0;
    for(int i=1;i<nums.size();++i)
    {
        int temp = p2;
        p2=c2;
        c2=max(temp+nums[i],p2);
    }
    
    return max(c1, c2);
  }
};
