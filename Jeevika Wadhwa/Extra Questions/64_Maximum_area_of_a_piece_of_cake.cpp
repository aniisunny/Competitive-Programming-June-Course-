class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        sort(begin(hc), end(hc));
        sort(begin(vc), end(vc));
        int m = 1e9+7;
        int l = max(hc[0], h - hc.back());
        int b = max(vc[0], w - vc.back());
        
        for(int i = 0; i<hc.size()-1; i++)
            l = max(l, hc[i+1] - hc[i]);
        for(int j = 0; j<vc.size()-1; j++)
            b = max(b, vc[j+1] - vc[j]);
        return (long)l * b % m;
    }
};
