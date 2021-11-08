class Solution {
public:
    
    bool canPlaced(vector<int>& pos, int mid,int m){
        m--;
        int last=pos[0];
        for(int i=0;i<pos.size();i++){
            if(pos[i]-last>=mid){
                last=pos[i];
                m--;
            }
        }
        return m<=0;
    }
    int maxDistance(vector<int>& pos, int m) {
        sort(pos.begin(),pos.end());
        int start=1,end=pos[pos.size()-1]-pos[0];
        int ans=0;
        while(start<=end){
            
            int mid=start+(end-start)/2;
            
            if(canPlaced(pos,mid,m)){
                start=mid+1;
                ans=mid;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
};