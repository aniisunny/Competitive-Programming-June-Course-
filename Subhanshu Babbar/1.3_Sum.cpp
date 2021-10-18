class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        if(arr.size() <=2) return {};
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        vector<int> temp;
        int n=arr.size();
        for(int i=0;i<n;i++){             
            int start=i+1;
            int end=arr.size()-1;
            
            while(start<end){
                if(arr[i]+arr[start]+arr[end]<0){
                    start++;
                
                }
                else if(arr[i]+arr[start]+arr[end]>0) {
                    end--;
                
                }
                else if((arr[i]+arr[start]+arr[end])==0){
                   ans.push_back({arr[i],arr[start],arr[end]});
                   start++;
                   end--;
                    
                while((start < end) && arr[start] == arr[start-1]) start++;
                while((start < end) && arr[end] == arr[end+1]) end--;
                    
                }
            }
            
            for(i;i<n-1;i++){
                if(arr[i]!=arr[i+1]) {
                    break;
                }
            }
        }
        return ans;
    }
};




