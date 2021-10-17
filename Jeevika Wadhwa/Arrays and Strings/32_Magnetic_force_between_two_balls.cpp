class Solution {
public:
    bool isPossible(vector<int>position, int gap, int balls){
        int last = position[0];
        balls--;
        for(int i=1;i<position.size() && balls!=0;i++){
            if(position[i] - last >= gap){
                balls--;
                last = position[i];
            }
        }
        return balls == 0;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(begin(position), end(position));
        int maxForce = 0;
        int start = 1, end = position[position.size()-1]-position[0];
        while(start <= end){
            int mid = (start + end)/2;
            if(isPossible(position, mid, m)){
                maxForce = mid;
                start = mid+1;
            }
            else
                end = mid-1;
        }
        return maxForce;
    }
};
