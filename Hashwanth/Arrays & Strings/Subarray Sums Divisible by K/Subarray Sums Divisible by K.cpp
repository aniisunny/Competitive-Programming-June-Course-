class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int> rc;
        int s=0,c=0,r;
        rc[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            r=s%k;
            if(r<0)
                r=r+k;
            if(rc.find(r)!=rc.end())
            {   c+=rc[r];
                rc[r]++;
            } 
            else
                rc[r]++;
                        
        }
       
        return c;
    }
};
