class Solution {
public:
    int numTeams(vector<int>& rating) {
        
        int ans = 0;
        for (int i = 1; i < rating.size()-1; i++) {
            int leftLarger = 0, leftSmaller = 0, rightLarger = 0, rightSmaller = 0;
            for (int j = 0; j < i; j++)
                if (rating[j] < rating[i])
                    leftSmaller++;
                else if (rating[j] > rating[i])
                    leftLarger++;
            for (int j = i + 1; j < rating.size(); j++)
                if (rating[j] < rating[i])
                    rightSmaller++;
                else if (rating[j] > rating[i])
                    rightLarger++;
            ans += leftSmaller * rightLarger + leftLarger * rightSmaller;
        }
        return ans;
    }
};