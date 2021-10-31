class Solution {
public:
    bool increasingTriplet(vector<int>& a) {
       if (a.size()<=2){return false;}
        int i=INT_MAX;
        int j=INT_MAX;
                  
     for(int it=0;it<a.size();it++){
         if(a[it]<=i){
             i=a[it];
         }
         else if(a[it]<=j){
             j=a[it];
         }
         else { 
             return true;
         }
     }
   
      return false;  
    
    }
};
