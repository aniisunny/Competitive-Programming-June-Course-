class Solution {
public:
    bool ch(vector<int>n,int m,int o){
        for(auto i: n){
            o-=(--i/m);
        }
        return o>=0;
    }
    
    
    int minimumSize(vector<int>& n, int o) {
        int mp=0;
        int maxi=INT_MIN;
        for(auto i:n){
            maxi=max(maxi,i);
        }
        
        int s=1; int e=maxi;
        while(s<=e){
            int m=s+(e-s)/2;
            
            if(ch(n,m,o)){
                e=m-1;
                mp=m;
            }
            else{
                s=m+1;
            }
            
        }
        return mp;
    }
};
