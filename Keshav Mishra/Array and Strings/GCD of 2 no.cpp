class Solution {
public:
    int findGCD(vector<int>& n) {
    return __gcd(*min_element(begin(n), end(n)), *max_element(begin(n), end(n)));
}
};