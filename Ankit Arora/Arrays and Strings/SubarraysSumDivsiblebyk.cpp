class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
     vector<int>counts(k,0);
        int sum=0;
        for(int x : nums)
        {
            sum = sum + (x%k + k)%k;
            counts[sum%k]++;
        }
        int result = counts[0];
        for(int a : counts)
        {
            result = result + (a*(a-1))/2;
        }
        return result;
    }
};
