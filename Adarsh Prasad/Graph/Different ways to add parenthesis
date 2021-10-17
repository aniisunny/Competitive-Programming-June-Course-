class Solution {
public:
    vector<int> diffWaysToCompute(string s) {
        vector<int>ans;
        for(int i = 0; i<s.size(); i++){
            char c = s[i];
            if(ispunct(c)){
                for(auto a : diffWaysToCompute(s.substr(0, i)))
                    for(auto b : diffWaysToCompute(s.substr(i+1)))
                        ans.push_back(c == '-' ? a-b : c == '+' ? a+b : a*b);
            }
        }
        return ans.size() ? ans : vector<int>{stoi(s)};
    }
};
