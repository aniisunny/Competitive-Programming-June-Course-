class Solution {
public:
    bool isPossible(vector<int> &position, int force, int balls) {
        int ballat=position[0];
        balls--;
        for(int i=1; i<position.size() && balls!=0; i+) {
            if(position[i]-ballat>=force) {
                balls--;
                ballat=position[i];
            }
        }
        return balls==0;
    }
    int maxDistance(vector<int>& position, int m) {
        int ans=0;
        sort(position.begin(), position.end());
        int start = 1, end = position[position.size()-1]-position[0];
        while(start<=end) {
            int mid = start + (end-start)/2;
            if(isPossible(position, mid, m)) {
                ans = mid;
                start = mid+1;
            }
            else {
                end = mid-1;
            }
        }
        return ans;
    }
};