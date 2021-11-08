class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int max_dist = 1, i=0;
        while(seats[i]!=1) {
            i++;
        }
        max_dist = max(max_dist, i);
        int j=i;
        for(; i<seats.size(); i++) {
            if(seats[i]==1) {
                max_dist = max(max_dist, (i-j)/2);
                j=i;
            }
        }
        max_dist = max(max_dist, (i-j-1));
        return max_dist;
    }
};