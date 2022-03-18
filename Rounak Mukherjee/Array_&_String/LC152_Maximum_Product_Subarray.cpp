// class Solution {
// public:
//     int maxProduct(vector<int>& a) {
//         int ans=a[0];
//         int ma=ans;
//         int mi=ans;
//         for(int i=1;i<a.size();i++){
//             if(a[i]<0){swap(ma,mi);}
            
//             ma=max(ma*a[i],a[i]);
//             mi=min(mi*a[i],a[i]);
            
//             ans=max(ans,ma);
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int maxProduct(vector<int>& arr) {
        long long int p=1, maxp=INT_MIN, n=arr.size();
     for(int i=0;i<n;i++){
         p*=arr[i];
         maxp=max(maxp,p);
         
         if(p==0){
             p=1;
         }
     }
     p=1;
     for(int i=n-1;i>=0;i--){
           p*=arr[i];
         maxp=max(maxp,p);
          if(p==0){
             p=1;
         } 
     }
     return maxp;}
};
