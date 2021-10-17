class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int tar) {
        int n=nums.size();
        int s=0,e=n-1;
        int a=-1,b=-1;
        while(s<=e)
        {
            int m=s+(e-s)/2;
            if(nums[m]==tar)
            {
                a=m;
                e=m-1;
            }
            
            else if(nums[m]>tar)
                e=m-1;
            else
                s=m+1;
        }
        
        s=0,e=n-1;
        while(s<=e)
        {
            int m=s+(e-s)/2;
            if(nums[m]==tar)
            {
                b=m;
                s=m+1;
            }
          
            else if(nums[m]>tar)
             e=m-1;
            else
             s=m+1;
            
        }
        vector<int>v;
        v.push_back(a);
        v.push_back(b);
        return v;
    }
};
