class Solution {
public:
    int subarraysDivByK(vector<int>& a, int k) {
        int count[k];
        for(int i=0;i<k;i++)count[i]=0;
        count[0]=1;
        int sum = 0, ans = 0;
        for(int i=0;i<a.size();i++){
            sum = (sum + a[i])% k;
            if(sum < 0)sum += k;
            ans += count[sum];
            count[sum]++;
        }
        return ans;
    }
};
