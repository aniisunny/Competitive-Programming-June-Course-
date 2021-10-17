class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        int i = 0, n = a.size(), j = n - k;
        int best, total;
        total = accumulate(a.begin() + j, a.end(), 0l);
        best = total;
        while(k--)
            best = max(best, total += a[i++] - a[j++]);
        return best;
    }
};
