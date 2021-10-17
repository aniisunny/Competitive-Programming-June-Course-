class Solution {
public:
    int jump(vector<int>& a) {
        int jump = 0, farthest = 0, end = 0;
        for(int i = 0; i<a.size()-1; i++){
            farthest = max(farthest, i + a[i]);
            if(i == end){
                end = farthest;
                jump++;
            }
        }
        return jump;
    }
};
