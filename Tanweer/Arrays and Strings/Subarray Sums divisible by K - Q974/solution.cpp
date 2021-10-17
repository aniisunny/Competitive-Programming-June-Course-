class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k)
    {
        vector<int> vec(k,0);
        vec[0] = 1;
        int sum = 0, rem , counter = 0;
        for(int i = 0 ; i<nums.size() ; i++)
        {
            sum += nums[i];
            rem = sum%k;
            if(rem<0)
            {
                rem += k;
            }
            counter += vec[rem];
            vec[rem]++;
        }
        return counter;
    }
};