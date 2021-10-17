class Solution {
public:
    int majorityElement(vector<int>& a) {
        int n = a.size(), ans;
        n = floor(n/2);
        map<int,int>m;
        for(int i = 0; i<a.size(); i++){
            m[a[i]]++;
            if(m[a[i]] > n){
                ans = a[i];
                break;
            }                
        }
        return ans;
    }
};
