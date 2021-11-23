class Solution {
public:
    bool ch(vector<int> a,int gap, int ball){
        int last=a[0];
        ball--;
        for(int i=0;i<a.size() && ball!=0; i++){
            if(a[i]-last>=gap){
                last=a[i];
                ball--;
            }
        }
        return ball==0;
    }
    
    
    int maxDistance(vector<int>& a, int mi) {
        sort(begin(a),end(a));
        
        int s=1; int e= a[a.size()-1]-a[0];
        int ans=0;
        while(s<=e){
            int  m=s+(e-s)/2;
            
            if(ch(a,m,mi)){
                s=m+1;
                ans=m;
            }
            else{
                e=m-1;
            }
            
        }
        return ans; 
    }
};
