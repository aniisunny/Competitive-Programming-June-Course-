class Solution {
public:
    int wiggleMaxLength(vector<int>& a) {
        int pos = 1, neg = 1;
        for(int i = 1; i<a.size(); i++){
            if(a[i] > a[i-1])
                pos = neg+1;
            else if(a[i] < a[i-1])
                neg = pos+1;
        }
        return max(pos, neg);
    }
};
