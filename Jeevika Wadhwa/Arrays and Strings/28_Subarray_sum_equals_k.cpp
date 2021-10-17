class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        map<int,int>m;
        int sum = 0, count = 0;
        for(int i=0;i<a.size();i++){
            sum += a[i];
            if(sum == k)count++;
            if(m.find(sum-k) != m.end())
                count += m[sum-k];
            m[sum]++;
        }
        return count;
    }
};
