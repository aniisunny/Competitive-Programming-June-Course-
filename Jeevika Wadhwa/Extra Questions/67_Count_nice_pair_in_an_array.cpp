class Solution {
public:
    int rev(int n){
        if(n < 10)return n;
        int ans = 0;
        while(n > 0){
            ans = ans * 10 + n % 10;
            n /= 10;
        }
        return ans;
    }
    int countNicePairs(vector<int>& a) {
        unordered_map<int, long>m;
        for(int i = 0; i<a.size(); i++)
            m[a[i]-rev(a[i])]++;
        long ans = 0;
        for(auto i : m){
            ans += (i.second * (i.second - 1))/2;
        }
        return ans % (int)(1e9+7);
    }
};
