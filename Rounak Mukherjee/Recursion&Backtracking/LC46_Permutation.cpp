// Approach 1: (Extra freq array space)
class Solution {
public:
    void solve(vector<int>&ds,vector<vector<int>>&ans,vector<int>&num, int freq[]){
      if(ds.size()==num.size()){
          ans.push_back(ds);
          return;
      }
       for(int i=0;i<num.size();i++){
           if(!freq[i]){
               ds.push_back(num[i]);
               freq[i]=1;
               solve(ds,ans,num,freq);
               freq[i]=0;
               ds.pop_back();
           }
       } 
    }
    vector<vector<int>> permute(vector<int>& num) {
        vector<vector<int>>ans;
        vector<int>ds;
        int freq[num.size()];
        for(int i=0;i<num.size();i++){
            freq[i]=0;
        }
        solve(ds,ans,num,freq);
        return ans;
    }
};
//Optimised:
class Solution {
public:
    void solve(int in,vector<vector<int>>&ans,vector<int>num){
        if(in==num.size()){
            ans.push_back(num);
            return;
        }
        for(int i=in;i<num.size();i++){
          swap(num[i],num[in]);
            solve(in+1,ans,num);
          swap(num[i],num[in]);  
        }
    }
    vector<vector<int>> permute(vector<int>& num) {
        vector<vector<int>>ans;
        solve(0,ans,num);
        return ans;
    }
};
