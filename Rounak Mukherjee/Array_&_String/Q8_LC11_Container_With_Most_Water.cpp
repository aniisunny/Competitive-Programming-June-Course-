class Solution {
public:
    int maxArea(vector<int>& a) {
     int res=0; 
     int l=0, r=a.size()-1;
        
       while(l<r){
           int mi=min(a[l],a[r]);
           res=max(res, mi*(r-l));
           if(a[l]<a[r]){l++;}
           else{r--;}
       } 
        return res;
    }
};
