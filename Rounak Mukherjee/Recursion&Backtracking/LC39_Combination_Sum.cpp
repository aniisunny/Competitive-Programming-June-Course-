class Solution {
public:
    void solve(vector<int>arr, int i, int tar, vector<vector<int>> &ans, vector<int>&t){
        if(i==arr.size()){
            if(tar==0){
                ans.push_back(t);
                return;
            }else{
                return;
            }
           
        }
        if(tar==0){
            ans.push_back(t);
            return;
        }
       
        tar-=arr[i];
        t.push_back(arr[i]);
        if(tar>=0){ 
        solve(arr,i,tar,ans,t);
        }
        tar+=arr[i];
        t.pop_back();
        solve(arr,i+1,tar,ans,t);
    }
    
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>ans;
        vector<int>t;
        solve(arr,0,target,ans,t);
        return ans;
    }
};
