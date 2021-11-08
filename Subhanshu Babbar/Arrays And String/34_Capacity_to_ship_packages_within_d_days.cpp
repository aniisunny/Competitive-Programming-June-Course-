class Solution {
public:
    bool carryweight(vector<int>& weights,int mid,int days){
        int capacity=0;
        int d=1;
        for(int i=0;i<weights.size()&&days!=0;i++){
            capacity+=weights[i];
            if(capacity>mid){
                d++;
                capacity=weights[i];
            }
        }
        return days>=d;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        int max_ele=0,sum=0,ans=0;
        for(auto i:weights){
            max_ele=max(max_ele,i);
            sum+=i;
        }
        int start=max_ele,end=sum;
      
        while(start<=end){
            int mid=start + (end-start)/2;
            if(carryweight(weights,mid,days)==true){
                end=mid-1;
                ans=mid;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
};