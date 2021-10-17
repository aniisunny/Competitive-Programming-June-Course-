class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& a, int k) {
        int ans = 0, product = 1;
        for(int i = 0, j = 0; i<a.size(); i++){
            product *= a[i];
            while(j <= i && product >= k)
                product /= a[j++];
            ans += i-j+1;
        }
        return ans;
    }
};
