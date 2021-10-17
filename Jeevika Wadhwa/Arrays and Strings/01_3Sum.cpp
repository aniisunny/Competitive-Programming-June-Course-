class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>>ans;
        if(a.size()<3)return ans;
        sort(begin(a),end(a));
        
        for(int i=0;i<a.size();i++){
            if(i!=0 && a[i]==a[i-1])
                continue;
            int j=i+1, k=a.size()-1;
            while(j<k){
                if(a[i]+a[j]+a[k]==0){
                    ans.push_back({a[i],a[j],a[k]});
                    while(j!=k && a[j]==a[j+1])j++;
                    while(j!=k && a[k]==a[k-1])k--;
                    j++,k--;
                }
                else if(a[i]+a[j]+a[k]<0)j++;
                else k--;                  
            }
        }
        return ans;
    }
};
