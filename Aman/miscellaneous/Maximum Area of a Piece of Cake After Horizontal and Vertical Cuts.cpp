class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizon, vector<int>& verti) {
        
        int hmax=0,vmax=0,k=0,l=0;
        sort(horizon.begin(),horizon.end());
        sort(verti.begin(),verti.end());
        
        for(int i=0;i<horizon.size();i++)
        {
            hmax=max(hmax,horizon[i]-k);
            k=horizon[i];
        }
        hmax=max(hmax,h-k);
        
        for(int i=0;i<verti.size();i++)
        {
            vmax=max(vmax,verti[i]-l);
            l=verti[i];
        }
        vmax=max(vmax,w-l);
        
        return (long)vmax*hmax%1000000007; 
    }
};
