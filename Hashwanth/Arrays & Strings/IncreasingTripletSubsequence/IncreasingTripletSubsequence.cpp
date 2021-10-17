class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first=INT_MAX;
        int second=INT_MAX;
        for(int x:nums)
        {
            if(x<=first)
                
                first=x;
            else if(x<=second)
                second=x;
            else if(x>second)
                return true;
        }
        return false;
    }
};
