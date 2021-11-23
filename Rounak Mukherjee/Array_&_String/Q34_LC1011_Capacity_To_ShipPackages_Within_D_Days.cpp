class Solution {
public:
    
    bool isFeasible(vector<int>arr,int k,int mid){
         int req=1,sum=0;
    for(int i=0;i<arr.size();i++){
        if(sum+arr[i]>mid){
            req++;
            sum=arr[i];
        }
        else{
            sum+=arr[i];
        }
    }
    if(req>k){return false;}
    return true;
    }
    
    
    
    
    int shipWithinDays(vector<int>& arr, int k) {
        
         int sum=0,mx=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        mx=max(mx,arr[i]);
    }
    int low=mx,high=sum,res=0;
    
    while(low<=high){
        int mid=(low+high)/2;
        if(isFeasible(arr,k,mid)){
            res=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return res;
        
    }
};
